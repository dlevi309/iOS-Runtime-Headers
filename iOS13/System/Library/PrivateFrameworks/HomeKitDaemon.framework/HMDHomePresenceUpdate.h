/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HMDHomePresence, HMDUserPresence, HMDDevice;

@interface HMDHomePresenceUpdate : HMFObject {

	BOOL _update;
	HMDHomePresence* _homePresence;
	HMDUserPresence* _userPresence;
	HMDDevice* _causingDevice;

}

@property (nonatomic,readonly) HMDHomePresence * homePresence;              //@synthesize homePresence=_homePresence - In the implementation block
@property (nonatomic,readonly) HMDUserPresence * userPresence;              //@synthesize userPresence=_userPresence - In the implementation block
@property (getter=isUpdate,nonatomic,readonly) BOOL update;                 //@synthesize update=_update - In the implementation block
@property (nonatomic,readonly) HMDDevice * causingDevice;                   //@synthesize causingDevice=_causingDevice - In the implementation block
-(id)description;
-(BOOL)isUpdate;
-(id)initWithHomePresence:(id)arg1 userPresence:(id)arg2 update:(BOOL)arg3 causingDevice:(id)arg4 ;
-(HMDHomePresence *)homePresence;
-(HMDUserPresence *)userPresence;
-(HMDDevice *)causingDevice;
@end

