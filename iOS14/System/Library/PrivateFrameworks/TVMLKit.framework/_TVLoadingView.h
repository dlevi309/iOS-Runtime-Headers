/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)canBecomeFocused;
-(_TVImageView *)backgroundImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_showSpinner;
-(UIActivityIndicatorView *)spinnerView;
-(void)layoutSubviews;
-(UIView *)labelContainer;
-(UIView *)spinnerContainer;
-(UIView *)loadingTitleLabel;
-(void)setLoadingTitleLabel:(UIView *)arg1 ;
-(BOOL)shouldShowSpinner;
-(void)setShouldShowSpinner:(BOOL)arg1 ;
@end

