/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/ADInterstitialAdDelegate.h>

@interface NewsArticles.InterstitialAdvertisementViewController : UIViewController <ADInterstitialAdDelegate> {

	 identifier;
	 advertisementModel;
	 styler;
	 eventHandler;
	 interstitialAdvertisementView;
	 hasPresentedInterstitial;

}

@property (readonly,nonatomic) BOOL canBecomeFirstResponder; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)interstitialAdDidUnload:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)interstitialAd:(id)arg1 didFailWithError:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(BOOL)interstitialAdActionShouldBegin:(id)arg1 willLeaveApplication:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

