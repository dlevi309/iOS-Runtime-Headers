/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKSharedContentsCollectionViewCell.h>

@class CNAvatarView;

@interface CKSharedContactsCollectionViewCell : CKSharedContentsCollectionViewCell {

	CNAvatarView* _avatarView;

}

@property (nonatomic,retain) CNAvatarView * avatarView;              //@synthesize avatarView=_avatarView - In the implementation block
+(id)reuseIdentifier;
-(CNAvatarView *)avatarView;
-(void)layoutSubviews;
-(void)configureWithContact:(id)arg1 ;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
@end

