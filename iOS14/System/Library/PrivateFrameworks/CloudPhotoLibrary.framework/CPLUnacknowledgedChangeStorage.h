/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLChangeStorage.h>

@class CPLEngineStore;

@interface CPLUnacknowledgedChangeStorage : CPLChangeStorage {

	CPLEngineStore* _store;

}

@property (nonatomic,readonly) CPLEngineStore * store;              //@synthesize store=_store - In the implementation block
-(CPLEngineStore *)store;
-(id)initWithStore:(id)arg1 ;
-(id)changeWithScopedIdentifier:(id)arg1 ;
-(id)changesWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 ;
-(id)storageDescription;
@end

