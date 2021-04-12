/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@class GKNotificationBannerView, NSLayoutConstraint;

@interface GKNotificationBannerViewController : UIViewController {

	BOOL _bannerVisible;
	BOOL _bannerAnimating;
	GKNotificationBannerView* _bannerView;
	NSLayoutConstraint* _bannerYPositionConstraint;
	NSLayoutConstraint* _bannerWidthConstraint;

}

@property (nonatomic,retain) GKNotificationBannerView * bannerView;                       //@synthesize bannerView=_bannerView - In the implementation block
@property (assign,nonatomic) BOOL bannerVisible;                                          //@synthesize bannerVisible=_bannerVisible - In the implementation block
@property (assign,nonatomic) BOOL bannerAnimating;                                        //@synthesize bannerAnimating=_bannerAnimating - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bannerYPositionConstraint;              //@synthesize bannerYPositionConstraint=_bannerYPositionConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bannerWidthConstraint;                  //@synthesize bannerWidthConstraint=_bannerWidthConstraint - In the implementation block
-(void)setBannerView:(GKNotificationBannerView *)arg1 ;
-(BOOL)windowPointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)windowTouchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)handleWindowSingleTap:(id)arg1 ;
-(void)handleWindowPan:(id)arg1 ;
-(void)addBannerView:(id)arg1 ;
-(void)showCurrentBanner;
-(void)hideBannerQuickly:(BOOL)arg1 ;
-(BOOL)bannerVisible;
-(void)setBannerYPositionConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBannerWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)addConstraintsForBannerView;
-(void)addConstraintsForTVOSBannerView;
-(void)setBannerAnimating:(BOOL)arg1 ;
-(void)setBannerVisible:(BOOL)arg1 ;
-(NSLayoutConstraint *)bannerYPositionConstraint;
-(CGPoint)_visibleBannerCenterPosition:(CGSize)arg1 ;
-(CGPoint)_hiddenBannerPosition:(CGSize)arg1 ;
-(NSLayoutConstraint *)bannerWidthConstraint;
-(double)bannerWidthForViewSize:(CGSize)arg1 ;
-(BOOL)bannerAnimating;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(GKNotificationBannerView *)bannerView;
@end

