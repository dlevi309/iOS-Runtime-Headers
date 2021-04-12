/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PHPhotoLibrary, PHCollection, NSArray, PHFetchResult;

@interface PXPhotoKitAssetDataSourceMangerConfiguration : NSObject {

	long long _type;
	id _content;
	PHPhotoLibrary* _photoLibrary;
	PHCollection* _containerCollection;
	NSArray* _fetchPropertySets;
	unsigned long long _options;

}

@property (nonatomic,readonly) PHFetchResult * assetCollections; 
@property (nonatomic,retain) PHPhotoLibrary * photoLibrary;                   //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,retain) PHCollection * containerCollection;              //@synthesize containerCollection=_containerCollection - In the implementation block
@property (nonatomic,retain) NSArray * fetchPropertySets;                     //@synthesize fetchPropertySets=_fetchPropertySets - In the implementation block
@property (assign,nonatomic) unsigned long long options;                      //@synthesize options=_options - In the implementation block
-(NSArray *)fetchPropertySets;
-(id)initWithType:(long long)arg1 content:(id)arg2 ;
-(PHPhotoLibrary *)photoLibrary;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(PHFetchResult *)assetCollections;
-(PHCollection *)containerCollection;
-(void)setFetchPropertySets:(NSArray *)arg1 ;
-(id)initWithAssetCollections:(id)arg1 ;
-(void)setContainerCollection:(PHCollection *)arg1 ;
@end

