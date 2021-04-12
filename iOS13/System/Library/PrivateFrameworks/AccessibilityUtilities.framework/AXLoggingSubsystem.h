/*
* Generated on Monday, March 1, 2021 at 2:30:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


@interface AXLoggingSubsystem : NSObject {

	BOOL _ignoreLogging;

}

@property (assign,nonatomic) BOOL ignoreLogging; 
+(void)initialize;
+(id)sharedInstance;
+(id)identifier;
+(double)threshold;
+(id)errorWithDescription:(id)arg1 ;
+(void)initializeSubsytem;
+(id)_errorWithMessage:(id)arg1 underlyingError:(id)arg2 ;
+(id)subsystems;
+(id)wrapError:(id)arg1 description:(id)arg2 ;
+(BOOL)shouldIncludeBacktraceInLogs;
+(BOOL)shouldIncludeFileLineAndFunctionInLogs;
+(BOOL)shouldProcessMessageForLogs;
+(int)defaultLogLevel;
+(BOOL)willLog;
+(BOOL)willLogInfo;
+(BOOL)willLogDebug;
-(BOOL)ignoreLogging;
-(void)setIgnoreLogging:(BOOL)arg1 ;
@end

