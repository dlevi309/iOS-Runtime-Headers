/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDUserMessagePolicy.h>

@interface HMDMutableUserMessagePolicy : HMDUserMessagePolicy

@property (assign) unsigned long long userPrivilege; 
@property (assign) BOOL requiresRemoteAccess; 
@property (assign) BOOL requiresCameraStreamingAccess; 
+(id)userMessagePolicyWithHome:(id)arg1 userPrivilege:(unsigned long long)arg2 remoteAccessRequired:(BOOL)arg3 ;
+(id)userMessagePolicyWithHome:(id)arg1 userPrivilege:(unsigned long long)arg2 remoteAccessRequired:(BOOL)arg3 requiresCameraStreamingAccess:(BOOL)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUserPrivilege:(unsigned long long)arg1 ;
-(void)setRequiresRemoteAccess:(BOOL)arg1 ;
-(void)setRequiresCameraStreamingAccess:(BOOL)arg1 ;
@end

