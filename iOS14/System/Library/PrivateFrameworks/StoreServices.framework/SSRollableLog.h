/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSFileHandle, SSLogFileOptions;

@interface SSRollableLog : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	double _lastFileStatTime;
	NSFileHandle* _fileHandle;
	NSObject*<OS_dispatch_source> _fileObserverSource;
	SSLogFileOptions* _options;

}

@property (readonly) SSLogFileOptions * logOptions; 
-(id)_logFilePathWithIndex:(long long)arg1 ;
-(id)initWithLogOptions:(id)arg1 ;
-(void)writeString:(id)arg1 ;
-(void)_closeLogFile;
-(void)_rollLogFiles;
-(id)_activeLogFilePath;
-(void)_openLogFile;
-(SSLogFileOptions *)logOptions;
-(void)_checkLogFileSize;
-(void)dealloc;
@end

