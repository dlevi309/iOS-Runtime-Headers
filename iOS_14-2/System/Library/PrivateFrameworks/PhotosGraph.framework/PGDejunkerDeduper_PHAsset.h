/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGDejunkerDeduper_CLSInvestigationItem.h>

@class NSDictionary, PHPhotoLibrary, NSSet;

@interface PGDejunkerDeduper_PHAsset : PGDejunkerDeduper_CLSInvestigationItem {

	NSDictionary* _personLocalIdentifiersByAssetUUID;
	NSDictionary* _peopleScenesByAssetUUID;
	NSDictionary* _averageFaceQualityByAssetUUID;
	PHPhotoLibrary* _photoLibrary;
	NSSet* _verifiedPersonLocalIdentifiers;

}

@property (readonly) PHPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
-(id)initWithPhotoLibrary:(id)arg1 ;
-(PHPhotoLibrary *)photoLibrary;
-(id)verifiedPersonLocalIdentifiers;
-(BOOL)isJunkForItem:(id)arg1 ;
-(id)debugPersonStringForItem:(id)arg1 ;
-(id)faceprintByPersonLocalIdentifierByItemIdentifierWithItems:(id)arg1 ;
-(id)featureWithItem:(id)arg1 ;
-(id)itemsSortedByScoreWithItems:(id)arg1 options:(id)arg2 ;
-(void)setVerifiedPersonLocalIdentifiers:(id)arg1 ;
-(id)bestItemInItems:(id)arg1 options:(id)arg2 ;
-(id)dejunkedDedupedAssetsInAssets:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
-(void)_buildCachesWithAssets:(id)arg1 options:(id)arg2 ;
@end

