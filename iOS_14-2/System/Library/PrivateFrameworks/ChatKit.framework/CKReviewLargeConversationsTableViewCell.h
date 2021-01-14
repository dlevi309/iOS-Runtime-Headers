/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(IMChat *)chat;
-(void)setModelObject:(id)arg1 ;
-(void)prepareForReuse;
-(void)setChat:(IMChat *)arg1 ;
-(CNAvatarView *)avatarView;
-(id)leftHandSideView;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
@end

