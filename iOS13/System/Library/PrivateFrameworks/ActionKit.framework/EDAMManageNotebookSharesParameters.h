/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSString, NSArray;

@interface EDAMManageNotebookSharesParameters : FATObject {

	NSString* _notebookGuid;
	NSString* _inviteMessage;
	NSArray* _membershipsToUpdate;
	NSArray* _invitationsToCreateOrUpdate;
	NSArray* _unshares;

}

@property (nonatomic,retain) NSString * notebookGuid;                            //@synthesize notebookGuid=_notebookGuid - In the implementation block
@property (nonatomic,retain) NSString * inviteMessage;                           //@synthesize inviteMessage=_inviteMessage - In the implementation block
@property (nonatomic,retain) NSArray * membershipsToUpdate;                      //@synthesize membershipsToUpdate=_membershipsToUpdate - In the implementation block
@property (nonatomic,retain) NSArray * invitationsToCreateOrUpdate;              //@synthesize invitationsToCreateOrUpdate=_invitationsToCreateOrUpdate - In the implementation block
@property (nonatomic,retain) NSArray * unshares;                                 //@synthesize unshares=_unshares - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)inviteMessage;
-(void)setInviteMessage:(NSString *)arg1 ;
-(NSString *)notebookGuid;
-(void)setNotebookGuid:(NSString *)arg1 ;
-(NSArray *)membershipsToUpdate;
-(void)setMembershipsToUpdate:(NSArray *)arg1 ;
-(NSArray *)invitationsToCreateOrUpdate;
-(void)setInvitationsToCreateOrUpdate:(NSArray *)arg1 ;
-(NSArray *)unshares;
-(void)setUnshares:(NSArray *)arg1 ;
@end
