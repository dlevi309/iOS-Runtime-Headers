/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,readonly) long long maximumTVShowRating; 
@property (nonatomic,readonly) long long maximumMovieRating; 
@property (nonatomic,readonly) BOOL hasRestrictionsPasscode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedRestrictionsMonitor;
-(id)init;
-(void)dealloc;
-(void)synchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)effectiveValueForSetting:(id)arg1 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)_isRunningInStoreDemoMode;
-(BOOL)allowsDeletion;
-(BOOL)hasRestrictionsPasscode;
-(long long)maximumTVShowRating;
-(long long)maximumMovieRating;
-(void)_cacheValue:(id)arg1 forSetting:(id)arg2 ;
-(void)_updateWithCanPostNotifications:(BOOL)arg1 ;
-(BOOL)allowsAccountModification;
-(BOOL)allowsExplicitContent;
-(BOOL)allowsMusicSubscription;
-(BOOL)allowsStorePurchases;
-(BOOL)allowsRadioPurchases;
-(long long)maximumTVShowRatingForAgeGate;
-(void)setMaximumTVShowRatingForAgeGate:(long long)arg1 ;
-(long long)maximumMovieRatingForAgeGate;
-(void)setMaximumMovieRatingForAgeGate:(long long)arg1 ;
@end

