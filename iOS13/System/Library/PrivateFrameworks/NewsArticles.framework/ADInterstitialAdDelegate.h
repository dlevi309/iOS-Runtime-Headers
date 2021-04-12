/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/


@protocol ADInterstitialAdDelegate <NSObject>
@optional
-(void)interstitialAdWillLoad:(id)arg1;
-(void)interstitialAdDidLoad:(id)arg1;
-(void)interstitialAdActionDidFinish:(id)arg1;
-(BOOL)interstitialAdActionShouldBegin:(id)arg1 willLeaveApplication:(BOOL)arg2;

@required
-(void)interstitialAdDidUnload:(id)arg1;
-(void)interstitialAd:(id)arg1 didFailWithError:(id)arg2;

@end

