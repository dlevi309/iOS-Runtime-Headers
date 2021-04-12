/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXCollectionsDataSection.h>

@class PXCollectionsDataSource;

@interface _PXCollectionsDataSourceSection : PXCollectionsDataSection {

	long long _count;
	PXCollectionsDataSource* _collectionsDataSource;

}

@property (nonatomic,readonly) PXCollectionsDataSource * collectionsDataSource;              //@synthesize collectionsDataSource=_collectionsDataSource - In the implementation block
-(id)content;
-(long long)count;
-(id)initWithCollectionsDataSource:(id)arg1 ;
-(id)objectAtIndex:(long long)arg1 ;
-(id)existingAssetsFetchResultAtIndex:(long long)arg1 ;
-(long long)countForCollection:(id)arg1 ;
-(long long)indexOfCollection:(id)arg1 ;
-(PXCollectionsDataSource *)collectionsDataSource;
@end

