/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class CKAvatarView;

@interface CKAvatarCollectionViewCell : UICollectionViewCell {

	CKAvatarView* _avatarView;

}

@property (nonatomic,retain) CKAvatarView * avatarView;              //@synthesize avatarView=_avatarView - In the implementation block
+(id)reuseIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(CKAvatarView *)avatarView;
-(void)layoutSubviews;
-(void)configureWithEntity:(id)arg1 ;
-(void)setAvatarView:(CKAvatarView *)arg1 ;
@end

