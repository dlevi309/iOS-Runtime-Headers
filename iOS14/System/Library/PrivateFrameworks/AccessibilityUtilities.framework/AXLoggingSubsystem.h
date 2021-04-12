/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


@interface AXLoggingSubsystem : NSObject {

	BOOL _ignoreLogging;

}

@property (assign,nonatomic) BOOL ignoreLogging; 
+(void)initialize;
+(double)threshold;
+(id)sharedInstance;
+(BOOL)willLog;
+(void)initializeSubsytem;
+(BOOL)willLogInfo;
+(id)_errorWithMessage:(id)arg1 underlyingError:(id)arg2 ;
+(id)wrapError:(id)arg1 description:(id)arg2 ;
+(BOOL)shouldIncludeBacktraceInLogs;
+(BOOL)shouldIncludeFileLineAndFunctionInLogs;
+(BOOL)shouldProcessMessageForLogs;
+(int)defaultLogLevel;
+(BOOL)willLogDebug;
+(id)errorWithDescription:(id)arg1 ;
+(id)subsystems;
+(id)identifier;
-(void)setIgnoreLogging:(BOOL)arg1 ;
-(BOOL)ignoreLogging;
@end

