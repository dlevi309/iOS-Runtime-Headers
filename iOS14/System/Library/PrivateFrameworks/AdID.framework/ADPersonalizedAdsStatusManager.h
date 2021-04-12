/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdID.framework/AdID
*/

#import <AdCore/ADSingleton.h>

@class NSNumber;

@interface ADPersonalizedAdsStatusManager : ADSingleton {

	BOOL _sendingPersonalizedAdsToAdPlatforms;
	NSNumber* _pendingJingleRequestToken;

}

@property (nonatomic,copy) NSNumber * pendingJingleRequestToken;                    //@synthesize pendingJingleRequestToken=_pendingJingleRequestToken - In the implementation block
@property (assign,nonatomic) BOOL sendingPersonalizedAdsToAdPlatforms;              //@synthesize sendingPersonalizedAdsToAdPlatforms=_sendingPersonalizedAdsToAdPlatforms - In the implementation block
+(id)sharedInstance;
-(void)sendPersonalizedAdsStatusToAdPlatforms:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setSendingPersonalizedAdsToAdPlatforms:(BOOL)arg1 ;
-(BOOL)sendingPersonalizedAdsToAdPlatforms;
-(NSNumber *)pendingJingleRequestToken;
-(void)setPendingJingleRequestToken:(NSNumber *)arg1 ;
@end

