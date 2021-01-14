/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSArray, EDAMNoteShareRelationshipRestrictions;

@interface EDAMNoteShareRelationships : FATObject {

	NSArray* _invitations;
	NSArray* _memberships;
	EDAMNoteShareRelationshipRestrictions* _invitationRestrictions;

}

@property (nonatomic,retain) NSArray * invitations;                                                       //@synthesize invitations=_invitations - In the implementation block
@property (nonatomic,retain) NSArray * memberships;                                                       //@synthesize memberships=_memberships - In the implementation block
@property (nonatomic,retain) EDAMNoteShareRelationshipRestrictions * invitationRestrictions;              //@synthesize invitationRestrictions=_invitationRestrictions - In the implementation block
+(id)structName;
+(id)structFields;
-(NSArray *)invitations;
-(void)setInvitations:(NSArray *)arg1 ;
-(NSArray *)memberships;
-(void)setMemberships:(NSArray *)arg1 ;
-(EDAMNoteShareRelationshipRestrictions *)invitationRestrictions;
-(void)setInvitationRestrictions:(EDAMNoteShareRelationshipRestrictions *)arg1 ;
@end

