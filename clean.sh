#!/bin/bash

# Log file to store deleted file information
LOG_FILE="deleted_files.log"

# Function to log file deletion with status
log_deletion() {
  local file="$1"
  local status="$2"
  echo "$(date +"%Y-%m-%d %H:%M:%S") - $file: $status" >> "$LOG_FILE"
}

# Find .class files and process them one by one for logging and deletion
find . -name "*.class" -print0 | while IFS= read -r -d '' file; do
  echo "Deleting: $file"
  if rm "$file"; then
    log_deletion "$file" "Deleted successfully"
  else
    log_deletion "$file" "Deletion failed"
  fi
done

# Print the contents of the log file
cat "$LOG_FILE"

