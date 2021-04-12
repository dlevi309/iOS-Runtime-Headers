/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBFIrisWallpaperViewDelegate.h>

@protocol SBSUIWallpaperPreviewViewDelegate;
@class UIViewPropertyAnimator, _UILegibilityLabel, UILabel, _SBUIWallpaperInstructionView, UIView, SBFLockScreenDateView, SBFWallpaperView, UIButton, NSString;

@interface SBSUIWallpaperPreviewView : UIView <SBFIrisWallpaperViewDelegate> {

	UIViewPropertyAnimator* _cropInstructionsAnimator;
	UIViewPropertyAnimator* _effectInstructionsAnimator;
	UIViewPropertyAnimator* _fadeOutInstructionsAnimator;
	_UILegibilityLabel* _irisInstructionsLabel1;
	_UILegibilityLabel* _irisInstructionsLabel2;
	UILabel* _effectStateLabel;
	_SBUIWallpaperInstructionView* _cropInstructionView;
	UIView* _gradientView;
	BOOL _irisPossible;
	BOOL _parallaxPossible;
	id<SBSUIWallpaperPreviewViewDelegate> _delegate;
	SBFLockScreenDateView* _dateView;
	SBFWallpaperView* _wallpaperView;
	UIButton* _irisButton;
	UIButton* _parallaxButton;
	UIButton* _cancelButton;
	UIButton* _setButton;

}

@property (assign,nonatomic,__weak) id<SBSUIWallpaperPreviewViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SBFLockScreenDateView * dateView;                                   //@synthesize dateView=_dateView - In the implementation block
@property (nonatomic,readonly) SBFWallpaperView * wallpaperView;                                 //@synthesize wallpaperView=_wallpaperView - In the implementation block
@property (nonatomic,retain) UIButton * irisButton;                                              //@synthesize irisButton=_irisButton - In the implementation block
@property (nonatomic,retain) UIButton * parallaxButton;                                          //@synthesize parallaxButton=_parallaxButton - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                            //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIButton * setButton;                                               //@synthesize setButton=_setButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<SBSUIWallpaperPreviewViewDelegate>)delegate;
-(void)setDelegate:(id<SBSUIWallpaperPreviewViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)updateForChangedSettings:(id)arg1 ;
-(SBFLockScreenDateView *)dateView;
-(void)setDateView:(SBFLockScreenDateView *)arg1 ;
-(void)irisWallpaperViewPlaybackStateDidChange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 wallpaperView:(id)arg2 ;
-(void)setIrisButton:(UIButton *)arg1 ;
-(void)setParallaxButton:(UIButton *)arg1 ;
-(void)setSetButton:(UIButton *)arg1 ;
-(UIButton *)irisButton;
-(void)setWallpaperView:(SBFWallpaperView *)arg1 ;
-(void)displayInstructionsForEffect:(unsigned long long)arg1 enabled:(BOOL)arg2 animated:(BOOL)arg3 ;
-(UIButton *)parallaxButton;
-(SBFWallpaperView *)wallpaperView;
-(id)_makeButtonWithVisualEffectBlur;
-(void)_userDidTapOnIrisButton:(id)arg1 ;
-(void)_userDidTapOnParallaxButton:(id)arg1 ;
-(void)_userDidTapOnCancelButton:(id)arg1 ;
-(void)_userDidTapOnSetButton:(id)arg1 ;
-(void)_fadeOutInstructionsWithDelay:(double)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_layoutGradientView;
-(void)_layoutStackedButtons;
-(void)_layoutIrisButton;
-(void)_layoutParallaxButton;
-(void)_layoutCancelButton;
-(void)_layoutSetButton;
-(void)_layoutDateView;
-(void)_layoutWallpaperView;
-(void)_layoutIrisInstructionLabels;
-(BOOL)shouldEnableParallax;
-(double)_segmentedControlInset;
-(UIButton *)setButton;
@end

