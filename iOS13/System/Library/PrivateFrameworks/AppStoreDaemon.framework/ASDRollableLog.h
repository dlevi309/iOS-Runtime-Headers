/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSFileHandle, ASDLogFileOptions;

@interface ASDRollableLog : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	double _lastFileStatTime;
	NSFileHandle* _fileHandle;
	NSObject*<OS_dispatch_source> _fileObserverSource;
	ASDLogFileOptions* _options;

}

@property (readonly) ASDLogFileOptions * logOptions; 
-(void)dealloc;
-(ASDLogFileOptions *)logOptions;
-(void)writeString:(id)arg1 ;
-(id)initWithLogOptions:(id)arg1 ;
-(void)_openLogFile;
-(void)_checkLogFileSize;
-(void)_closeLogFile;
-(id)_logFilePathWithIndex:(long long)arg1 ;
-(id)_activeLogFilePath;
-(void)_rollLogFiles;
@end

