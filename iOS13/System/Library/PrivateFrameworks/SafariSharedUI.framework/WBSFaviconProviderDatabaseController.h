/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <SafariCore/WBSSQLiteStore.h>

@interface WBSFaviconProviderDatabaseController : WBSSQLiteStore
-(int)_createFreshDatabaseSchema;
-(int)_migrateToSchemaVersion:(int)arg1 ;
-(int)_migrateToSchemaVersion_2;
-(int)_migrateToSchemaVersion_3;
-(int)_migrateToSchemaVersion_4;
-(int)_currentSchemaVersion;
-(id)_fetchIconUUIDForPageURLString:(id)arg1 ;
-(id)_fetchIconInfoForIconURLString:(id)arg1 ;
-(id)_setIconUUID:(id)arg1 forIconURLString:(id)arg2 size:(CGSize)arg3 hasGeneratedResolutions:(BOOL)arg4 ;
-(id)_setTimestampToNowForIconUUID:(id)arg1 ;
-(void)_deletePageURL:(id)arg1 ;
-(BOOL)_hasPageURLsForIconUUID:(id)arg1 ;
-(void)_deleteIconWithUUIDFromIconInfo:(id)arg1 ;
-(void)_setPageURL:(id)arg1 toIconUUID:(id)arg2 ;
-(BOOL)_deleteRejectedResourceForPageURLString:(id)arg1 iconURLString:(id)arg2 ;
-(void)_deleteRejectedResourceForPageURLString:(id)arg1 ;
-(void)_deleteRejectedResourceForPageURLStrings:(id)arg1 ;
-(id)_fetchIconUUIDsForPageURLStrings:(id)arg1 ;
-(void)_deletePageURLs:(id)arg1 ;
-(id)_findOrphansFromIconUUIDs:(id)arg1 ;
-(void)_deleteIconsWithUUIDsFromIconInfo:(id)arg1 ;
-(void)_deletePageURLsWithUUIDFromPageInfo:(id)arg1 ;
-(void)_deleteAllPageAndIconEntries;
-(id)_fetchAllPageURLStrings;
-(id)_fetchIconInfoForIconUUID:(id)arg1 ;
-(BOOL)_setRejectedResourceForPageURL:(id)arg1 iconURLString:(id)arg2 ;
-(id)_fetchIconInfoForRejectedResourceWithPageURLString:(id)arg1 iconURLString:(id)arg2 ;
-(void)_firstIconUUIDForPageURLStrings:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_fetchPageURLStringsWithPredicate:(id)arg1 ;
-(void)_generateStatementsForQuery:(id)arg1 arguments:(id)arg2 statementCallback:(/*^block*/id)arg3 ;
-(void)linkAndUpdateTimestampForIconWithPageURLString:(id)arg1 iconURLString:(id)arg2 iconSize:(CGSize)arg3 iconHasGeneratedResolutions:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)linkPageURLString:(id)arg1 toExistingIconURLString:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removePageURLString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removePageURLStrings:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeAllDataForIconUUID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeAllPageURLStringsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchAllKnownPageURLStringsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)iconInfoForPageURLString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)iconInfoForIconURLString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)markRejectedIconAtPageURLString:(id)arg1 iconURLString:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)markValidIconAtPageURLString:(id)arg1 iconURLString:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)rejectedResourceIconInfoForPageURLString:(id)arg1 iconURLString:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)firstIconUUIDMatchingPageURLStringIn:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)firstIconInfoMatchingPageURLStringIn:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)firstIconInfoMatchingIconURLStringIn:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchAllIconUUIDsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchPageURLStringsWithPrefixesIn:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

