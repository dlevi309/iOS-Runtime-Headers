/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLChangeStorage.h>

@class NSDictionary, NSString, CPLChangeBatch;

@interface CPLChangeBatchChangeStorage : CPLChangeStorage {

	NSDictionary* _changesPerScopedIdentifier;
	NSString* _storageDescription;
	CPLChangeBatch* _batch;

}

@property (nonatomic,readonly) CPLChangeBatch * batch;              //@synthesize batch=_batch - In the implementation block
-(CPLChangeBatch *)batch;
-(id)changeWithScopedIdentifier:(id)arg1 ;
-(id)changesWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 ;
-(id)storageDescription;
-(id)initWithBatch:(id)arg1 name:(id)arg2 ;
@end

