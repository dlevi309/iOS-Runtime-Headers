/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@protocol SpotlightReceiver <NSObject>
@optional
-(void)deleteAllUserActivities:(id)arg1;
-(id)supportedINIntentClassNames;
-(void)addOrUpdateSearchableItems:(id)arg1 bundleID:(id)arg2;
-(id)supportedContentTypes;
-(id)supportedBundleIDs;
-(void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2;
-(void)deleteAllSearchableItemsWithBundleID:(id)arg1;
-(void)donateRelevantActions:(id)arg1 bundleID:(id)arg2;
-(void)deleteUserActivitiesWithPersistentIdentifiers:(id)arg1 bundleID:(id)arg2;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2;
-(void)purgeSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2;
-(void)addInteractions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
-(void)deleteSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2;
-(void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
-(void)donateRelevantShortcuts:(id)arg1 bundleID:(id)arg2;
-(void)addUserAction:(id)arg1 withItem:(id)arg2;
-(void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
-(void)deleteSearchableItemsSinceDate:(id)arg1 bundleID:(id)arg2;

@end

