/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/


@protocol ADInterstitialAdDelegate <NSObject>
@optional
-(void)interstitialAdDidLoad:(id)arg1;
-(BOOL)interstitialAdActionShouldBegin:(id)arg1 willLeaveApplication:(BOOL)arg2;
-(void)interstitialAdWillLoad:(id)arg1;
-(void)interstitialAdActionDidFinish:(id)arg1;

@required
-(void)interstitialAdDidUnload:(id)arg1;
-(void)interstitialAd:(id)arg1 didFailWithError:(id)arg2;

@end

