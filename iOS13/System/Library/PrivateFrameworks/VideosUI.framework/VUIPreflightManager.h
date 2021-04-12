/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol TVPMediaItem;
@class VUIVideosPlayable, NSObject, UIViewController;

@interface VUIPreflightManager : NSObject {

	VUIVideosPlayable* _videosPlayable;
	NSObject*<TVPMediaItem> _mediaItem;
	unsigned long long _restrictionsCheckType;
	UIViewController* _presentingController;

}

@property (nonatomic,retain) VUIVideosPlayable * videosPlayable;                    //@synthesize videosPlayable=_videosPlayable - In the implementation block
@property (nonatomic,retain) NSObject*<TVPMediaItem> mediaItem;                     //@synthesize mediaItem=_mediaItem - In the implementation block
@property (assign,nonatomic) unsigned long long restrictionsCheckType;              //@synthesize restrictionsCheckType=_restrictionsCheckType - In the implementation block
@property (nonatomic,retain) UIViewController * presentingController;               //@synthesize presentingController=_presentingController - In the implementation block
+(id)defaultPreflightManager;
-(id)init;
-(NSObject*<TVPMediaItem>)mediaItem;
-(void)setMediaItem:(NSObject*<TVPMediaItem>)arg1 ;
-(id)_ratingValue;
-(void)setPresentingController:(UIViewController *)arg1 ;
-(VUIVideosPlayable *)videosPlayable;
-(void)setVideosPlayable:(VUIVideosPlayable *)arg1 ;
-(void)setRestrictionsCheckType:(unsigned long long)arg1 ;
-(void)preflightWithOptions:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(UIViewController *)presentingController;
-(void)_preflightWithOptions:(long long)arg1 userInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_performRestrictionsCheckWithCompletion:(/*^block*/id)arg1 ;
-(void)_performAgeGateVerificationWithCompletion:(/*^block*/id)arg1 ;
-(void)_preflightDownloadWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_isAllowedToPlayOrPurchase;
-(id)_ratingDomain;
-(void)_showRestrictionsAlertForRatingDomain:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_isTrailer;
-(unsigned long long)restrictionsCheckType;
-(BOOL)_shouldShowAgeConfirmationAlert;
-(long long)_requiredAgeForPlayback;
-(void)_setLastAgeConfirmationPrompted:(id)arg1 ;
-(void)_setLastConfirmedAge:(long long)arg1 ;
-(void)_showAgeConfirmationWithPresentingViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)_lastConfirmedAge;
-(id)_lastAgeConfirmationPrompted;
-(BOOL)_isOnWiFi;
@end

