/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIViewController.h>

@class UIVisualEffectView;

@interface HUCameraBlurViewController : UIViewController {

	BOOL _showingBlur;
	UIVisualEffectView* _blurView;

}

@property (nonatomic,retain) UIVisualEffectView * blurView;              //@synthesize blurView=_blurView - In the implementation block
@property (assign,nonatomic) BOOL showingBlur;                           //@synthesize showingBlur=_showingBlur - In the implementation block
-(void)setBlurView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)blurView;
-(void)viewDidLoad;
-(BOOL)shouldShowBlurForPlaybackEngine:(id)arg1 ;
-(BOOL)showingBlur;
-(void)setShowingBlur:(BOOL)arg1 ;
-(void)updateBlurWithPlaybackEngine:(id)arg1 ;
@end

