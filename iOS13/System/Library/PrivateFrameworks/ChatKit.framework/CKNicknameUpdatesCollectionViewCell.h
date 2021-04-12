/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@protocol CKNicknameUpdatesCollectionViewCellDelegate;
@class CKNicknameBannerView, UIButton, CALayer;

@interface CKNicknameUpdatesCollectionViewCell : UICollectionViewCell {

	id<CKNicknameUpdatesCollectionViewCellDelegate> _delegate;
	CKNicknameBannerView* _bannerView;
	UIButton* _updateButton;
	UIButton* _ignoreButton;
	CALayer* _topKeyline;
	CALayer* _bottomKeyline;
	unsigned long long _order;

}

@property (assign,nonatomic) id<CKNicknameUpdatesCollectionViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CKNicknameBannerView * bannerView;                                     //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) UIButton * updateButton;                                               //@synthesize updateButton=_updateButton - In the implementation block
@property (nonatomic,retain) UIButton * ignoreButton;                                               //@synthesize ignoreButton=_ignoreButton - In the implementation block
@property (nonatomic,retain) CALayer * topKeyline;                                                  //@synthesize topKeyline=_topKeyline - In the implementation block
@property (nonatomic,retain) CALayer * bottomKeyline;                                               //@synthesize bottomKeyline=_bottomKeyline - In the implementation block
@property (assign,nonatomic) unsigned long long order;                                              //@synthesize order=_order - In the implementation block
+(id)reuseIdentifier;
-(id<CKNicknameUpdatesCollectionViewCellDelegate>)delegate;
-(void)setDelegate:(id<CKNicknameUpdatesCollectionViewCellDelegate>)arg1 ;
-(unsigned long long)order;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)setOrder:(unsigned long long)arg1 ;
-(UIButton *)ignoreButton;
-(void)setIgnoreButton:(UIButton *)arg1 ;
-(UIButton *)updateButton;
-(CKNicknameBannerView *)bannerView;
-(void)setBannerView:(CKNicknameBannerView *)arg1 ;
-(void)_updateButtonTapped:(id)arg1 ;
-(void)setUpdateButton:(UIButton *)arg1 ;
-(void)_ignoreButtonTapped:(id)arg1 ;
-(void)setTopKeyline:(CALayer *)arg1 ;
-(void)setBottomKeyline:(CALayer *)arg1 ;
-(CALayer *)topKeyline;
-(CALayer *)bottomKeyline;
-(void)configureWithNicknameUpdate:(id)arg1 ;
@end

