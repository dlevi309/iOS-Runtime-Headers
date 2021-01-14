/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXActionPerformer.h>

@protocol UIDragSession, UIDropSession;
@class PXAssetCollectionReference, PXDisplayTitleInfo, PHFetchResult, PXAssetReference, PXAssetsDataSource;

@interface PXAssetCollectionActionPerformer : PXActionPerformer {

	PXAssetCollectionReference* _assetCollectionReference;
	PXDisplayTitleInfo* _displayTitleInfo;
	PHFetchResult* _people;
	PXAssetReference* _dropTargetAssetReference;
	id<UIDragSession> _dragSession;
	id<UIDropSession> _dropSession;
	PXAssetsDataSource* _assetsDataSource;
	PHFetchResult* _assetsFetchResult;

}

@property (nonatomic,retain) PHFetchResult * people;                                               //@synthesize people=_people - In the implementation block
@property (nonatomic,retain) PXAssetReference * dropTargetAssetReference;                          //@synthesize dropTargetAssetReference=_dropTargetAssetReference - In the implementation block
@property (nonatomic,retain) id<UIDragSession> dragSession;                                        //@synthesize dragSession=_dragSession - In the implementation block
@property (nonatomic,retain) id<UIDropSession> dropSession;                                        //@synthesize dropSession=_dropSession - In the implementation block
@property (nonatomic,retain) PXAssetsDataSource * assetsDataSource;                                //@synthesize assetsDataSource=_assetsDataSource - In the implementation block
@property (nonatomic,retain) PHFetchResult * assetsFetchResult;                                    //@synthesize assetsFetchResult=_assetsFetchResult - In the implementation block
@property (nonatomic,readonly) PXAssetCollectionReference * assetCollectionReference;              //@synthesize assetCollectionReference=_assetCollectionReference - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAssetCollection> assetCollection; 
@property (nonatomic,readonly) PXDisplayTitleInfo * displayTitleInfo;                              //@synthesize displayTitleInfo=_displayTitleInfo - In the implementation block
-(PXAssetReference *)dropTargetAssetReference;
-(PXAssetCollectionReference *)assetCollectionReference;
-(void)setDropTargetAssetReference:(PXAssetReference *)arg1 ;
-(id<UIDropSession>)dropSession;
-(PHFetchResult *)assetsFetchResult;
-(PXDisplayTitleInfo *)displayTitleInfo;
-(void)setAssetsFetchResult:(PHFetchResult *)arg1 ;
-(id)initWithActionType:(id)arg1 assetCollectionReference:(id)arg2 displayTitleInfo:(id)arg3 ;
-(void)setPeople:(PHFetchResult *)arg1 ;
-(void)setDragSession:(id<UIDragSession>)arg1 ;
-(void)setDropSession:(id<UIDropSession>)arg1 ;
-(PHFetchResult *)people;
-(id<PXDisplayAssetCollection>)assetCollection;
-(void)setAssetsDataSource:(PXAssetsDataSource *)arg1 ;
-(id)initWithActionType:(id)arg1 ;
-(PXAssetsDataSource *)assetsDataSource;
-(id<UIDragSession>)dragSession;
@end

