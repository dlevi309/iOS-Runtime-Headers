/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXActionManager.h>

@protocol UIDragSession, UIDropSession;
@class PXAssetCollectionReference, PXDisplayTitleInfo, PHFetchResult, PXAssetReference, PXAssetsDataSourceManager;

@interface PXAssetCollectionActionManager : PXActionManager {

	PXAssetCollectionReference* _initialAssetCollectionReference;
	PXDisplayTitleInfo* _displayTitleInfo;
	PHFetchResult* _people;
	PXAssetReference* _dropTargetAssetReference;
	id<UIDragSession> _dragSession;
	id<UIDropSession> _dropSession;
	PXAssetsDataSourceManager* _assetsDataSourceManager;
	PHFetchResult* _assetsFetchResult;

}

@property (nonatomic,retain) PHFetchResult * people;                                               //@synthesize people=_people - In the implementation block
@property (nonatomic,retain) PXAssetReference * dropTargetAssetReference;                          //@synthesize dropTargetAssetReference=_dropTargetAssetReference - In the implementation block
@property (nonatomic,retain) id<UIDragSession> dragSession;                                        //@synthesize dragSession=_dragSession - In the implementation block
@property (nonatomic,retain) id<UIDropSession> dropSession;                                        //@synthesize dropSession=_dropSession - In the implementation block
@property (nonatomic,retain) PXAssetsDataSourceManager * assetsDataSourceManager;                  //@synthesize assetsDataSourceManager=_assetsDataSourceManager - In the implementation block
@property (nonatomic,retain) PHFetchResult * assetsFetchResult;                                    //@synthesize assetsFetchResult=_assetsFetchResult - In the implementation block
@property (nonatomic,readonly) PXAssetCollectionReference * assetCollectionReference; 
@property (nonatomic,readonly) PXDisplayTitleInfo * displayTitleInfo;                              //@synthesize displayTitleInfo=_displayTitleInfo - In the implementation block
-(PXAssetReference *)dropTargetAssetReference;
-(PXAssetCollectionReference *)assetCollectionReference;
-(void)setDropTargetAssetReference:(PXAssetReference *)arg1 ;
-(PXAssetsDataSourceManager *)assetsDataSourceManager;
-(id<UIDropSession>)dropSession;
-(PHFetchResult *)assetsFetchResult;
-(id)init;
-(id)initWithAssetCollectionReference:(id)arg1 displayTitleInfo:(id)arg2 ;
-(id)initWithAssetCollection:(id)arg1 displayTitleInfo:(id)arg2 ;
-(id)displayTitleInfoForAssetCollection:(id)arg1 ;
-(PXDisplayTitleInfo *)displayTitleInfo;
-(void)setAssetsDataSourceManager:(PXAssetsDataSourceManager *)arg1 ;
-(void)setAssetsFetchResult:(PHFetchResult *)arg1 ;
-(void)setPeople:(PHFetchResult *)arg1 ;
-(void)setDragSession:(id<UIDragSession>)arg1 ;
-(BOOL)canPerformActionType:(id)arg1 ;
-(void)setDropSession:(id<UIDropSession>)arg1 ;
-(PHFetchResult *)people;
-(BOOL)canPerformActionType:(id)arg1 assetCollectionReference:(id)arg2 ;
-(id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2 assetCollectionReference:(id)arg3 ;
-(id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2 ;
-(id)actionPerformerForActionType:(id)arg1 assetCollectionReference:(id)arg2 ;
-(id)systemImageNameForActionType:(id)arg1 ;
-(id<UIDragSession>)dragSession;
-(id)actionPerformerForActionType:(id)arg1 ;
-(id)systemImageNameForActionType:(id)arg1 assetCollectionReference:(id)arg2 ;
@end

