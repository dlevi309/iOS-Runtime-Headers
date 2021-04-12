/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@protocol OS_dispatch_queue;
@class NSString, NSDictionary, NSObject;

@interface PPConnectionsParameters : NSObject {

	NSString* _abGroupIdentifier;
	NSDictionary* _assets;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
-(id)init;
-(id)donationBlacklistApps;
-(id)assetValueForKey:(id)arg1 ;
-(long long)unsignedIntegerValueForKey:(id)arg1 default:(long long)arg2 ;
-(long long)integerValueForKey:(id)arg1 default:(long long)arg2 ;
-(double)doubleValueForKey:(id)arg1 default:(long long)arg2 ;
-(BOOL)boolValueForKey:(id)arg1 default:(BOOL)arg2 ;
-(long long)expirySeconds;
-(double)userActivityExpirySeconds;
-(double)namedEntitySourceLookBackSeconds;
-(double)namedEntitySourceExpirySeconds;
-(double)foundInAppsSourceLookBackSeconds;
-(double)foundInAppsSourceExpirySeconds;
-(double)calendarEventLocationLookaheadTimeSeconds;
-(double)calendarEventLocationExpirySeconds;
-(unsigned long long)quickTypePredictionLimit;
-(unsigned long long)userActivityBatchSize;
-(double)userActivityCandidateScore;
-(long long)appSwitcherPredictionExpiry;
-(long long)locationAppPredictionInstallHalflife;
-(long long)locationAppPredictionInstallMaxScore;
-(long long)locationAppPredictionLaunchTimeOfDayFactor;
-(long long)locationAppPredictionOverallLaunchFactor;
-(double)linguisticTriggerExpirySeconds;
-(double)pasteboardItemExpirySeconds;
-(double)locationAppLastUseTimeoutSeconds;
-(BOOL)shouldUseWhitelistWebsite;
-(BOOL)shouldUseWhitelistApps;
-(id)locationPredictionBlacklistApps;
-(id)donationWhitelistWebsites;
-(id)donationBlacklistWebsites;
-(id)donationWhitelistApps;
@end

