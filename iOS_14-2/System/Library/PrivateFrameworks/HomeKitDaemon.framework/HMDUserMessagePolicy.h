/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(HMDHome *)home;
-(unsigned long long)userPrivilege;
-(id)__initWithHome:(id)arg1 userPrivilege:(unsigned long long)arg2 remoteAccessRequired:(BOOL)arg3 requiresCameraStreamingAccess:(BOOL)arg4 ;
-(BOOL)requiresRemoteAccess;
-(BOOL)requiresCameraStreamingAccess;
@end

