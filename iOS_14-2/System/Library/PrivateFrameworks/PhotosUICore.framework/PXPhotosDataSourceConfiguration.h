/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PHFetchResult, PHCollection, NSDictionary, PHAsset, NSPredicate, NSSet, NSArray, PHPhotoLibrary;

@interface PXPhotosDataSourceConfiguration : NSObject {

	BOOL _hideHiddenAssets;
	PHFetchResult* _collectionListFetchResult;
	PHCollection* _containerCollection;
	unsigned long long _options;
	NSDictionary* _existingAssetCollectionFetchResults;
	NSDictionary* _existingKeyAssetsFetchResults;
	PHAsset* _referenceAsset;
	NSPredicate* _basePredicate;
	NSPredicate* _filterPredicate;
	NSSet* _allowedUUIDs;
	NSSet* _allowedOIDs;
	NSArray* _filterPersons;
	PHPhotoLibrary* _photoLibrary;
	NSArray* _fetchPropertySets;
	long long _curationType;

}

@property (nonatomic,readonly) PHFetchResult * collectionListFetchResult;                     //@synthesize collectionListFetchResult=_collectionListFetchResult - In the implementation block
@property (nonatomic,readonly) PHCollection * containerCollection;                            //@synthesize containerCollection=_containerCollection - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                    //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSDictionary * existingAssetCollectionFetchResults;              //@synthesize existingAssetCollectionFetchResults=_existingAssetCollectionFetchResults - In the implementation block
@property (nonatomic,retain) NSDictionary * existingKeyAssetsFetchResults;                    //@synthesize existingKeyAssetsFetchResults=_existingKeyAssetsFetchResults - In the implementation block
@property (nonatomic,retain) PHAsset * referenceAsset;                                        //@synthesize referenceAsset=_referenceAsset - In the implementation block
@property (nonatomic,retain) NSPredicate * basePredicate;                                     //@synthesize basePredicate=_basePredicate - In the implementation block
@property (nonatomic,retain) NSPredicate * filterPredicate;                                   //@synthesize filterPredicate=_filterPredicate - In the implementation block
@property (nonatomic,retain) NSSet * allowedUUIDs;                                            //@synthesize allowedUUIDs=_allowedUUIDs - In the implementation block
@property (nonatomic,retain) NSSet * allowedOIDs;                                             //@synthesize allowedOIDs=_allowedOIDs - In the implementation block
@property (nonatomic,retain) NSArray * filterPersons;                                         //@synthesize filterPersons=_filterPersons - In the implementation block
@property (assign,nonatomic) BOOL hideHiddenAssets;                                           //@synthesize hideHiddenAssets=_hideHiddenAssets - In the implementation block
@property (nonatomic,retain) PHPhotoLibrary * photoLibrary;                                   //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,retain) NSArray * fetchPropertySets;                                     //@synthesize fetchPropertySets=_fetchPropertySets - In the implementation block
@property (assign,nonatomic) long long curationType;                                          //@synthesize curationType=_curationType - In the implementation block
-(NSArray *)fetchPropertySets;
-(NSPredicate *)basePredicate;
-(void)setFilterPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)filterPredicate;
-(long long)curationType;
-(void)setFilterPersons:(NSArray *)arg1 ;
-(void)setExistingAssetCollectionFetchResults:(NSDictionary *)arg1 ;
-(id)init;
-(PHPhotoLibrary *)photoLibrary;
-(void)setReferenceAsset:(PHAsset *)arg1 ;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(void)setHideHiddenAssets:(BOOL)arg1 ;
-(unsigned long long)options;
-(NSDictionary *)existingKeyAssetsFetchResults;
-(void)setBasePredicate:(NSPredicate *)arg1 ;
-(PHFetchResult *)collectionListFetchResult;
-(void)setAllowedOIDs:(NSSet *)arg1 ;
-(PHAsset *)referenceAsset;
-(void)setAllowedUUIDs:(NSSet *)arg1 ;
-(NSSet *)allowedUUIDs;
-(NSSet *)allowedOIDs;
-(PHCollection *)containerCollection;
-(BOOL)hideHiddenAssets;
-(id)initWithCollectionListFetchResult:(id)arg1 options:(unsigned long long)arg2 ;
-(void)setCurationType:(long long)arg1 ;
-(NSArray *)filterPersons;
-(void)setFetchPropertySets:(NSArray *)arg1 ;
-(NSDictionary *)existingAssetCollectionFetchResults;
-(id)initWithAssetFetchResult:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithCollectionListFetchResult:(id)arg1 containerCollection:(id)arg2 options:(unsigned long long)arg3 ;
-(void)setExistingKeyAssetsFetchResults:(NSDictionary *)arg1 ;
@end

