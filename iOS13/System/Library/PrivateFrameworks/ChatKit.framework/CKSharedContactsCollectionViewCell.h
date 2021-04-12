/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKSharedContentsCollectionViewCell.h>

@class CNAvatarView;

@interface CKSharedContactsCollectionViewCell : CKSharedContentsCollectionViewCell {

	CNAvatarView* _avatarView;

}

@property (nonatomic,retain) CNAvatarView * avatarView;              //@synthesize avatarView=_avatarView - In the implementation block
+(id)reuseIdentifier;
-(void)layoutSubviews;
-(CNAvatarView *)avatarView;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
-(void)configureWithContact:(id)arg1 ;
@end

