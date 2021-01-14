/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMHomeInvitationData.h>

@class NSString, NSUUID;

@interface HMOutgoingHomeInvitationData : HMHomeInvitationData {

	NSString* _inviteeUserID;
	NSString* _inviteeName;
	NSUUID* _inviteeUUID;

}

@property (nonatomic,copy) NSString * inviteeName;                         //@synthesize inviteeName=_inviteeName - In the implementation block
@property (nonatomic,copy,readonly) NSString * inviteeUserID;              //@synthesize inviteeUserID=_inviteeUserID - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * inviteeUUID;                  //@synthesize inviteeUUID=_inviteeUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)inviteeUserID;
-(NSString *)inviteeName;
-(NSUUID *)inviteeUUID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setInviteeName:(NSString *)arg1 ;
-(id)initWithUUID:(id)arg1 inviteeUserID:(id)arg2 inviteeName:(id)arg3 invitationState:(long long)arg4 expiryDate:(id)arg5 ;
@end

