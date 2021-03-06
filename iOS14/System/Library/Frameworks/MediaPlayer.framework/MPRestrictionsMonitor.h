/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, MCProfileConnection, NSString;

@interface MPRestrictionsMonitor : NSObject <MCProfileConnectionObserver> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _cachedSettings;
	MCProfileConnection* _connection;
	BOOL _allowsAccountModification;
	BOOL _allowsDeletion;
	BOOL _allowsExplicitContent;
	BOOL _allowsMusicSubscription;
	BOOL _allowsStorePurchases;
	BOOL _allowsRadioPurchases;
	BOOL _allowsMusicVideos;
	long long _maximumTVShowRatingForAgeGate;
	long long _maximumMovieRatingForAgeGate;

}

@property (assign,nonatomic) long long maximumTVShowRatingForAgeGate;              //@synthesize maximumTVShowRatingForAgeGate=_maximumTVShowRatingForAgeGate - In the implementation block
@property (assign,nonatomic) long long maximumMovieRatingForAgeGate;               //@synthesize maximumMovieRatingForAgeGate=_maximumMovieRatingForAgeGate - In the implementation block
@property (nonatomic,readonly) BOOL allowsAccountModification;                     //@synthesize allowsAccountModification=_allowsAccountModification - In the implementation block
@property (nonatomic,readonly) BOOL allowsDeletion;                                //@synthesize allowsDeletion=_allowsDeletion - In the implementation block
@property (nonatomic,readonly) BOOL allowsExplicitContent;                         //@synthesize allowsExplicitContent=_allowsExplicitContent - In the implementation block
@property (nonatomic,readonly) BOOL allowsMusicSubscription;                       //@synthesize allowsMusicSubscription=_allowsMusicSubscription - In the implementation block
@property (nonatomic,readonly) BOOL allowsStorePurchases;                          //@synthesize allowsStorePurchases=_allowsStorePurchases - In the implementation block
@property (nonatomic,readonly) BOOL allowsRadioPurchases;                          //@synthesize allowsRadioPurchases=_allowsRadioPurchases - In the implementation block
@property (nonatomic,readonly) BOOL allowsMusicVideos;                             //@synthesize allowsMusicVideos=_allowsMusicVideos - In the implementation block
@property (nonatomic,readonly) long long maximumTVShowRating; 
@property (nonatomic,readonly) long long maximumMovieRating; 
@property (nonatomic,readonly) BOOL hasRestrictionsPasscode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedRestrictionsMonitor;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)init;
-(BOOL)allowsExplicitContent;
-(BOOL)_isRunningInStoreDemoMode;
-(BOOL)allowsAccountModification;
-(void)setMaximumMovieRatingForAgeGate:(long long)arg1 ;
-(id)effectiveValueForSetting:(id)arg1 ;
-(BOOL)allowsDeletion;
-(long long)maximumMovieRating;
-(void)synchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)allowsMusicSubscription;
-(BOOL)allowsMusicVideos;
-(BOOL)allowsRadioPurchases;
-(BOOL)allowsStorePurchases;
-(void)_cacheValue:(id)arg1 forSetting:(id)arg2 ;
-(long long)maximumMovieRatingForAgeGate;
-(long long)maximumTVShowRatingForAgeGate;
-(void)setMaximumTVShowRatingForAgeGate:(long long)arg1 ;
-(void)_updateWithCanPostNotifications:(BOOL)arg1 ;
-(BOOL)hasRestrictionsPasscode;
-(void)dealloc;
-(long long)maximumTVShowRating;
@end

