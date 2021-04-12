/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassKitUI.framework/ClassKitUI
*/

#import <ClassKitUI/ClassKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@class CLSNotificationBannerView, NSLayoutConstraint;

@interface CLSNotificationBannerViewController : UIViewController {

	BOOL _bannerVisible;
	BOOL _bannerAnimating;
	CLSNotificationBannerView* _bannerView;
	NSLayoutConstraint* _bannerYPositionConstraint;
	NSLayoutConstraint* _bannerWidthConstraint;

}

@property (nonatomic,retain) CLSNotificationBannerView * bannerView;                      //@synthesize bannerView=_bannerView - In the implementation block
@property (assign,nonatomic) BOOL bannerVisible;                                          //@synthesize bannerVisible=_bannerVisible - In the implementation block
@property (assign,nonatomic) BOOL bannerAnimating;                                        //@synthesize bannerAnimating=_bannerAnimating - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bannerYPositionConstraint;              //@synthesize bannerYPositionConstraint=_bannerYPositionConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bannerWidthConstraint;                  //@synthesize bannerWidthConstraint=_bannerWidthConstraint - In the implementation block
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(CLSNotificationBannerView *)bannerView;
-(void)setBannerView:(CLSNotificationBannerView *)arg1 ;
-(BOOL)windowPointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)handleWindowPan:(id)arg1 ;
-(void)addBannerView:(id)arg1 ;
-(void)showCurrentBanner;
-(void)hideBannerQuickly:(BOOL)arg1 ;
-(BOOL)bannerVisible;
-(void)setBannerYPositionConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBannerWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)addConstraintsForBannerView;
-(void)setBannerAnimating:(BOOL)arg1 ;
-(void)setBannerVisible:(BOOL)arg1 ;
-(CGPoint)_visibleBannerCenterPosition:(CGSize)arg1 ;
-(NSLayoutConstraint *)bannerYPositionConstraint;
-(CGPoint)_hiddenBannerPosition:(CGSize)arg1 ;
-(NSLayoutConstraint *)bannerWidthConstraint;
-(double)bannerWidthForViewSize:(CGSize)arg1 ;
-(BOOL)bannerAnimating;
@end

