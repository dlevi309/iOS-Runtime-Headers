/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDHomeInvitation.h>

@class HMDAccount, HMFPairingIdentity, NSDictionary, NSString, NSUUID;

@interface HMDIncomingHomeInvitation : HMDHomeInvitation {

	HMDAccount* _inviterAccount;
	HMFPairingIdentity* _inviterIdentity;

}

@property (nonatomic,readonly) NSDictionary * bulletinContext; 
@property (nonatomic,copy,readonly) NSString * homeName; 
@property (nonatomic,copy,readonly) NSUUID * homeUUID; 
@property (readonly) HMDAccount * inviterAccount;                            //@synthesize inviterAccount=_inviterAccount - In the implementation block
@property (copy,readonly) HMFPairingIdentity * inviterIdentity;              //@synthesize inviterIdentity=_inviterIdentity - In the implementation block
@property (nonatomic,copy,readonly) NSString * inviterUserID; 
+(BOOL)supportsSecureCoding;
-(NSUUID *)homeUUID;
-(NSString *)inviterUserID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)homeName;
-(NSDictionary *)bulletinContext;
-(BOOL)refreshDisplayName;
-(id)describeWithFormat;
-(HMDAccount *)inviterAccount;
-(HMFPairingIdentity *)inviterIdentity;
-(id)initWithInviterAccount:(id)arg1 invitationIdentifier:(id)arg2 invitationState:(long long)arg3 homeName:(id)arg4 homeUUID:(id)arg5 inviterIdentity:(id)arg6 expiryDate:(id)arg7 ;
@end

