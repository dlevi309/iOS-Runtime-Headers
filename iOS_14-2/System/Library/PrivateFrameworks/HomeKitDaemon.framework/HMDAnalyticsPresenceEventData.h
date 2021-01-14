/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@interface HMDAnalyticsPresenceEventData : HMFObject {

	int _presenceEventGranularity;
	int _presenceEventType;

}

@property (assign,nonatomic) int presenceEventGranularity;              //@synthesize presenceEventGranularity=_presenceEventGranularity - In the implementation block
@property (assign,nonatomic) int presenceEventType;                     //@synthesize presenceEventType=_presenceEventType - In the implementation block
-(int)presenceEventType;
-(void)setPresenceEventType:(int)arg1 ;
-(int)presenceEventGranularity;
-(void)setPresenceEventGranularity:(int)arg1 ;
@end

