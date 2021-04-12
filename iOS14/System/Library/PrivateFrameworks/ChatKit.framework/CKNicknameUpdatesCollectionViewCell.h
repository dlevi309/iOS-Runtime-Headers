/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/CKNicknameUpdateInterface.h>

@protocol CKNicknameUpdatesCollectionViewCellDelegate;
@class CKAvatarView, UIImageView, UILabel, UIButton, UIView, NSLayoutConstraint, CKNicknameUpdate, NSString;

@interface CKNicknameUpdatesCollectionViewCell : UICollectionViewCell <CKNicknameUpdateInterface> {

	BOOL _needsContextualMenu;
	id<CKNicknameUpdatesCollectionViewCellDelegate> _delegate;
	CKAvatarView* _avatarView;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIButton* _updateButton;
	UIButton* _ignoreButton;
	UIView* _topSeparator;
	UIView* _bottomSeparator;
	NSLayoutConstraint* _bottomSeparatorLeadingConstraint;
	CKNicknameUpdate* _nicknameUpdate;

}

@property (assign,nonatomic) id<CKNicknameUpdatesCollectionViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CKAvatarView * avatarView;                                             //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                               //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                               //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIButton * updateButton;                                               //@synthesize updateButton=_updateButton - In the implementation block
@property (nonatomic,retain) UIButton * ignoreButton;                                               //@synthesize ignoreButton=_ignoreButton - In the implementation block
@property (nonatomic,retain) UIView * topSeparator;                                                 //@synthesize topSeparator=_topSeparator - In the implementation block
@property (nonatomic,retain) UIView * bottomSeparator;                                              //@synthesize bottomSeparator=_bottomSeparator - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomSeparatorLeadingConstraint;                 //@synthesize bottomSeparatorLeadingConstraint=_bottomSeparatorLeadingConstraint - In the implementation block
@property (assign,nonatomic) BOOL needsContextualMenu;                                              //@synthesize needsContextualMenu=_needsContextualMenu - In the implementation block
@property (nonatomic,retain) CKNicknameUpdate * nicknameUpdate;                                     //@synthesize nicknameUpdate=_nicknameUpdate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(UILabel *)titleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTopSeparator:(UIView *)arg1 ;
-(void)setBottomSeparator:(UIView *)arg1 ;
-(UIImageView *)imageView;
-(id<CKNicknameUpdatesCollectionViewCellDelegate>)delegate;
-(CKAvatarView *)avatarView;
-(void)setDelegate:(id<CKNicknameUpdatesCollectionViewCellDelegate>)arg1 ;
-(UILabel *)subtitleLabel;
-(void)_ignoreButtonTapped:(id)arg1 ;
-(void)setNicknameUpdate:(CKNicknameUpdate *)arg1 ;
-(void)setBottomSeparatorLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(CKNicknameUpdate *)nicknameUpdate;
-(void)remakeUpdateButton;
-(void)_updateButtonTapped:(id)arg1 ;
-(void)updateSeparatorsForOrder:(unsigned long long)arg1 ;
-(NSLayoutConstraint *)bottomSeparatorLeadingConstraint;
-(void)configureWithNicknameUpdate:(id)arg1 order:(unsigned long long)arg2 ;
-(BOOL)needsContextualMenu;
-(void)setNeedsContextualMenu:(BOOL)arg1 ;
-(void)updateInterfaceSelectedAction:(unsigned long long)arg1 ;
-(UIButton *)updateButton;
-(void)setUpdateButton:(UIButton *)arg1 ;
-(void)setAvatarView:(CKAvatarView *)arg1 ;
-(UIButton *)ignoreButton;
-(void)setIgnoreButton:(UIButton *)arg1 ;
-(UIView *)bottomSeparator;
-(UIView *)topSeparator;
@end

