/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>

@interface HMDHMBLogEvent : HMDLogEvent {

	int _containerType;
	int _zoneType;

}

@property (readonly) int containerType;              //@synthesize containerType=_containerType - In the implementation block
@property (readonly) int zoneType;                   //@synthesize zoneType=_zoneType - In the implementation block
-(int)containerType;
-(int)zoneType;
-(id)initWithEventType:(id)arg1 cloudZoneID:(id)arg2 ;
@end

