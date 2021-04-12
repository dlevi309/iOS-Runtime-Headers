/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDHMBLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSString;

@interface HMDBackingStoreCKRebuildEvent : HMDHMBLogEvent <HMDAWDLogEvent> {

	int _rebuildStatus;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) int rebuildStatus;                             //@synthesize rebuildStatus=_rebuildStatus - In the implementation block
+(id)uuid;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(id)initWithCloudZoneID:(id)arg1 rebuildStatus:(id)arg2 ;
-(int)rebuildStatus;
@end

