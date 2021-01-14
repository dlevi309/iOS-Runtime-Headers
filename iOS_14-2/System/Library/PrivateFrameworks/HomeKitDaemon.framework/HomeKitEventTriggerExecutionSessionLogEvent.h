/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class HMDAnalyticsEventTriggerExecutionSessionData, NSString;

@interface HomeKitEventTriggerExecutionSessionLogEvent : HMDLogEvent <HMDAWDLogEvent> {

	HMDAnalyticsEventTriggerExecutionSessionData* _analyticsData;

}

@property (nonatomic,readonly) HMDAnalyticsEventTriggerExecutionSessionData * analyticsData;              //@synthesize analyticsData=_analyticsData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)uuid;
-(HMDAnalyticsEventTriggerExecutionSessionData *)analyticsData;
-(id)initWithSessionID:(id)arg1 ;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(int)toAWDExecutionState:(int)arg1 ;
@end

