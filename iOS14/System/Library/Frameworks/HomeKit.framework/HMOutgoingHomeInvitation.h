/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithInvitationData:(id)arg1 home:(id)arg2 ;
-(void)cancelInviteWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_cancelInviteWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSArray *)accessoryInvitations;
-(BOOL)_mergeWithNewAccessoryInvitations:(id)arg1 operations:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(HMUser *)invitee;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_unconfigure;
-(id)initWithCoder:(id)arg1 ;
-(void)__configureWithContext:(id)arg1 home:(id)arg2 ;
-(void)dealloc;
@end

