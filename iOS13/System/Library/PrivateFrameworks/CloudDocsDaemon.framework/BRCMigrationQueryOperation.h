/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/BRCSyncDownOperation.h>

@class NSString, CKQueryCursor, NSMutableArray;

@interface BRCMigrationQueryOperation : BRCSyncDownOperation {

	NSString* _migrationKey;
	CKQueryCursor* _continuationCursor;
	NSMutableArray* _shareIDsToFetch;

}
+(id)folderSharesMigrationKey;
+(id)folderShareAliasesMigrationKey;
+(id)documentSharesMigrationKey;
+(id)allMigrationKeysOrdered;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)initWithServerZone:(id)arg1 migrationKey:(id)arg2 continuationCursor:(id)arg3 ;
-(BOOL)_saveFetchedRecords:(id)arg1 cursor:(id)arg2 error:(id*)arg3 ;
-(void)_performQuery:(id)arg1 recordFetchedBlock:(/*^block*/id)arg2 cursorUpdatedBlock:(/*^block*/id)arg3 desiredKeys:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)_updatedContinuationCursor:(id)arg1 error:(id*)arg2 ;
-(void)_performAfterQueryingForShareIDsOfFolders:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performAfterQueryingForShareAliasesWithCompletion:(/*^block*/id)arg1 ;
@end

