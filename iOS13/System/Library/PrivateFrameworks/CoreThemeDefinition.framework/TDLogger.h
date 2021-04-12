/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface TDLogger : NSObject {

	NSObject*<OS_dispatch_queue> _loggingQueue;
	int _verbosity;
	int _logMaxVerbosity;

}

@property (assign,nonatomic) int verbosity; 
+(id)logger;
+(id)defaultLogger;
-(id)init;
-(void)dealloc;
-(void)logInfo:(id)arg1 ;
-(void)logError:(id)arg1 ;
-(int)verbosity;
-(void)logMessage:(id)arg1 whenVerbosity:(int)arg2 ;
-(void)logExtra:(id)arg1 ;
-(void)logWarning:(id)arg1 ;
-(void)setVerbosity:(int)arg1 ;
-(void)logExtraWithFormat:(id)arg1 ;
-(void)logInfoWithFormat:(id)arg1 ;
-(void)logWarningWithFormat:(id)arg1 ;
-(void)logErrorWithFormat:(id)arg1 ;
-(BOOL)isVerbosityLogErrorsOnly;
-(BOOL)isVerbosityLogWarningsAndErrors;
-(BOOL)isVerbosityLogEverything;
-(void)waitForLoggingToComplete;
@end

