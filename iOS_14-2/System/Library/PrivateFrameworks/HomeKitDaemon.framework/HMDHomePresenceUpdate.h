/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isUpdate;
-(id)description;
-(id)initWithHomePresence:(id)arg1 userPresence:(id)arg2 update:(BOOL)arg3 causingDevice:(id)arg4 ;
-(HMDHomePresence *)homePresence;
-(HMDUserPresence *)userPresence;
-(HMDDevice *)causingDevice;
@end

