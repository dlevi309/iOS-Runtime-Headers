/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDCameraClipOperation.h>
#import <libobjc.A.dylib/HMBLocalZoneMirrorOutputObserver.h>

@class HMDCameraRecordingSessionSignificantEvent, NSDictionary, NSString;

@interface HMDCameraClipAddSignificantEventOperation : HMDCameraClipOperation <HMBLocalZoneMirrorOutputObserver> {

	HMDCameraRecordingSessionSignificantEvent* _significantEvent;
	NSDictionary* _homePresenceByPairingIdentity;

}

@property (copy,readonly) HMDCameraRecordingSessionSignificantEvent * significantEvent;              //@synthesize significantEvent=_significantEvent - In the implementation block
@property (readonly) NSDictionary * homePresenceByPairingIdentity;                                   //@synthesize homePresenceByPairingIdentity=_homePresenceByPairingIdentity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)main;
-(id)attributeDescriptions;
-(HMDCameraRecordingSessionSignificantEvent *)significantEvent;
-(void)localZone:(id)arg1 willPerformMirrorOutputForModel:(id)arg2 ;
-(NSDictionary *)homePresenceByPairingIdentity;
-(id)modelsToUpdate;
-(id)initWithClipModelID:(id)arg1 localZone:(id)arg2 significantEvent:(id)arg3 homePresenceByPairingIdentity:(id)arg4 dataSource:(id)arg5 ;
-(id)initWithClipModelID:(id)arg1 localZone:(id)arg2 significantEvent:(id)arg3 homePresenceByPairingIdentity:(id)arg4 ;
@end

