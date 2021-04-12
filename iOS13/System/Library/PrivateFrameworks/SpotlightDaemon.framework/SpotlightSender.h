/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
*/


@interface SpotlightSender : NSObject
+(void)setup;
+(void)deleteSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 contentType:(id)arg3 client:(long long)arg4 ;
+(id)clientConnection:(long long)arg1 ;
+(BOOL)jobForTest:(long long)arg1 ;
+(BOOL)jobForDuet:(long long)arg1 ;
+(BOOL)jobForSuggestions:(long long)arg1 ;
+(BOOL)jobForImages:(long long)arg1 ;
+(id)clientConnection:(long long)arg1 jobType:(int)arg2 ;
+(BOOL)enabledForClient:(long long)arg1 ;
+(void)dispatchWithOptions:(long long)arg1 block:(/*^block*/id)arg2 ;
+(void)addOrUpdateSearchableItems:(id)arg1 itemsContent:(id)arg2 bundleID:(id)arg3 protectionClass:(id)arg4 client:(long long)arg5 ;
+(void)deleteSearchableItemsWithEncodedIdentifiers:(id)arg1 bundleID:(id)arg2 client:(long long)arg3 ;
+(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2 client:(long long)arg3 ;
+(void)deleteAllSearchableItemsWithBundleID:(id)arg1 client:(long long)arg2 ;
+(void)deleteSearchableItemsSinceDate:(id)arg1 bundleID:(id)arg2 client:(long long)arg3 ;
+(void)purgeSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 client:(long long)arg3 ;
+(void)addUserActions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 client:(long long)arg4 ;
+(void)deleteAllUserActivities:(id)arg1 client:(long long)arg2 ;
+(void)deleteUserActivitiesWithPersistentIdentifiers:(id)arg1 bundleID:(id)arg2 client:(long long)arg3 retainedData:(id)arg4 ;
+(void)addInteraction:(id)arg1 intentClassName:(id)arg2 bundleID:(id)arg3 protectionClass:(id)arg4 client:(long long)arg5 ;
+(void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 client:(long long)arg4 ;
+(void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 client:(long long)arg4 ;
+(void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2 client:(long long)arg3 ;
+(void)donateRelevantActions:(id)arg1 bundleID:(id)arg2 client:(long long)arg3 ;
@end

