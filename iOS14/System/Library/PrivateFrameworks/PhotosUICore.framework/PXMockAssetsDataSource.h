/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXAssetsDataSource.h>

@class NSArray;

@interface PXMockAssetsDataSource : PXAssetsDataSource {

	NSArray* _assetsBySection;
	NSArray* _assetCollections;

}

@property (nonatomic,readonly) NSArray * assetsBySection;               //@synthesize assetsBySection=_assetsBySection - In the implementation block
@property (nonatomic,readonly) NSArray * assetCollections;              //@synthesize assetCollections=_assetCollections - In the implementation block
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(NSArray *)assetsBySection;
-(id)initWithAssetsBySection:(id)arg1 assetCollections:(id)arg2 ;
-(PXSimpleIndexPath)indexPathForObjectID:(id)arg1 ;
-(NSArray *)assetCollections;
-(long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2 ;
@end

