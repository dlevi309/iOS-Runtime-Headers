/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol HUWallpaperEditingViewControllerDelegate;
@class HFWallpaper, UIImage, UIScrollView, UIImageView, UIView, UIButton, UIVisualEffectView, NSString;

@interface HUWallpaperEditingViewController : UIViewController <UIScrollViewDelegate> {

	BOOL _statusBarHidden;
	id<HUWallpaperEditingViewControllerDelegate> _delegate;
	HFWallpaper* _wallpaper;
	UIImage* _image;
	UIScrollView* _scrollView;
	UIImageView* _imageView;
	UIView* _buttonContainerView;
	UIView* _buttonSeparatorView;
	UIButton* _cancelButton;
	UIButton* _setButton;
	UIVisualEffectView* _buttonBackgroundView;

}

@property (assign,nonatomic) BOOL statusBarHidden;                                                      //@synthesize statusBarHidden=_statusBarHidden - In the implementation block
@property (nonatomic,retain) HFWallpaper * wallpaper;                                                   //@synthesize wallpaper=_wallpaper - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                           //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                                 //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                                   //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * buttonContainerView;                                              //@synthesize buttonContainerView=_buttonContainerView - In the implementation block
@property (nonatomic,retain) UIView * buttonSeparatorView;                                              //@synthesize buttonSeparatorView=_buttonSeparatorView - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                                   //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIButton * setButton;                                                      //@synthesize setButton=_setButton - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * buttonBackgroundView;                                 //@synthesize buttonBackgroundView=_buttonBackgroundView - In the implementation block
@property (assign,nonatomic,__weak) id<HUWallpaperEditingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIButton *)cancelButton;
-(void)setImageView:(UIImageView *)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImageView *)imageView;
-(id<HUWallpaperEditingViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(HFWallpaper *)wallpaper;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(UIImage *)image;
-(void)buttonPressed:(id)arg1 ;
-(BOOL)statusBarHidden;
-(void)setDelegate:(id<HUWallpaperEditingViewControllerDelegate>)arg1 ;
-(void)setSetButton:(UIButton *)arg1 ;
-(void)viewDidLoad;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIButton *)setButton;
-(void)setStatusBarHidden:(BOOL)arg1 ;
-(long long)preferredStatusBarUpdateAnimation;
-(UIScrollView *)scrollView;
-(void)viewDidLayoutSubviews;
-(id)_createButtonViews;
-(UIView *)buttonContainerView;
-(id)_createButtonConstraints;
-(void)updateScrollViewScale;
-(void)setButtonContainerView:(UIView *)arg1 ;
-(void)setButtonBackgroundView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)buttonBackgroundView;
-(id)transparentButtonWithTitle:(id)arg1 ;
-(void)setButtonSeparatorView:(UIView *)arg1 ;
-(UIView *)buttonSeparatorView;
-(void)buttonTouchStarted:(id)arg1 ;
-(void)buttonTouchFinished:(id)arg1 ;
-(id)initWithWallpaper:(id)arg1 image:(id)arg2 delegate:(id)arg3 ;
-(void)setWallpaper:(HFWallpaper *)arg1 ;
@end

