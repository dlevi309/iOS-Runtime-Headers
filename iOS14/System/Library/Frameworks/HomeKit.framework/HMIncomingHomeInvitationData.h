/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMHomeInvitationData.h>

@class NSString, NSUUID;

@interface HMIncomingHomeInvitationData : HMHomeInvitationData {

	NSString* _inviterUserID;
	NSString* _homeName;
	NSUUID* _homeUUID;
	NSString* _inviterName;
	NSUUID* _inviterUUID;

}

@property (nonatomic,copy) NSString * inviterName;                     //@synthesize inviterName=_inviterName - In the implementation block
@property (nonatomic,readonly) NSString * inviterUserID;               //@synthesize inviterUserID=_inviterUserID - In the implementation block
@property (nonatomic,copy,readonly) NSString * homeName;               //@synthesize homeName=_homeName - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * homeUUID;                 //@synthesize homeUUID=_homeUUID - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * inviterUUID;              //@synthesize inviterUUID=_inviterUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)homeUUID;
-(NSString *)inviterUserID;
-(NSString *)inviterName;
-(NSUUID *)inviterUUID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)homeName;
-(void)setInviterName:(NSString *)arg1 ;
-(id)initWithInviterUserID:(id)arg1 invitationIdentifier:(id)arg2 inviterName:(id)arg3 invitationState:(long long)arg4 homeName:(id)arg5 homeUUID:(id)arg6 expiryDate:(id)arg7 ;
@end

