/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(void)setCloseButton:(ADCountdownButton *)arg1 ;
-(BOOL)wantsFullScreenLayout;
-(void)setInterstitialAd:(ADInterstitialAd *)arg1 ;
-(id)initForInterstitialAd:(id)arg1 ;
-(ADInterstitialAd *)interstitialAd;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)loadView;
-(ADCountdownButton *)closeButton;
-(void)viewDidLayoutSubviews;
-(BOOL)shouldTestVisibilityAtPoint:(CGPoint)arg1 ;
@end

