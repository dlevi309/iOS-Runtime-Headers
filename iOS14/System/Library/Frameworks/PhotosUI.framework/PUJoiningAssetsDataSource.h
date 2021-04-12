/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUAssetsDataSource.h>

@class NSArray, NSDictionary;

@interface PUJoiningAssetsDataSource : PUAssetsDataSource {

	NSArray* __dataSources;
	long long __totalNumberOfSections;
	NSDictionary* __containedDataSourceInfoByIdentifier;
	NSArray* __containedDataSourceInfos;

}

@property (nonatomic,readonly) NSArray * _dataSources;                                           //@synthesize _dataSources=__dataSources - In the implementation block
@property (nonatomic,readonly) long long _totalNumberOfSections;                                 //@synthesize _totalNumberOfSections=__totalNumberOfSections - In the implementation block
@property (nonatomic,readonly) NSDictionary * _containedDataSourceInfoByIdentifier;              //@synthesize _containedDataSourceInfoByIdentifier=__containedDataSourceInfoByIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * _containedDataSourceInfos;                              //@synthesize _containedDataSourceInfos=__containedDataSourceInfos - In the implementation block
-(long long)numberOfSubItemsAtIndexPath:(id)arg1 ;
-(id)badgeInfoPromiseForAssetAtIndexPath:(id)arg1 ;
-(long long)numberOfAssetsWithMaximum:(long long)arg1 ;
-(id)indexPathForAssetReference:(id)arg1 ;
-(id)containedAssetsDataSourceAtIndexPath:(id)arg1 ;
-(id)startingAssetReference;
-(id)initWithDataSources:(id)arg1 ;
-(long long)_totalNumberOfSections;
-(id)_assetsDataSourceForExternalIndexPath:(id)arg1 outDataSourceIndex:(out long long*)arg2 outLocalIndexPath:(out id*)arg3 ;
-(id)_externalIndexPathForLocalIndexPath:(id)arg1 inAssetsDataSource:(id)arg2 ;
-(NSDictionary *)_containedDataSourceInfoByIdentifier;
-(NSArray *)_containedDataSourceInfos;
-(NSArray *)_dataSources;
-(id)assetReferenceAtIndexPath:(id)arg1 ;
-(id)assetCollectionAtIndexPath:(id)arg1 ;
-(id)assetAtIndexPath:(id)arg1 ;
-(id)indexPathForAssetCollection:(id)arg1 ;
@end

