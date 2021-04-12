/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDRemoteMessagePolicy.h>

@interface HMDMutableRemoteMessagePolicy : HMDRemoteMessagePolicy

@property (assign) BOOL requiresSecureMessage; 
@property (assign) BOOL allowsAnonymousMessage; 
@property (assign) BOOL requiresAccountMessage; 
@property (assign) unsigned long long transportRestriction; 
@property (assign) unsigned long long roles; 
+(id)remoteMessagePolicyWithRequiresSecureMessage:(BOOL)arg1 allowsAnonymousMessage:(BOOL)arg2 requiresAccountMessage:(BOOL)arg3 transportRestriction:(unsigned long long)arg4 roles:(unsigned long long)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRoles:(unsigned long long)arg1 ;
-(void)setRequiresSecureMessage:(BOOL)arg1 ;
-(void)setRequiresAccountMessage:(BOOL)arg1 ;
-(void)setTransportRestriction:(unsigned long long)arg1 ;
-(void)setAllowsAnonymousMessage:(BOOL)arg1 ;
@end

