/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HMCameraSignificantEvent, HMDCameraSnapshotIDSRelayReceiver;

@interface HMDCameraSignificantEventFetchHeroFrameContext : HMFObject {

	HMCameraSignificantEvent* _significantEvent;
	HMDCameraSnapshotIDSRelayReceiver* _relayReceiver;

}

@property (readonly) HMCameraSignificantEvent * significantEvent;                    //@synthesize significantEvent=_significantEvent - In the implementation block
@property (readonly) HMDCameraSnapshotIDSRelayReceiver * relayReceiver;              //@synthesize relayReceiver=_relayReceiver - In the implementation block
-(HMCameraSignificantEvent *)significantEvent;
-(id)initWithSignificantEvent:(id)arg1 relayReceiver:(id)arg2 ;
-(HMDCameraSnapshotIDSRelayReceiver *)relayReceiver;
@end

