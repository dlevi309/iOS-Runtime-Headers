/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@interface HMDStereoPairDailyCountLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	unsigned long long _smallHomePodPairCount;

}

@property (readonly) unsigned long long smallHomePodPairCount;              //@synthesize smallHomePodPairCount=_smallHomePodPairCount - In the implementation block
+(id)uuid;
-(id)eventName;
-(id)serializedEvent;
-(unsigned long long)smallHomePodPairCount;
-(id)initWithSmallHomePodCount:(unsigned long long)arg1 ;
@end

