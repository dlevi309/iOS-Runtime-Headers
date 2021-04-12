/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMHomeInvitation.h>

@class HMUser, HMHomeManager, NSString, NSUUID;

@interface HMIncomingHomeInvitation : HMHomeInvitation {

	HMUser* _inviter;
	HMHomeManager* _homeManager;

}

@property (assign,nonatomic,__weak) HMHomeManager * homeManager;              //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,readonly) HMUser * inviter;                              //@synthesize inviter=_inviter - In the implementation block
@property (nonatomic,copy,readonly) NSString * homeName; 
@property (nonatomic,copy,readonly) NSUUID * homeUUID; 
+(BOOL)supportsSecureCoding;
+(id)homeInvitationsFromData:(id)arg1 homeManager:(id)arg2 ;
+(id)homeInvitationsFromEncodedData:(id)arg1 homeManager:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)homeUUID;
-(NSString *)homeName;
-(HMHomeManager *)homeManager;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)cancelInviteWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_cancelInviteWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setHomeManager:(HMHomeManager *)arg1 ;
-(id)initWithInvitationData:(id)arg1 homeManager:(id)arg2 ;
-(void)_acceptInviteWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_acceptInviteWithPresenceAuthStatus:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)__configureWithContext:(id)arg1 homeManager:(id)arg2 ;
-(void)acceptInviteWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)acceptInviteWithPresenceAuthStatus:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(HMUser *)inviter;
@end

