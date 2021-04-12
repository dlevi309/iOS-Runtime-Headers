/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class NSArray, NSString, CPLPlatformObject;

@interface CPLEngineClientCache : CPLEngineStorage <CPLAbstractObject> {

	NSArray* __lastModifiedProperties;

}

@property (setter=_setLastModifiedProperties:,copy) NSArray * _lastModifiedProperties;              //@synthesize _lastModifiedProperties=__lastModifiedProperties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
-(id)status;
-(unsigned long long)scopeType;
-(BOOL)addRecord:(id)arg1 error:(id*)arg2 ;
-(id)statusDictionary;
-(BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4 ;
-(BOOL)hasRecordWithScopedIdentifier:(id)arg1 ;
-(id)resourceOfType:(unsigned long long)arg1 forRecordWithScopedIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)recordWithScopedIdentifier:(id)arg1 ;
-(BOOL)updateRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteRecordWithScopedIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)_relatedScopedIdentifierForRecordWithScopedIdentifier:(id)arg1 ;
-(id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)arg1 ;
-(id)recordsWithRelatedScopedIdentifier:(id)arg1 ;
-(id)recordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 ;
-(BOOL)hasRecordWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 ;
-(unsigned long long)countOfRecordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 ;
-(id)compactedBatchFromExpandedBatch:(id)arg1 ;
-(id)localChangeBatchFromCloudBatch:(id)arg1 usingMapping:(id)arg2 withError:(id*)arg3 ;
-(BOOL)applyBatch:(id)arg1 direction:(unsigned long long)arg2 withError:(id*)arg3 ;
-(id)resourceOfType:(unsigned long long)arg1 forRecordWithScopedIdentifier:(id)arg2 recordClass:(Class*)arg3 error:(id*)arg4 ;
-(void)fillRelatedIdentifiersInChange:(id)arg1 ;
-(NSArray *)_lastModifiedProperties;
-(void)_setLastModifiedProperties:(id)arg1 ;
@end

