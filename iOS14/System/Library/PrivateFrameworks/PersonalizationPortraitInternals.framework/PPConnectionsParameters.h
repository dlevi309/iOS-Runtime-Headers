/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSObject;

@interface PPConnectionsParameters : NSObject {

	NSDictionary* _assets;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
-(double)userActivityCandidateScore;
-(BOOL)boolValueForKey:(id)arg1 default:(BOOL)arg2 ;
-(id)init;
-(id)donationBlockedApps;
-(id)donationAllowedWebsites;
-(double)calendarEventLocationExpirySeconds;
-(double)calendarEventLocationLookaheadTimeSeconds;
-(double)foundInAppsSourceExpirySeconds;
-(id)assetValueForKey:(id)arg1 ;
-(long long)locationAppPredictionLaunchTimeOfDayFactor;
-(double)linguisticTriggerExpirySeconds;
-(long long)appSwitcherPredictionExpiry;
-(double)foundInAppsSourceLookBackSeconds;
-(unsigned long long)quickTypePredictionLimit;
-(id)locationPredictionBlockedApps;
-(double)userActivityExpirySeconds;
-(double)doubleValueForKey:(id)arg1 default:(long long)arg2 ;
-(double)namedEntitySourceLookBackSeconds;
-(double)pasteboardItemExpirySeconds;
-(long long)expirySeconds;
-(double)locationAppLastUseTimeoutSeconds;
-(long long)locationAppPredictionOverallLaunchFactor;
-(id)donationAllowedApps;
-(BOOL)shouldUseAllowedApps;
-(unsigned long long)userActivityBatchSize;
-(long long)locationAppPredictionInstallMaxScore;
-(long long)unsignedIntegerValueForKey:(id)arg1 default:(long long)arg2 ;
-(long long)locationAppPredictionInstallHalflife;
-(id)donationBlockedWebsites;
-(double)namedEntitySourceExpirySeconds;
-(long long)integerValueForKey:(id)arg1 default:(long long)arg2 ;
-(BOOL)shouldUseAllowedWebsite;
@end

