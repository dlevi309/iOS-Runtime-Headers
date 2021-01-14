/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class NSSet, NSMutableDictionary, NSDate, NSData, NSString;

@interface PPSettingsGuardedData : NSObject {

	double _cachedWeightMultiplier;
	NSSet* _donationDisabledBundleIdentifiers;
	NSSet* _cloudKitDisabledBundleIdentifiers;
	NSMutableDictionary* _donationDisabledChangeHandlers;
	NSMutableDictionary* _queryPlanLoggingChangeHandlers;
	int _nextChangeHandlerToken;
	BOOL _appConnectionsLocationsEnabled;
	NSDate* _entitiesBackfillTimestamp;
	NSData* _entitiesMappingTrieSha256;
	NSString* _abGroupOverride;

}
@end

