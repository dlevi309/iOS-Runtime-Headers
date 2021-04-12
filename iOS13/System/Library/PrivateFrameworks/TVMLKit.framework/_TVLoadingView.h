/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class _TVImageView, UIView, UIActivityIndicatorView;

@interface _TVLoadingView : UIView {

	BOOL _shouldShowSpinner;
	_TVImageView* _backgroundImageView;
	UIView* _loadingTitleLabel;
	UIActivityIndicatorView* _spinnerView;
	UIView* _spinnerContainer;
	UIView* _labelContainer;

}

@property (assign,nonatomic,__weak) UIView * loadingTitleLabel;                           //@synthesize loadingTitleLabel=_loadingTitleLabel - In the implementation block
@property (nonatomic,__weak,readonly) UIView * spinnerContainer;                          //@synthesize spinnerContainer=_spinnerContainer - In the implementation block
@property (nonatomic,__weak,readonly) UIView * labelContainer;                            //@synthesize labelContainer=_labelContainer - In the implementation block
@property (nonatomic,__weak,readonly) _TVImageView * backgroundImageView;                 //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,__weak,readonly) UIActivityIndicatorView * spinnerView;              //@synthesize spinnerView=_spinnerView - In the implementation block
@property (assign,nonatomic) BOOL shouldShowSpinner;                                      //@synthesize shouldShowSpinner=_shouldShowSpinner - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)canBecomeFocused;
-(void)layoutSubviews;
-(_TVImageView *)backgroundImageView;
-(void)_showSpinner;
-(UIActivityIndicatorView *)spinnerView;
-(UIView *)spinnerContainer;
-(UIView *)labelContainer;
-(UIView *)loadingTitleLabel;
-(void)setLoadingTitleLabel:(UIView *)arg1 ;
-(BOOL)shouldShowSpinner;
-(void)setShouldShowSpinner:(BOOL)arg1 ;
@end

