/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
*/


@interface SpotlightSender : NSObject
+(void)setup;
+(void)addInteraction:(id)arg1 intentClassName:(id)arg2 bundleID:(id)arg3 protectionClass:(id)arg4 client:(long long)arg5 ;
+(void)donateRelevantActions:(id)arg1 bundleID:(id)arg2 client:(long long)arg3 ;
+(void)addOrUpdateSearchableItems:(id)arg1 itemsContent:(id)arg2 bundleID:(id)arg3 protectionClass:(id)arg4 client:(long long)arg5 ;
+(void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2 client:(long long)arg3 ;
+(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2 client:(long long)arg3 ;
+(void)deleteSearchableItemsSinceDate:(id)arg1 bundleID:(id)arg2 client:(long long)arg3 ;
+(BOOL)jobForSuggestions:(long long)arg1 ;
+(id)clientConnection:(long long)arg1 jobType:(int)arg2 ;
+(id)clientConnection:(long long)arg1 ;
+(BOOL)jobForImages:(long long)arg1 ;
+(void)deleteAllUserActivities:(id)arg1 client:(long long)arg2 ;
+(BOOL)jobForDuet:(long long)arg1 ;
+(void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 client:(long long)arg4 ;
+(void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 client:(long long)arg4 ;
+(void)deleteUserActivitiesWithPersistentIdentifiers:(id)arg1 bundleID:(id)arg2 client:(long long)arg3 retainedData:(id)arg4 ;
+(BOOL)jobForTest:(long long)arg1 ;
+(void)addUserActions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 client:(long long)arg4 ;
+(void)deleteSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 contentType:(id)arg3 client:(long long)arg4 ;
+(void)dispatchWithOptions:(long long)arg1 block:(/*^block*/id)arg2 ;
+(void)deleteAllSearchableItemsWithBundleID:(id)arg1 client:(long long)arg2 ;
+(void)purgeSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 client:(long long)arg3 ;
+(void)deleteSearchableItemsWithEncodedIdentifiers:(id)arg1 bundleID:(id)arg2 client:(long long)arg3 ;
+(BOOL)enabledForClient:(long long)arg1 ;
@end

