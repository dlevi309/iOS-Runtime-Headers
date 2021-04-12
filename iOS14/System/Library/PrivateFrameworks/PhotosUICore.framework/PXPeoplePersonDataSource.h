/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXPeopleDataSource.h>
#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>

@class PXPeopleFaceTileImageManager, NSMutableDictionary, NSDictionary, NSString;

@interface PXPeoplePersonDataSource : PXPeopleDataSource <PHPhotoLibraryChangeObserver> {

	PXPeopleFaceTileImageManager* _imageManager;
	NSMutableDictionary* _keyFaceByPersonLocalIdentifier;
	NSDictionary* _assetsByFaces;
	unsigned long long _personFetchType;

}

@property (assign,nonatomic) unsigned long long personFetchType;                         //@synthesize personFetchType=_personFetchType - In the implementation block
@property (nonatomic,readonly) PXPeopleFaceTileImageManager * imageManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startListeningForChanges;
-(id)titleAtIndex:(unsigned long long)arg1 ;
-(void)loadObjectsAndUpdateMembersWithCompletion:(/*^block*/id)arg1 ;
-(id)_applyChanges:(id)arg1 ;
-(id)_fetchResultForFetchType:(unsigned long long)arg1 fetchOptions:(id)arg2 ;
-(id)_faceForPerson:(id)arg1 ;
-(PXPeopleFaceTileImageManager *)imageManager;
-(id)_assetForFace:(id)arg1 ;
-(void)cancelImageLoadingForItem:(id)arg1 ;
-(void)photoLibraryDidChange:(id)arg1 ;
-(void)_cacheFacesAndAssets;
-(long long)_personTypeForFetchType:(unsigned long long)arg1 ;
-(id)initWithName:(id)arg1 personFetchType:(unsigned long long)arg2 ;
-(id)initWithName:(id)arg1 personFetchType:(unsigned long long)arg2 fetchLimit:(unsigned long long)arg3 ;
-(id)_membersForModelObjects:(id)arg1 ;
-(void)_asyncLoadImageForItem:(id)arg1 targetSize:(CGSize)arg2 withCompletionBlock:(/*^block*/id)arg3 fastDisplayBlock:(/*^block*/id)arg4 ;
-(unsigned long long)personFetchType;
-(void)setPersonFetchType:(unsigned long long)arg1 ;
-(id)generateFetchResult;
-(void)stopListeningForChanges;
-(id)_itemsArrayFromObjects:(id)arg1 ;
-(void)updateKeyFace:(id)arg1 forPerson:(id)arg2 ;
-(id)faceTileAtIndex:(long long)arg1 ;
@end

