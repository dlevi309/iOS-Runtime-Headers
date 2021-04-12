/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy,readonly) NSString * pageIdentifier;                          //@synthesize pageIdentifier=_pageIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<NULoadingDelegate> loadingDelegate;              //@synthesize loadingDelegate=_loadingDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(NSString *)pageIdentifier;
-(void)viewDidLayoutSubviews;
-(id<NULoadingDelegate>)loadingDelegate;
-(void)setLoadingDelegate:(id<NULoadingDelegate>)arg1 ;
-(UIView *)interstitialView;
-(void)setInterstitialView:(UIView *)arg1 ;
-(BOOL)hasPresentedInterstitial;
-(ADInterstitialAd *)interstitial;
-(void)setHasPresentedInterstitial:(BOOL)arg1 ;
-(id)initWithInterstitial:(id)arg1 pageIdentifier:(id)arg2 ;
@end

