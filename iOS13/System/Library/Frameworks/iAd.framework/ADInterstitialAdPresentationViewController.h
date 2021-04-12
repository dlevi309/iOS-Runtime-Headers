/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/

#import <iAd/iAd-Structs.h>
#import <UIKitCore/UIViewController.h>

@class ADInterstitialAd, ADCountdownButton;

@interface ADInterstitialAdPresentationViewController : UIViewController {

	ADInterstitialAd* _interstitialAd;
	ADCountdownButton* _closeButton;

}

@property (assign,nonatomic,__weak) ADInterstitialAd * interstitialAd;              //@synthesize interstitialAd=_interstitialAd - In the implementation block
@property (nonatomic,retain) ADCountdownButton * closeButton;                       //@synthesize closeButton=_closeButton - In the implementation block
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)wantsFullScreenLayout;
-(BOOL)prefersStatusBarHidden;
-(ADCountdownButton *)closeButton;
-(void)setCloseButton:(ADCountdownButton *)arg1 ;
-(BOOL)shouldTestVisibilityAtPoint:(CGPoint)arg1 ;
-(id)initForInterstitialAd:(id)arg1 ;
-(void)setInterstitialAd:(ADInterstitialAd *)arg1 ;
-(ADInterstitialAd *)interstitialAd;
@end

