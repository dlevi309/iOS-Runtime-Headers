/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXActionPerformer.h>

@class PHCollectionList, PHFetchResult, PHAssetCollection;

@interface PXCollectionListActionPerformer : PXActionPerformer {

	PHCollectionList* _collectionList;
	PHFetchResult* _parentCollectionListFetchResult;
	PHAssetCollection* _createdAssetCollection;
	unsigned long long _collectionActionType;

}

@property (assign,nonatomic) unsigned long long collectionActionType;                        //@synthesize collectionActionType=_collectionActionType - In the implementation block
@property (nonatomic,retain) PHAssetCollection * createdAssetCollection;                     //@synthesize createdAssetCollection=_createdAssetCollection - In the implementation block
@property (nonatomic,readonly) PHCollectionList * collectionList;                            //@synthesize collectionList=_collectionList - In the implementation block
@property (nonatomic,readonly) PHFetchResult * parentCollectionListFetchResult;              //@synthesize parentCollectionListFetchResult=_parentCollectionListFetchResult - In the implementation block
+(BOOL)canPerformActionForCollectionList:(id)arg1 ;
-(void)performUserInteractionTask;
-(PHCollectionList *)collectionList;
-(PHAssetCollection *)createdAssetCollection;
-(id)initWithActionType:(id)arg1 collectionList:(id)arg2 ;
-(void)handleCreateAlbum;
-(void)handleCreateFolder;
-(void)handleCreateSharedAlbum;
-(void)handleCreateSmartAlbum;
-(void)presentSetupUIForAlbumCreationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setCreatedAssetCollection:(PHAssetCollection *)arg1 ;
-(id)initWithActionType:(id)arg1 collectionList:(id)arg2 fetchResult:(id)arg3 ;
-(void)createAlbumWithAssets:(id)arg1 albumTitle:(id)arg2 ;
-(long long)_albumInsertionIndex;
-(void)_albumCreationDidBegin;
-(PHFetchResult *)parentCollectionListFetchResult;
-(unsigned long long)collectionActionType;
-(void)setCollectionActionType:(unsigned long long)arg1 ;
@end

