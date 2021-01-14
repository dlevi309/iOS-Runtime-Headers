/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLRecordStorageView.h>

@protocol CPLEngineIDMapping;
@class CPLEngineStore, CPLEngineCloudCache;

@interface CPLClientCacheBaseView : CPLRecordStorageView {

	CPLEngineStore* _store;
	CPLEngineCloudCache* _cloudCache;
	id<CPLEngineIDMapping> _idMapping;

}

@property (nonatomic,readonly) CPLEngineStore * store;                        //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) CPLEngineCloudCache * cloudCache;              //@synthesize cloudCache=_cloudCache - In the implementation block
@property (nonatomic,readonly) id<CPLEngineIDMapping> idMapping;              //@synthesize idMapping=_idMapping - In the implementation block
-(CPLEngineStore *)store;
-(id)initWithStore:(id)arg1 ;
-(id)description;
-(id<CPLEngineIDMapping>)idMapping;
-(CPLEngineCloudCache *)cloudCache;
-(BOOL)hasRecordWithScopedIdentifier:(id)arg1 ;
-(unsigned long long)countOfRecordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 ;
-(id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)arg1 ;
-(id)recordViewWithScopedIdentifier:(id)arg1 ;
-(id)recordViewsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 ;
@end

