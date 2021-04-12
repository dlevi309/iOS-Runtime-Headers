/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMAccessControl.h>

@class HMUserPresenceAuthorization, HMUserPresenceCompute, HMUserCameraAccess;

@interface HMHomeAccessControl : HMAccessControl {

	BOOL _owner;
	BOOL _administrator;
	BOOL _remoteAccessAllowed;
	HMUserPresenceAuthorization* _presenceAuthStatus;
	HMUserPresenceCompute* _presenceComputeStatus;
	HMUserCameraAccess* _camerasAccess;

}

@property (getter=isOwner) BOOL owner;                                                      //@synthesize owner=_owner - In the implementation block
@property (assign,getter=isAdministrator,nonatomic) BOOL administrator;                     //@synthesize administrator=_administrator - In the implementation block
@property (getter=isRemoteAccessAllowed) BOOL remoteAccessAllowed;                          //@synthesize remoteAccessAllowed=_remoteAccessAllowed - In the implementation block
@property (nonatomic,retain) HMUserPresenceAuthorization * presenceAuthStatus;              //@synthesize presenceAuthStatus=_presenceAuthStatus - In the implementation block
@property (nonatomic,retain) HMUserPresenceCompute * presenceComputeStatus;                 //@synthesize presenceComputeStatus=_presenceComputeStatus - In the implementation block
@property (nonatomic,retain) HMUserCameraAccess * camerasAccess;                            //@synthesize camerasAccess=_camerasAccess - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(void)setOwner:(BOOL)arg1 ;
-(BOOL)isOwner;
-(unsigned long long)presenceAuthorizationStatus;
-(BOOL)isAdministrator;
-(void)setAdministrator:(BOOL)arg1 ;
-(BOOL)isRemoteAccessAllowed;
-(unsigned long long)presenceComputationStatus;
-(HMUserCameraAccess *)camerasAccess;
-(void)updatePresenceAuthorizationStatus:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithUser:(id)arg1 owner:(BOOL)arg2 administratorPrivilege:(BOOL)arg3 remoteAccess:(BOOL)arg4 presenceAuthStatus:(id)arg5 presenceComputeStatus:(id)arg6 camerasAccess:(id)arg7 ;
-(void)setRemoteAccessAllowed:(BOOL)arg1 ;
-(HMUserPresenceAuthorization *)presenceAuthStatus;
-(void)setPresenceAuthStatus:(HMUserPresenceAuthorization *)arg1 ;
-(HMUserPresenceCompute *)presenceComputeStatus;
-(void)setPresenceComputeStatus:(HMUserPresenceCompute *)arg1 ;
-(void)setCamerasAccess:(HMUserCameraAccess *)arg1 ;
-(unsigned long long)camerasAccessLevel;
-(void)updateAdministratorAccess:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateRemoteAccess:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateCamerasAccessLevel:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

