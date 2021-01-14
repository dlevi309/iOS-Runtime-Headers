/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(UILabel *)titleLabel;
-(void)setStatusBarBackgroundView:(UIView *)arg1 ;
-(UIView *)statusBarBackgroundView;
-(NSArray *)constraints;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(id)init;
-(void)_done:(id)arg1 ;
-(id<HUAboutResidentDeviceViewControllerDelegate>)delegate;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setDelegate:(id<HUAboutResidentDeviceViewControllerDelegate>)arg1 ;
-(UILabel *)subtitleLabel;
-(void)viewDidLoad;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(HUGridLayoutOptions *)layoutOptions;
-(id)_backgroundColor;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)updateViews;
-(UIScrollView *)scrollView;
-(void)viewDidLayoutSubviews;
-(unsigned long long)style;
-(void)setLayoutOptions:(HUGridLayoutOptions *)arg1 ;
-(void)_createSubviews;
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
-(BOOL)useNavigationBarForAutomationTabStyle;
@end

