/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/

#import <libobjc.A.dylib/NAInterstitialAdvertisementHistoryRecorder.h>

@interface NewsArticles.InterstitialAdvertisementHistoryRecorder : _UKNOWN_SUPERCLASS_ <NAInterstitialAdvertisementHistoryRecorder> {

	 articlesSeenSinceLastInterstitial;

}

@property (assign,nonatomic) long long articlesSeenSinceLastInterstitial; 
-(long long)articlesSeenSinceLastInterstitial;
-(void)recordInterstitialAdView;
-(void)recordArticleView;
-(void)setArticlesSeenSinceLastInterstitial:(long long)arg1 ;
@end

