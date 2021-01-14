/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <SafariCore/WBSSQLiteStore.h>

@interface WBSFaviconProviderDatabaseController : WBSSQLiteStore
-(id)_fetchAllPageURLStrings;
-(id)_setIconUUID:(id)arg1 forIconURLString:(id)arg2 size:(CGSize)arg3 hasGeneratedResolutions:(BOOL)arg4 ;
-(id)_fetchIconUUIDsForPageURLStrings:(id)arg1 ;
-(id)_setTimestampToNowForIconUUID:(id)arg1 ;
-(void)removePageURLStrings:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_fetchIconUUIDForPageURLString:(id)arg1 ;
-(int)_migrateToSchemaVersion_3;
-(void)_deleteIconsWithUUIDsFromIconInfo:(id)arg1 ;
-(id)_fetchIconInfoForRejectedResourceWithPageURLString:(id)arg1 iconURLString:(id)arg2 ;
-(void)markRejectedIconAtPageURLString:(id)arg1 iconURLString:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_hasPageURLsForIconUUID:(id)arg1 ;
-(void)_deletePageURLs:(id)arg1 ;
-(void)_deleteIconWithUUIDFromIconInfo:(id)arg1 ;
-(void)linkAndUpdateTimestampForIconWithPageURLString:(id)arg1 iconURLString:(id)arg2 iconSize:(CGSize)arg3 iconHasGeneratedResolutions:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_fetchIconInfoForIconURLString:(id)arg1 ;
-(int)_currentSchemaVersion;
-(void)firstIconInfoMatchingIconURLStringIn:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)iconInfoForIconURLString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_deletePageURL:(id)arg1 ;
-(int)_migrateToSchemaVersion_2;
-(void)fetchAllIconUUIDsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)firstIconUUIDMatchingPageURLStringIn:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(int)_createFreshDatabaseSchema;
-(BOOL)_deleteRejectedResourceForPageURLString:(id)arg1 iconURLString:(id)arg2 ;
-(void)_deleteRejectedResourceForPageURLString:(id)arg1 ;
-(void)removePageURLString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)markValidIconAtPageURLString:(id)arg1 iconURLString:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)linkPageURLString:(id)arg1 toExistingIconURLString:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)rejectedResourceIconInfoForPageURLString:(id)arg1 iconURLString:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_deleteRejectedResourceForPageURLStrings:(id)arg1 ;
-(void)fetchAllKnownPageURLStringsWithCompletionHandler:(/*^block*/id)arg1 ;
-(int)_migrateToSchemaVersion_4;
-(id)_fetchIconInfoForIconUUID:(id)arg1 ;
-(void)removeAllDataForIconUUID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_firstIconUUIDForPageURLStrings:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(int)_migrateToSchemaVersion:(int)arg1 ;
-(void)firstIconInfoMatchingPageURLStringIn:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_deletePageURLsWithUUIDFromPageInfo:(id)arg1 ;
-(void)fetchPageURLStringsWithPrefixesIn:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_generateStatementsForQuery:(id)arg1 arguments:(id)arg2 statementCallback:(/*^block*/id)arg3 ;
-(void)removeAllPageURLStringsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)iconInfoForPageURLString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_deleteAllPageAndIconEntries;
-(id)_findOrphansFromIconUUIDs:(id)arg1 ;
-(void)_setPageURL:(id)arg1 toIconUUID:(id)arg2 ;
-(id)_fetchPageURLStringsWithPredicate:(id)arg1 ;
-(BOOL)_setRejectedResourceForPageURL:(id)arg1 iconURLString:(id)arg2 ;
@end

