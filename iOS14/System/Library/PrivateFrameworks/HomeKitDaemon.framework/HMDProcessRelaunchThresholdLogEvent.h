/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@class NSNumber;

@interface HMDProcessRelaunchThresholdLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	NSNumber* _timeSincePreviousProcessLaunch;

}

@property (nonatomic,readonly) NSNumber * timeSincePreviousProcessLaunch;              //@synthesize timeSincePreviousProcessLaunch=_timeSincePreviousProcessLaunch - In the implementation block
+(id)uuid;
-(id)eventName;
-(id)serializedEvent;
-(id)initWithTimeSincePreviousLaunch:(id)arg1 ;
-(NSNumber *)timeSincePreviousProcessLaunch;
@end

