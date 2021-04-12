/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setDelegate:(id<PKDiscoveryCardViewDelegate>)arg1 ;
-(long long)displayType;
-(void)setDisplayType:(long long)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_buttonPressed:(id)arg1 ;
-(CGSize)_iconSize;
-(void)setShowActivityIndicator:(BOOL)arg1 ;
-(BOOL)showActivityIndicator;
-(id)_titleLabelColor;
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
@end

