/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFMessagePolicy.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSUUID, HMDHome;

@interface HMDUserMessagePolicy : HMFMessagePolicy <NSMutableCopying> {

	NSUUID* _homeUUID;
	unsigned long long _userPrivilege;
	BOOL _requiresRemoteAccess;
	BOOL _requiresCameraStreamingAccess;
	HMDHome* _home;

}

@property (__weak,readonly) HMDHome * home;                           //@synthesize home=_home - In the implementation block
@property (readonly) unsigned long long userPrivilege;                //@synthesize userPrivilege=_userPrivilege - In the implementation block
@property (readonly) BOOL requiresRemoteAccess;                       //@synthesize requiresRemoteAccess=_requiresRemoteAccess - In the implementation block
@property (readonly) BOOL requiresCameraStreamingAccess;              //@synthesize requiresCameraStreamingAccess=_requiresCameraStreamingAccess - In the implementation block
+(id)userMessagePolicyWithHome:(id)arg1 userPrivilege:(unsigned long long)arg2 remoteAccessRequired:(BOOL)arg3 ;
+(id)userMessagePolicyWithHome:(id)arg1 userPrivilege:(unsigned long long)arg2 remoteAccessRequired:(BOOL)arg3 requiresCameraStreamingAccess:(BOOL)arg4 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(HMDHome *)home;
-(id)__initWithHome:(id)arg1 userPrivilege:(unsigned long long)arg2 remoteAccessRequired:(BOOL)arg3 requiresCameraStreamingAccess:(BOOL)arg4 ;
-(BOOL)requiresRemoteAccess;
-(unsigned long long)userPrivilege;
-(BOOL)requiresCameraStreamingAccess;
@end

