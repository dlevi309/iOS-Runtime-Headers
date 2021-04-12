/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLRecordStorageView.h>

@class CPLChangeStorage, CPLRecordStorageView;

@interface CPLChangedRecordStorageView : CPLRecordStorageView {

	CPLChangeStorage* _changeStorage;
	CPLRecordStorageView* _baseStorageView;

}

@property (nonatomic,readonly) CPLChangeStorage * changeStorage;                    //@synthesize changeStorage=_changeStorage - In the implementation block
@property (nonatomic,readonly) CPLRecordStorageView * baseStorageView;              //@synthesize baseStorageView=_baseStorageView - In the implementation block
-(id)description;
-(BOOL)hasRecordWithScopedIdentifier:(id)arg1 ;
-(id)resourceOfType:(unsigned long long)arg1 forRecordWithScopedIdentifier:(id)arg2 recordClass:(Class*)arg3 error:(id*)arg4 ;
-(unsigned long long)countOfRecordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 ;
-(id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)arg1 ;
-(id)initWithChangeStorage:(id)arg1 overStorageView:(id)arg2 ;
-(id)recordViewWithScopedIdentifier:(id)arg1 ;
-(id)recordViewsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 ;
-(CPLChangeStorage *)changeStorage;
-(CPLRecordStorageView *)baseStorageView;
@end

