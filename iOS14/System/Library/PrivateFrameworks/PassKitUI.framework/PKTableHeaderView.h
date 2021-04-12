/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, UIButton, UIActivityIndicatorView, LAUICheckmarkLayer;

@interface PKTableHeaderView : UIView {

	CGSize _originalImageViewSize;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIButton* _actionButton;
	UIActivityIndicatorView* _activityIndicator;
	BOOL _shouldResizeImageToFit;
	BOOL _accessoryViewsDisabled;
	unsigned long long _style;
	double _topPadding;
	double _bottomPadding;
	double _minimumHeight;
	LAUICheckmarkLayer* _checkmarkLayer;

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
@property (nonatomic,readonly) LAUICheckmarkLayer * checkmarkLayer;                      //@synthesize checkmarkLayer=_checkmarkLayer - In the implementation block
-(UILabel *)titleLabel;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setImageView:(UIImageView *)arg1 ;
-(double)topPadding;
-(double)bottomPadding;
-(void)tintColorDidChange;
-(void)setPassSnapshot:(id)arg1 withSize:(CGSize)arg2 animated:(BOOL)arg3 needsCorners:(BOOL)arg4 ;
-(void)setImageViewImage:(id)arg1 withSize:(CGSize)arg2 animated:(BOOL)arg3 ;
-(void)_updateAccessoryViews;
-(CGSize)_sizeThatFitsExcludingImage:(CGSize)arg1 ;
-(void)setAccessoryViewsDisabled:(BOOL)arg1 ;
-(BOOL)shouldResizeImageToFit;
-(BOOL)accessoryViewsDisabled;
-(UIImageView *)imageView;
-(void)_dynamicUserInterfaceTraitDidChange;
-(double)minimumHeight;
-(void)setMinimumHeight:(double)arg1 ;
-(id)_titleFont;
-(UILabel *)subtitleLabel;
-(void)layoutSubviews;
-(void)_updateCheckmarkColor;
-(UIButton *)actionButton;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updateFonts;
-(void)setTopPadding:(double)arg1 ;
-(BOOL)_hasAccessibilityLargeText;
-(void)setPassSnapshotUsingDefaultSize:(id)arg1 animated:(BOOL)arg2 needsCorners:(BOOL)arg3 ;
-(void)setShouldResizeImageToFit:(BOOL)arg1 ;
-(void)setBottomPadding:(double)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(LAUICheckmarkLayer *)checkmarkLayer;
-(void)_updateImageView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)_subtitleFont;
-(unsigned long long)style;
-(void)dealloc;
@end

