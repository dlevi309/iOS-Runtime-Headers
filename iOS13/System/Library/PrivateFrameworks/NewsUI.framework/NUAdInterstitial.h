/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/ADInterstitialAdDelegate.h>

@class ADInterstitialAd, NSString;

@interface NUAdInterstitial : NSObject <ADInterstitialAdDelegate> {

	ADInterstitialAd* _interstitial;
	/*^block*/id _completionBlock;

}

@property (nonatomic,retain) ADInterstitialAd * interstitial;              //@synthesize interstitial=_interstitial - In the implementation block
@property (nonatomic,copy) id completionBlock;                             //@synthesize completionBlock=_completionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)interstitialAdDidUnload:(id)arg1 ;
-(void)interstitialAdDidLoad:(id)arg1 ;
-(void)interstitialAd:(id)arg1 didFailWithError:(id)arg2 ;
-(void)missedOpportunityToFill;
-(ADInterstitialAd *)interstitial;
-(id)initWithContext:(id)arg1 andCompletionBlock:(/*^block*/id)arg2 ;
-(void)setInterstitial:(ADInterstitialAd *)arg1 ;
@end

