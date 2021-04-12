/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSString, NSArray;

@interface EDAMManageNoteSharesParameters : FATObject {

	NSString* _noteGuid;
	NSArray* _membershipsToUpdate;
	NSArray* _invitationsToUpdate;
	NSArray* _membershipsToUnshare;
	NSArray* _invitationsToUnshare;

}

@property (nonatomic,retain) NSString * noteGuid;                         //@synthesize noteGuid=_noteGuid - In the implementation block
@property (nonatomic,retain) NSArray * membershipsToUpdate;               //@synthesize membershipsToUpdate=_membershipsToUpdate - In the implementation block
@property (nonatomic,retain) NSArray * invitationsToUpdate;               //@synthesize invitationsToUpdate=_invitationsToUpdate - In the implementation block
@property (nonatomic,retain) NSArray * membershipsToUnshare;              //@synthesize membershipsToUnshare=_membershipsToUnshare - In the implementation block
@property (nonatomic,retain) NSArray * invitationsToUnshare;              //@synthesize invitationsToUnshare=_invitationsToUnshare - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)noteGuid;
-(void)setNoteGuid:(NSString *)arg1 ;
-(NSArray *)membershipsToUpdate;
-(void)setMembershipsToUpdate:(NSArray *)arg1 ;
-(NSArray *)invitationsToUpdate;
-(void)setInvitationsToUpdate:(NSArray *)arg1 ;
-(NSArray *)membershipsToUnshare;
-(void)setMembershipsToUnshare:(NSArray *)arg1 ;
-(NSArray *)invitationsToUnshare;
-(void)setInvitationsToUnshare:(NSArray *)arg1 ;
@end

