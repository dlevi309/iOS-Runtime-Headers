/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

