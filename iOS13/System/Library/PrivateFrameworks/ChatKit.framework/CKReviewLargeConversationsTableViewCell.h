/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKAbstractReviewTableViewCell.h>

@class IMChat, CNAvatarView;

@interface CKReviewLargeConversationsTableViewCell : CKAbstractReviewTableViewCell {

	IMChat* _chat;
	CNAvatarView* _avatarView;

}

@property (nonatomic,retain) IMChat * chat;                          //@synthesize chat=_chat - In the implementation block
@property (nonatomic,retain) CNAvatarView * avatarView;              //@synthesize avatarView=_avatarView - In the implementation block
+(double)requestedHeight;
+(CGSize)leftHandSideViewSize;
-(void)prepareForReuse;
-(CNAvatarView *)avatarView;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
-(void)setModelObject:(id)arg1 ;
-(void)setChat:(IMChat *)arg1 ;
-(id)leftHandSideView;
-(IMChat *)chat;
@end

