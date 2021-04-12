/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDiscoveryShelfView.h>

@protocol PKDiscoveryCardViewDelegate;
@class PKDiscoveryCallToActionShelf, PKDiscoveryCallToAction, PKDiscoveryMedia, UILabel, UIImageView, PKContinuousButton;

@interface PKDiscoveryCallToActionShelfView : PKDiscoveryShelfView {

	PKDiscoveryCallToActionShelf* _ctaShelf;
	PKDiscoveryCallToAction* _callToAction;
	PKDiscoveryMedia* _media;
	UILabel* _titleLabel;
	UILabel* _editorialDescriptionLabel;
	UIImageView* _iconImageView;
	PKContinuousButton* _button;
	CGSize _iconSize;
	BOOL _showActivityIndicator;
	id<PKDiscoveryCardViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKDiscoveryCardViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showActivityIndicator;                                   //@synthesize showActivityIndicator=_showActivityIndicator - In the implementation block
-(id<PKDiscoveryCardViewDelegate>)delegate;
-(void)setDelegate:(id<PKDiscoveryCardViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_buttonPressed:(id)arg1 ;
-(CGSize)_iconSize;
-(void)setShowActivityIndicator:(BOOL)arg1 ;
-(BOOL)showActivityIndicator;
-(id)initWithShelf:(id)arg1 ;
-(void)setImage:(id)arg1 animated:(BOOL)arg2 ;
-(double)_leadingTitleSpace;
-(double)_leadingEditorialTextSpace;
-(CGSize)_sizeForMedia;
@end

