/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sentry.framework/Sentry
*/


@protocol OS_os_log;
@class NSObject;

@interface STYScenarioReportLogger : NSObject {

	NSObject*<OS_os_log> _logHandle;

}

@property (retain) NSObject*<OS_os_log> logHandle;              //@synthesize logHandle=_logHandle - In the implementation block
+(id)sharedLogger;
-(NSObject*<OS_os_log>)logHandle;
-(void)setLogHandle:(NSObject*<OS_os_log>)arg1 ;
@end

