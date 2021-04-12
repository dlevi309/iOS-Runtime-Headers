/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/

#import <libobjc.A.dylib/WBSLogger.h>

@protocol OS_dispatch_queue;
@class NSURL, NSOutputStream, NSObject, NSDate, NSTimer, NSString;

@interface WBSFileLogger : NSObject <WBSLogger> {

	NSURL* _directoryURL;
	NSOutputStream* _outputStream;
	NSObject*<OS_dispatch_queue> _logQueue;
	unsigned long long _maximumLogAgeInDays;
	NSDate* _logStartDate;
	NSTimer* _closeStreamTimer;
	NSString* _logName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)collectLogsInDirectory:(id)arg1 withName:(id)arg2 intoFile:(id)arg3 error:(id*)arg4 ;
-(void)dealloc;
-(void)logMessage:(id)arg1 ;
-(void)tearDown;
-(void)_removeOldLogs;
-(void)_logMessage:(id)arg1 date:(id)arg2 ;
-(void)_closeStream;
-(void)logFormat:(id)arg1 ;
-(id)initWithDirectoryURL:(id)arg1 logName:(id)arg2 maximumLogAge:(unsigned long long)arg3 ;
@end

