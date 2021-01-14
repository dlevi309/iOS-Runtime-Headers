/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HMDUser, HMDDevice, HMUserPresenceAuthorization, HMUserPresenceCompute, HMDUserPresenceRegion, HMDUserPresenceUpdateReason;

@interface HMDUserPresenceFeed : HMFObject {

	HMDUser* _user;
	HMDDevice* _residentDevice;
	HMUserPresenceAuthorization* _presenceAuthStatus;
	HMUserPresenceCompute* _presenceComputeStatus;
	HMDUserPresenceRegion* _presenceRegion;
	HMDUserPresenceUpdateReason* _reason;

}

@property (nonatomic,__weak,readonly) HMDUser * user;                                         //@synthesize user=_user - In the implementation block
@property (nonatomic,__weak,readonly) HMDDevice * residentDevice;                             //@synthesize residentDevice=_residentDevice - In the implementation block
@property (nonatomic,readonly) HMUserPresenceAuthorization * presenceAuthStatus;              //@synthesize presenceAuthStatus=_presenceAuthStatus - In the implementation block
@property (nonatomic,readonly) HMUserPresenceCompute * presenceComputeStatus;                 //@synthesize presenceComputeStatus=_presenceComputeStatus - In the implementation block
@property (nonatomic,readonly) HMDUserPresenceRegion * presenceRegion;                        //@synthesize presenceRegion=_presenceRegion - In the implementation block
@property (nonatomic,readonly) HMDUserPresenceUpdateReason * reason;                          //@synthesize reason=_reason - In the implementation block
-(id)description;
-(HMDUserPresenceUpdateReason *)reason;
-(HMDUser *)user;
-(HMUserPresenceAuthorization *)presenceAuthStatus;
-(HMUserPresenceCompute *)presenceComputeStatus;
-(HMDDevice *)residentDevice;
-(BOOL)isEqual:(id)arg1 ;
-(HMDUserPresenceRegion *)presenceRegion;
-(id)initWithUser:(id)arg1 residentDevice:(id)arg2 presenceAuthStatus:(id)arg3 presenceComputeStatus:(id)arg4 presenceRegion:(id)arg5 reason:(id)arg6 ;
@end

