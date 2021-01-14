/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PKDiscoveryCardViewDelegate;
@class PKDiscoveryCallToAction, PKDiscoveryMedia, UIImageView, PKContinuousButton, UILabel;

@interface PKDiscoveryCallToActionFooterView : UIView {

	PKDiscoveryCallToAction* _callToAction;
	PKDiscoveryMedia* _media;
	UIImageView* _iconImageView;
	PKContinuousButton* _button;
	UILabel* _titleLabel;
	UILabel* _editorialDescriptionLabel;
	UILabel* _expandedTitleLabel;
	UILabel* _expandedEditorialDescriptionLabel;
	long long _displayType;
	BOOL _hasIcon;
	BOOL _hasButton;
	BOOL _useAccessibilityLayout;
	/*^block*/id _callToActionTappedOverride;
	BOOL _showActivityIndicator;
	id<PKDiscoveryCardViewDelegate> _delegate;

}

@property (assign,nonatomic) BOOL showActivityIndicator;                                   //@synthesize showActivityIndicator=_showActivityIndicator - In the implementation block
@property (assign,nonatomic,__weak) id<PKDiscoveryCardViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long displayType;                                        //@synthesize displayType=_displayType - In the implementation block
-(id<PKDiscoveryCardViewDelegate>)delegate;
-(long long)displayType;
-(void)setDisplayType:(long long)arg1 ;
-(void)setDelegate:(id<PKDiscoveryCardViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)_titleLabelColor;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)_iconSize;
-(id)_titleLabelFont;
-(id)_titleLabelWithLocalizedTitle:(id)arg1 ;
-(id)_descriptionLabelWithLocalizedDescription:(id)arg1 ;
-(void)_loadImageData;
-(CGSize)_buttonSizeForBounds:(CGRect)arg1 ;
-(id)_editorialDescriptionLabelFont;
-(id)_descriptionLabelColor;
-(double)_buttonWidthForLabelWidth:(double)arg1 ;
-(id)initWithCallToAction:(id)arg1 displayType:(long long)arg2 ;
-(void)setCallToActionTappedOverride:(/*^block*/id)arg1 ;
-(BOOL)showActivityIndicator;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_buttonPressed:(id)arg1 ;
-(void)setShowActivityIndicator:(BOOL)arg1 ;
@end

