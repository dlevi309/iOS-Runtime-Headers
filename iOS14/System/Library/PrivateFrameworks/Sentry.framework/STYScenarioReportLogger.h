/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sentry.framework/Sentry
*/


@protocol OS_os_log;
@class NSObject;

@interface STYScenarioReportLogger : NSObject {

	NSObject*<OS_os_log> _logHandle;

}

@property (retain) NSObject*<OS_os_log> logHandle;              //@synthesize logHandle=_logHandle - In the implementation block
+(id)sharedLogger;
-(void)setLogHandle:(NSObject*<OS_os_log>)arg1 ;
-(NSObject*<OS_os_log>)logHandle;
@end

