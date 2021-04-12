/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDUserMessagePolicy.h>

@interface HMDMutableUserMessagePolicy : HMDUserMessagePolicy

@property (assign) unsigned long long userPrivilege; 
@property (assign) BOOL requiresRemoteAccess; 
@property (assign) BOOL requiresCameraStreamingAccess; 
+(id)userMessagePolicyWithHome:(id)arg1 userPrivilege:(unsigned long long)arg2 remoteAccessRequired:(BOOL)arg3 ;
+(id)userMessagePolicyWithHome:(id)arg1 userPrivilege:(unsigned long long)arg2 remoteAccessRequired:(BOOL)arg3 requiresCameraStreamingAccess:(BOOL)arg4 ;
-(void)setUserPrivilege:(unsigned long long)arg1 ;
-(void)setRequiresRemoteAccess:(BOOL)arg1 ;
-(void)setRequiresCameraStreamingAccess:(BOOL)arg1 ;
@end

