/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class NSString, CPLPlatformObject;

@interface CPLEngineChangePipe : CPLEngineStorage <CPLAbstractObject>

@property (nonatomic,readonly) unsigned long long countOfQueuedBatches; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
-(BOOL)isEmpty;
-(unsigned long long)scopeType;
-(id)nextBatch;
-(BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4 ;
-(BOOL)hasSomeChangeWithScopedIdentifier:(id)arg1 ;
-(unsigned long long)countOfQueuedBatches;
-(BOOL)hasQueuedBatches;
-(BOOL)appendChangeBatch:(id)arg1 error:(id*)arg2 ;
-(BOOL)popChangeBatch:(id*)arg1 error:(id*)arg2 ;
-(BOOL)popNextBatchWithError:(id*)arg1 ;
-(BOOL)hasSomeChangeInScopesWithIdentifiers:(id)arg1 ;
-(BOOL)hasSomeChangeWithScopeFilter:(id)arg1 ;
-(BOOL)deleteAllChangeBatchesWithError:(id*)arg1 ;
-(BOOL)deleteAllChangesWithScopeFilter:(id)arg1 error:(id*)arg2 ;
-(BOOL)compactChangeBatchesWithError:(id*)arg1 ;
-(id)popAllChangeBatchesWithError:(id*)arg1 ;
-(id)allChangeBatches;
@end

