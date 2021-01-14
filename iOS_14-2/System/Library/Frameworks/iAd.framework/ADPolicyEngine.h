/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/

#import <libobjc.A.dylib/ADBannerViewInternalDelegate.h>
#import <libobjc.A.dylib/ADInterstitialAdDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, ADInterstitialAd, NSString, NSURL, ADBannerView, NSError, NSData;

@interface ADPolicyEngine : NSObject <ADBannerViewInternalDelegate, ADInterstitialAdDelegate> {

	BOOL _enabled;
	BOOL _canAutoEnable;
	BOOL _sharedInterstitialAdIsInUse;
	BOOL _sharedMediaPlayerVideoAdClaimed;
	double _nextInterstitialPresentationTime;
	double _nextPrerollPlaybackTime;
	NSObject*<OS_dispatch_queue> _policyEngineQueue;
	ADInterstitialAd* _sharedInterstitialAd;
	NSString* _sharedInterstitialSection;
	NSURL* _sharedInterstitialServerURL;
	NSString* _sharedInterstitialAuthenticationUserName;
	ADBannerView* _sharedMediaPlayerVideoAd;
	NSError* _lastSharedMediaPlayerVideoAdError;
	NSData* _currentStationData;
	NSData* _currentSongData;

}

@property (assign,nonatomic) double nextInterstitialPresentationTime;                        //@synthesize nextInterstitialPresentationTime=_nextInterstitialPresentationTime - In the implementation block
@property (assign,nonatomic) double nextPrerollPlaybackTime;                                 //@synthesize nextPrerollPlaybackTime=_nextPrerollPlaybackTime - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> policyEngineQueue;                 //@synthesize policyEngineQueue=_policyEngineQueue - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                   //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL canAutoEnable;                                             //@synthesize canAutoEnable=_canAutoEnable - In the implementation block
@property (nonatomic,retain) ADInterstitialAd * sharedInterstitialAd;                        //@synthesize sharedInterstitialAd=_sharedInterstitialAd - In the implementation block
@property (assign,nonatomic) BOOL sharedInterstitialAdIsInUse;                               //@synthesize sharedInterstitialAdIsInUse=_sharedInterstitialAdIsInUse - In the implementation block
@property (nonatomic,copy) NSString * sharedInterstitialSection;                             //@synthesize sharedInterstitialSection=_sharedInterstitialSection - In the implementation block
@property (nonatomic,copy) NSURL * sharedInterstitialServerURL;                              //@synthesize sharedInterstitialServerURL=_sharedInterstitialServerURL - In the implementation block
@property (nonatomic,copy) NSString * sharedInterstitialAuthenticationUserName;              //@synthesize sharedInterstitialAuthenticationUserName=_sharedInterstitialAuthenticationUserName - In the implementation block
@property (nonatomic,retain) ADBannerView * sharedMediaPlayerVideoAd;                        //@synthesize sharedMediaPlayerVideoAd=_sharedMediaPlayerVideoAd - In the implementation block
@property (assign,nonatomic) BOOL sharedMediaPlayerVideoAdClaimed;                           //@synthesize sharedMediaPlayerVideoAdClaimed=_sharedMediaPlayerVideoAdClaimed - In the implementation block
@property (nonatomic,retain) NSError * lastSharedMediaPlayerVideoAdError;                    //@synthesize lastSharedMediaPlayerVideoAdError=_lastSharedMediaPlayerVideoAdError - In the implementation block
@property (nonatomic,retain) NSData * currentStationData;                                    //@synthesize currentStationData=_currentStationData - In the implementation block
@property (nonatomic,retain) NSData * currentSongData;                                       //@synthesize currentSongData=_currentSongData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedEngine;
-(BOOL)enabled;
-(double)nextInterstitialPresentationTime;
-(void)setSharedInterstitialAdIsInUse:(BOOL)arg1 ;
-(void)setSharedInterstitialServerURL:(NSURL *)arg1 ;
-(id)init;
-(void)disablePolicyEngine;
-(ADBannerView *)sharedMediaPlayerVideoAd;
-(ADInterstitialAd *)sharedInterstitialAd;
-(void)bannerViewDidLoadAd:(id)arg1 ;
-(void)setPolicyEngineQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)sharedInterstitialSection;
-(void)setEnabled:(BOOL)arg1 ;
-(void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2 ;
-(NSError *)lastSharedMediaPlayerVideoAdError;
-(void)setSharedInterstitialSection:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)policyEngineQueue;
-(void)relinquishSharedMediaPlayerVideoAd;
-(void)enablePolicyEngine;
-(void)sharedMediaPlayerVideoAdActionDidFinish;
-(void)setSharedInterstitialAuthenticationUserName:(NSString *)arg1 ;
-(void)interstitialAdDidUnload:(id)arg1 ;
-(NSString *)sharedInterstitialAuthenticationUserName;
-(BOOL)bannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(BOOL)arg2 ;
-(void)setNextPrerollPlaybackTime:(double)arg1 ;
-(BOOL)canPresentSharedInterstitialAdWithResultMessage:(id*)arg1 ;
-(void)sharedMediaPlayerVideoAdDidLoad;
-(BOOL)sharedMediaPlayerVideoAdClaimed;
-(void)setSharedMediaPlayerVideoAdClaimed:(BOOL)arg1 ;
-(void)sharedMediaPlayerVideoAdWillLoad;
-(void)bannerViewWillLoadAd:(id)arg1 ;
-(BOOL)claimSharedMediaPlayerVideoAdWithError:(id*)arg1 ;
-(void)finishedPresentingSharedInterstitialAd;
-(void)setSharedInterstitialAd:(ADInterstitialAd *)arg1 ;
-(void)setSharedMediaPlayerVideoAd:(ADBannerView *)arg1 ;
-(void)setCurrentSongData:(NSData *)arg1 ;
-(void)setNextInterstitialPresentationTime:(double)arg1 ;
-(void)setCanAutoEnable:(BOOL)arg1 ;
-(double)nextPrerollPlaybackTime;
-(NSData *)currentSongData;
-(void)setLastSharedMediaPlayerVideoAdError:(NSError *)arg1 ;
-(void)_enablePolicyEngineWithReason:(id)arg1 ;
-(BOOL)canAutoEnable;
-(void)interstitialAdDidLoad:(id)arg1 ;
-(void)adServingDaemonDidIdleDisablePolicyEngine;
-(void)interstitialAd:(id)arg1 didFailWithError:(id)arg2 ;
-(void)bannerViewActionDidFinish:(id)arg1 ;
-(void)setCurrentStationData:(NSData *)arg1 ;
-(NSData *)currentStationData;
-(NSURL *)sharedInterstitialServerURL;
-(void)sharedMediaPlayerVideoAdDidFailToReceiveAdWithError:(id)arg1 ;
-(BOOL)sharedInterstitialAdIsInUse;
@end

