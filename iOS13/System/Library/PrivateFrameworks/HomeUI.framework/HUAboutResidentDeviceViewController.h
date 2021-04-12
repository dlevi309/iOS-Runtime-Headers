/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol HUAboutResidentDeviceViewControllerDelegate;
@class HUGridLayoutOptions, NSArray, UIView, UIScrollView, UILabel, UIImageView;

@interface HUAboutResidentDeviceViewController : UIViewController {

	id<HUAboutResidentDeviceViewControllerDelegate> _delegate;
	unsigned long long _style;
	HUGridLayoutOptions* _layoutOptions;
	NSArray* _constraints;
	UIView* _statusBarBackgroundView;
	UIScrollView* _scrollView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIImageView* _atvImageView;
	UIImageView* _homePodImageView;
	UILabel* _homeHubTextLabel;
	UIImageView* _iPadImageView;
	UILabel* _iPadTextLabel;

}

@property (nonatomic,readonly) unsigned long long style;                                                   //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) HUGridLayoutOptions * layoutOptions;                                          //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                                                        //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) UIView * statusBarBackgroundView;                                             //@synthesize statusBarBackgroundView=_statusBarBackgroundView - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                                    //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                                      //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * atvImageView;                                                   //@synthesize atvImageView=_atvImageView - In the implementation block
@property (nonatomic,retain) UIImageView * homePodImageView;                                               //@synthesize homePodImageView=_homePodImageView - In the implementation block
@property (nonatomic,retain) UILabel * homeHubTextLabel;                                                   //@synthesize homeHubTextLabel=_homeHubTextLabel - In the implementation block
@property (nonatomic,retain) UIImageView * iPadImageView;                                                  //@synthesize iPadImageView=_iPadImageView - In the implementation block
@property (nonatomic,retain) UILabel * iPadTextLabel;                                                      //@synthesize iPadTextLabel=_iPadTextLabel - In the implementation block
@property (assign,nonatomic,__weak) id<HUAboutResidentDeviceViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(double)subtitleBaselineToATVImageConstant;
+(double)scrollViewTopToATVImageConstant;
+(double)atvImageToTextBaselineConstantForViewSizeSubclass:(long long)arg1 ;
+(double)atvTextBaselineToiPadImageConstant;
+(double)iPadImageToTextBaselineConstantForViewSizeSubclass:(long long)arg1 ;
-(id)init;
-(id<HUAboutResidentDeviceViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HUAboutResidentDeviceViewControllerDelegate>)arg1 ;
-(NSArray *)constraints;
-(unsigned long long)style;
-(HUGridLayoutOptions *)layoutOptions;
-(UILabel *)titleLabel;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_backgroundColor;
-(void)viewDidLoad;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)updateViews;
-(void)_createSubviews;
-(void)setStatusBarBackgroundView:(UIView *)arg1 ;
-(UIView *)statusBarBackgroundView;
-(void)_done:(id)arg1 ;
-(void)setLayoutOptions:(HUGridLayoutOptions *)arg1 ;
-(id)_defaultLayoutOptionsForViewSize:(CGSize)arg1 ;
-(void)_setNavigationBarVisibility;
-(UIImageView *)atvImageView;
-(UIImageView *)homePodImageView;
-(UILabel *)homeHubTextLabel;
-(UIImageView *)iPadImageView;
-(UILabel *)iPadTextLabel;
-(void)setAtvImageView:(UIImageView *)arg1 ;
-(void)setHomePodImageView:(UIImageView *)arg1 ;
-(void)setHomeHubTextLabel:(UILabel *)arg1 ;
-(void)setIPadImageView:(UIImageView *)arg1 ;
-(void)setIPadTextLabel:(UILabel *)arg1 ;
-(void)updateViewsAndConstraints;
@end

