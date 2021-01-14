/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class NSDictionary;

@interface SGDPluginManager : NSObject {

	NSDictionary* _plugins;

}
+(id)sharedInstance;
+(void)_processHistoricalDataRequestsForPluginIdentifier:(id)arg1 result:(id)arg2 ;
-(void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)processSearchableItem:(id)arg1 ;
-(id)init;
-(id)processUserAction:(id)arg1 searchableItem:(id)arg2 ;
-(id)_processSearchableItem:(id)arg1 userAction:(id)arg2 ;
-(void)setPlugins:(id)arg1 ;
-(void)processInteraction:(id)arg1 bundleIdentifier:(id)arg2 protectionClass:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

