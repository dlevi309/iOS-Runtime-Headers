/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIView, SKUIClientContext, UIButton, UIImageView, SSLookupItemOffer, SKUIItemState, NSMutableArray, UIImage, NSArray, NSString, UIControl;

@interface SKUIBannerView : UIView {

	UILabel* _artistNameLabel;
	UIView* _bottomBorderView;
	SKUIClientContext* _clientContext;
	UIButton* _closeButton;
	UIImageView* _iconImageView;
	SSLookupItemOffer* _itemOffer;
	UIButton* _itemOfferButton;
	SKUIItemState* _itemState;
	UILabel* _itemStateLabel;
	NSMutableArray* _screenshotImageViews;
	UIView* _separatorView;
	UILabel* _titleLabel;
	float _userRating;
	UIImageView* _userRatingStarImageView;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) UIImage * iconImage; 
@property (nonatomic,copy) NSArray * screenshotImages; 
@property (nonatomic,copy) NSString * artistName; 
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) float userRating;                               //@synthesize userRating=_userRating - In the implementation block
@property (nonatomic,retain) SSLookupItemOffer * itemOffer;                  //@synthesize itemOffer=_itemOffer - In the implementation block
@property (nonatomic,retain) SKUIItemState * itemState;                      //@synthesize itemState=_itemState - In the implementation block
@property (nonatomic,readonly) UIControl * closeButton;                      //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,readonly) UIControl * itemOfferButton; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setItemState:(SKUIItemState *)arg1 ;
-(SKUIItemState *)itemState;
-(UIImage *)iconImage;
-(UIControl *)closeButton;
-(void)setIconImage:(UIImage *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(NSString *)artistName;
-(void)setArtistName:(NSString *)arg1 ;
-(float)userRating;
-(void)setUserRating:(float)arg1 ;
-(SSLookupItemOffer *)itemOffer;
-(id)_newDefaultLabel;
-(UIControl *)itemOfferButton;
-(void)setScreenshotImages:(NSArray *)arg1 ;
-(void)setItemOffer:(SSLookupItemOffer *)arg1 ;
-(void)_reloadItemState;
-(NSArray *)screenshotImages;
@end

