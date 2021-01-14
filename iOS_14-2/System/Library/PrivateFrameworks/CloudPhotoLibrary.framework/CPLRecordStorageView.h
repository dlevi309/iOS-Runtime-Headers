/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@interface CPLRecordStorageView : NSObject
-(BOOL)hasRecordWithScopedIdentifier:(id)arg1 ;
-(id)resourceOfType:(unsigned long long)arg1 forRecordWithScopedIdentifier:(id)arg2 recordClass:(Class*)arg3 error:(id*)arg4 ;
-(unsigned long long)countOfRecordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 ;
-(id)compactedBatchFromExpandedBatch:(id)arg1 ;
-(id)localChangeBatchFromCloudBatch:(id)arg1 usingMapping:(id)arg2 withError:(id*)arg3 ;
-(id)resourceOfType:(unsigned long long)arg1 forRecordWithScopedIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)arg1 ;
-(id)recordViewWithScopedIdentifier:(id)arg1 ;
-(id)recordViewsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 ;
@end

