/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class NSString, CPLPlatformObject;

@interface CPLEngineCloudCache : CPLEngineStorage <CPLAbstractObject>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
-(unsigned long long)scopeType;
-(BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4 ;
-(BOOL)hasRecordWithScopedIdentifier:(id)arg1 ;
-(BOOL)addRecord:(id)arg1 isFinal:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)updateFinalRecord:(id)arg1 confirmed:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)updateStagedRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyBatch:(id)arg1 isFinal:(BOOL)arg2 direction:(unsigned long long)arg3 withError:(id*)arg4 ;
-(BOOL)_remapRecord:(id)arg1 inBatch:(id)arg2 error:(id*)arg3 ;
-(id)cloudChangeBatchFromBatch:(id)arg1 usingMapping:(id)arg2 isFinal:(BOOL)arg3 withError:(id*)arg4 ;
-(BOOL)confirmAllRecordsWithError:(id*)arg1 ;
-(BOOL)deleteRecordWithScopedIdentifier:(id)arg1 isFinal:(BOOL)arg2 error:(id*)arg3 ;
-(id)recordWithScopedIdentifier:(id)arg1 isFinal:(BOOL)arg2 ;
-(id)recordWithScopedIdentifier:(id)arg1 isConfirmed:(BOOL*)arg2 isStaged:(BOOL*)arg3 ;
-(id)recordsWithRelatedScopedIdentifier:(id)arg1 isFinal:(BOOL)arg2 ;
-(BOOL)remapAllRecordsWithPreviousScopedIdentifier:(id)arg1 newScopedIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)commitStagedChangesForScopeWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)discardStagedChangesForScopeWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)discardStagedChangesWithScopeFilter:(id)arg1 error:(id*)arg2 ;
-(id)resourceOfType:(unsigned long long)arg1 forRecordWithScopedIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)getCommittedRecord:(id*)arg1 stagedRecord:(id*)arg2 forScopedIdentifier:(id)arg3 ;
-(id)recordsOfClass:(Class)arg1 isFinal:(BOOL)arg2 ;
-(id)allRecordsIsFinal:(BOOL)arg1 ;
@end

