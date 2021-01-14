/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXSectionedDataSource.h>

@interface PXCollectionsDataSource : PXSectionedDataSource {

	id _content;

}

@property (nonatomic,readonly) id content;              //@synthesize content=_content - In the implementation block
-(id)content;
-(id)existingAssetsFetchResultAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)indexPathForCollection:(id)arg1 ;
-(long long)countForCollection:(id)arg1 ;
-(id)collectionListForSection:(long long)arg1 ;
-(id)collectionAtIndexPath:(id)arg1 ;
@end

