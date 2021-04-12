/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NUPageable.h>

@protocol NULoadingDelegate;
@class NSString, ADInterstitialAd, UIView;

@interface NUInterstitialViewController : UIViewController <NUPageable> {

	BOOL _hasPresentedInterstitial;
	NSString* _pageIdentifier;
	id<NULoadingDelegate> _loadingDelegate;
	ADInterstitialAd* _interstitial;
	UIView* _interstitialView;

}

@property (nonatomic,readonly) ADInterstitialAd * interstitial;                         //@synthesize interstitial=_interstitial - In the implementation block
@property (nonatomic,retain) UIView * interstitialView;                                 //@synthesize interstitialView=_interstitialView - In the implementation block
@property (assign,nonatomic) BOOL hasPresentedInterstitial;                             //@synthesize hasPresentedInterstitial=_hasPresentedInterstitial - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NULoadingDelegate> loadingDelegate;              //@synthesize loadingDelegate=_loadingDelegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageIdentifier;                          //@synthesize pageIdentifier=_pageIdentifier - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(NSString *)pageIdentifier;
-(UIView *)interstitialView;
-(void)setInterstitialView:(UIView *)arg1 ;
-(id<NULoadingDelegate>)loadingDelegate;
-(BOOL)hasPresentedInterstitial;
-(ADInterstitialAd *)interstitial;
-(void)setHasPresentedInterstitial:(BOOL)arg1 ;
-(void)setLoadingDelegate:(id<NULoadingDelegate>)arg1 ;
-(id)initWithInterstitial:(id)arg1 pageIdentifier:(id)arg2 ;
@end

