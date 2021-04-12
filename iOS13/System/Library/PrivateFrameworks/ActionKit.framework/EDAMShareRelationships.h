/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSArray, EDAMShareRelationshipRestrictions;

@interface EDAMShareRelationships : FATObject {

	NSArray* _invitations;
	NSArray* _memberships;
	EDAMShareRelationshipRestrictions* _invitationRestrictions;

}

@property (nonatomic,retain) NSArray * invitations;                                                   //@synthesize invitations=_invitations - In the implementation block
@property (nonatomic,retain) NSArray * memberships;                                                   //@synthesize memberships=_memberships - In the implementation block
@property (nonatomic,retain) EDAMShareRelationshipRestrictions * invitationRestrictions;              //@synthesize invitationRestrictions=_invitationRestrictions - In the implementation block
+(id)structName;
+(id)structFields;
-(NSArray *)invitations;
-(void)setInvitations:(NSArray *)arg1 ;
-(NSArray *)memberships;
-(void)setMemberships:(NSArray *)arg1 ;
-(EDAMShareRelationshipRestrictions *)invitationRestrictions;
-(void)setInvitationRestrictions:(EDAMShareRelationshipRestrictions *)arg1 ;
@end

