/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class CKEntity, CKLabel, CKAvatarView, UIView;

@interface CKMentionSuggestionCell : UICollectionViewCell {

	CKEntity* _suggestedEntity;
	CKLabel* _handleLabel;
	CKAvatarView* _avatarView;
	UIView* _hoverView;

}

@property (nonatomic,retain) CKLabel * handleLabel;                   //@synthesize handleLabel=_handleLabel - In the implementation block
@property (nonatomic,retain) CKAvatarView * avatarView;               //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) UIView * hoverView;                      //@synthesize hoverView=_hoverView - In the implementation block
@property (nonatomic,retain) CKEntity * suggestedEntity;              //@synthesize suggestedEntity=_suggestedEntity - In the implementation block
+(id)reuseIdentifier;
-(UIView *)hoverView;
-(id)initWithFrame:(CGRect)arg1 ;
-(CKAvatarView *)avatarView;
-(CKLabel *)handleLabel;
-(void)didHoverOverCell:(id)arg1 ;
-(void)setAvatarView:(CKAvatarView *)arg1 ;
-(void)setHandleLabel:(CKLabel *)arg1 ;
-(void)setSuggestedEntity:(CKEntity *)arg1 ;
-(CKEntity *)suggestedEntity;
-(void)setHoverView:(UIView *)arg1 ;
@end

