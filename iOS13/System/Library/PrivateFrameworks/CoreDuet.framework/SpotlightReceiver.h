/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol SpotlightReceiver <NSObject>
@optional
-(void)addOrUpdateSearchableItems:(id)arg1 bundleID:(id)arg2;
-(id)supportedContentTypes;
-(id)supportedBundleIDs;
-(void)deleteSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2;
-(void)deleteAllSearchableItemsWithBundleID:(id)arg1;
-(void)deleteSearchableItemsSinceDate:(id)arg1 bundleID:(id)arg2;
-(void)purgeSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2;
-(void)addUserAction:(id)arg1 withItem:(id)arg2;
-(void)deleteAllUserActivities:(id)arg1;
-(void)deleteUserActivitiesWithPersistentIdentifiers:(id)arg1 bundleID:(id)arg2;
-(id)supportedINIntentClassNames;
-(void)addInteractions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
-(void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
-(void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
-(void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2;
-(void)donateRelevantShortcuts:(id)arg1 bundleID:(id)arg2;
-(void)donateRelevantActions:(id)arg1 bundleID:(id)arg2;

@end

