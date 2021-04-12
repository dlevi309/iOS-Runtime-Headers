/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(PHPhotoLibrary *)photoLibrary;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)setVerifiedPersonLocalIdentifiers:(id)arg1 ;
-(id)dejunkedDedupedAssetsInAssets:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
-(void)_buildCachesWithAssets:(id)arg1 options:(id)arg2 ;
-(id)bestItemInItems:(id)arg1 options:(id)arg2 ;
-(BOOL)isJunkForItem:(id)arg1 ;
-(id)debugPersonStringForItem:(id)arg1 ;
-(id)faceprintByPersonLocalIdentifierByItemIdentifierWithItems:(id)arg1 ;
-(id)featureWithItem:(id)arg1 ;
-(id)itemsSortedByScoreWithItems:(id)arg1 options:(id)arg2 ;
-(id)verifiedPersonLocalIdentifiers;
@end

