/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMHomeInvitation.h>

@class HMMutableArray, HMUser, NSArray;

@interface HMOutgoingHomeInvitation : HMHomeInvitation {

	HMMutableArray* _accessoryInvitations;
	HMUser* _invitee;

}

@property (nonatomic,readonly) HMUser * invitee;                            //@synthesize invitee=_invitee - In the implementation block
@property (nonatomic,readonly) NSArray * accessoryInvitations; 
+(BOOL)supportsSecureCoding;
+(id)homeInvitationsFromData:(id)arg1 home:(id)arg2 ;
+(id)homeInvitationsFromEncodedData:(id)arg1 home:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)__configureWithContext:(id)arg1 home:(id)arg2 ;
-(id)initWithInvitationData:(id)arg1 home:(id)arg2 ;
-(void)cancelInviteWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_cancelInviteWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSArray *)accessoryInvitations;
-(BOOL)_mergeWithNewAccessoryInvitations:(id)arg1 operations:(id)arg2 ;
-(HMUser *)invitee;
@end

