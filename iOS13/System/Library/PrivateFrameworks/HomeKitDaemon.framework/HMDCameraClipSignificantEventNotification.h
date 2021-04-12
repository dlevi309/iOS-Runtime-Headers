/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@protocol HMDHomePresenceCheck;
@class HMCameraClipSignificantEvent, NSURL, NSUUID;

@interface HMDCameraClipSignificantEventNotification : HMFObject {

	HMCameraClipSignificantEvent* _significantEvent;
	NSURL* _heroFrameURL;
	id<HMDHomePresenceCheck> _homePresence;
	NSUUID* _clipUUID;

}

@property (copy,readonly) HMCameraClipSignificantEvent * significantEvent;              //@synthesize significantEvent=_significantEvent - In the implementation block
@property (copy,readonly) NSURL * heroFrameURL;                                         //@synthesize heroFrameURL=_heroFrameURL - In the implementation block
@property (readonly) id<HMDHomePresenceCheck> homePresence;                             //@synthesize homePresence=_homePresence - In the implementation block
@property (copy,readonly) NSUUID * clipUUID;                                            //@synthesize clipUUID=_clipUUID - In the implementation block
-(id)attributeDescriptions;
-(HMCameraClipSignificantEvent *)significantEvent;
-(NSUUID *)clipUUID;
-(id<HMDHomePresenceCheck>)homePresence;
-(id)initWithSignificantEvent:(id)arg1 heroFrameURL:(id)arg2 homePresence:(id)arg3 clipUUID:(id)arg4 ;
-(NSURL *)heroFrameURL;
-(id)initWithModel:(id)arg1 heroFrameURL:(id)arg2 clipUUID:(id)arg3 ;
@end

