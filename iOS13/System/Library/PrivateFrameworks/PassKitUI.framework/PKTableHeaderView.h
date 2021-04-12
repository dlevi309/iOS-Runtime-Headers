/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, UIButton, UIActivityIndicatorView, PKCheckGlyphLayer;

@interface PKTableHeaderView : UIView {

	CGSize _originalImageViewSize;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIButton* _actionButton;
	UIActivityIndicatorView* _activityIndicator;
	PKCheckGlyphLayer* _checkmarkLayer;
	BOOL _shouldResizeImageToFit;
	BOOL _accessoryViewsDisabled;
	unsigned long long _style;
	double _topPadding;
	double _bottomPadding;
	double _minimumHeight;

}

@property (assign,nonatomic) unsigned long long style;                                   //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL shouldResizeImageToFit;                                //@synthesize shouldResizeImageToFit=_shouldResizeImageToFit - In the implementation block
@property (assign,nonatomic) double topPadding;                                          //@synthesize topPadding=_topPadding - In the implementation block
@property (assign,nonatomic) double bottomPadding;                                       //@synthesize bottomPadding=_bottomPadding - In the implementation block
@property (assign,nonatomic) double minimumHeight;                                       //@synthesize minimumHeight=_minimumHeight - In the implementation block
@property (assign,nonatomic) BOOL accessoryViewsDisabled;                                //@synthesize accessoryViewsDisabled=_accessoryViewsDisabled - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                    //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel; 
@property (nonatomic,readonly) UILabel * subtitleLabel; 
@property (nonatomic,readonly) UIButton * actionButton; 
@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,readonly) PKCheckGlyphLayer * checkmarkLayer;                       //@synthesize checkmarkLayer=_checkmarkLayer - In the implementation block
-(void)dealloc;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)tintColorDidChange;
-(id)_titleFont;
-(void)_updateImageView;
-(double)minimumHeight;
-(void)setMinimumHeight:(double)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setImageView:(UIImageView *)arg1 ;
-(id)_subtitleFont;
-(UILabel *)subtitleLabel;
-(UIActivityIndicatorView *)activityIndicator;
-(double)bottomPadding;
-(double)topPadding;
-(void)_updateFonts;
-(UIButton *)actionButton;
-(void)setTopPadding:(double)arg1 ;
-(PKCheckGlyphLayer *)checkmarkLayer;
-(void)setPassSnapshotUsingDefaultSize:(id)arg1 animated:(BOOL)arg2 needsCorners:(BOOL)arg3 ;
-(BOOL)_hasAccessibilityLargeText;
-(void)setBottomPadding:(double)arg1 ;
-(void)setImageViewImage:(id)arg1 withSize:(CGSize)arg2 animated:(BOOL)arg3 ;
-(void)setShouldResizeImageToFit:(BOOL)arg1 ;
-(void)_updateCheckmarkColor;
-(void)_updateAccessoryViews;
-(CGSize)_sizeThatFitsExcludingImage:(CGSize)arg1 ;
-(void)setAccessoryViewsDisabled:(BOOL)arg1 ;
-(BOOL)shouldResizeImageToFit;
-(BOOL)accessoryViewsDisabled;
@end

