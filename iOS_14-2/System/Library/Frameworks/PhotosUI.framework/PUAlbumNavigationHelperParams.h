/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PXGridPresentation;
@class PXPhotoKitCollectionsDataSourceManager, PUSessionInfo, PUAlbumListViewControllerSpec, PXPhotoKitCollectionsDataSource;

@interface PUAlbumNavigationHelperParams : NSObject {

	PXPhotoKitCollectionsDataSourceManager* _dataSourceManager;
	PUSessionInfo* _sessionInfo;
	PUAlbumListViewControllerSpec* _spec;
	id<PXGridPresentation> _gridPresentation;

}

@property (nonatomic,retain) PXPhotoKitCollectionsDataSourceManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,retain) PUSessionInfo * sessionInfo;                                             //@synthesize sessionInfo=_sessionInfo - In the implementation block
@property (nonatomic,retain) PUAlbumListViewControllerSpec * spec;                                    //@synthesize spec=_spec - In the implementation block
@property (nonatomic,retain) id<PXGridPresentation> gridPresentation;                                 //@synthesize gridPresentation=_gridPresentation - In the implementation block
@property (nonatomic,readonly) PXPhotoKitCollectionsDataSource * dataSource; 
-(void)setSpec:(PUAlbumListViewControllerSpec *)arg1 ;
-(void)setDataSourceManager:(PXPhotoKitCollectionsDataSourceManager *)arg1 ;
-(PXPhotoKitCollectionsDataSource *)dataSource;
-(PUAlbumListViewControllerSpec *)spec;
-(PXPhotoKitCollectionsDataSourceManager *)dataSourceManager;
-(id<PXGridPresentation>)gridPresentation;
-(void)setGridPresentation:(id<PXGridPresentation>)arg1 ;
-(PUSessionInfo *)sessionInfo;
-(void)setSessionInfo:(PUSessionInfo *)arg1 ;
@end

