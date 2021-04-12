/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXInboxModelDataSourceManager.h>
#import <libobjc.A.dylib/PXFeedSectionInfosManagerDelegate.h>
#import <libobjc.A.dylib/PXInboxProviderSource.h>
#import <libobjc.A.dylib/PXInboxModelMediaProvider.h>

@class PXFeedSectionInfosManager, PXSAInboxTitleProvider, PXSAInboxDetailViewControllerProvider, PXSAInboxDataSource, NSString;

@interface PXSAInboxDataSourceManager : PXInboxModelDataSourceManager <PXFeedSectionInfosManagerDelegate, PXInboxProviderSource, PXInboxModelMediaProvider> {

	PXFeedSectionInfosManager* _feedSectionInfosManager;
	PXSAInboxTitleProvider* _sharedAlbumTitleProvider;
	PXSAInboxDetailViewControllerProvider* _sharedAlbumDetailViewControllerProvider;

}

@property (nonatomic,retain) PXFeedSectionInfosManager * feedSectionInfosManager;                                          //@synthesize feedSectionInfosManager=_feedSectionInfosManager - In the implementation block
@property (nonatomic,retain) PXSAInboxTitleProvider * sharedAlbumTitleProvider;                                            //@synthesize sharedAlbumTitleProvider=_sharedAlbumTitleProvider - In the implementation block
@property (nonatomic,retain) PXSAInboxDetailViewControllerProvider * sharedAlbumDetailViewControllerProvider;              //@synthesize sharedAlbumDetailViewControllerProvider=_sharedAlbumDetailViewControllerProvider - In the implementation block
@property (nonatomic,readonly) PXSAInboxDataSource * dataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<PXInboxModelDetailViewControllerProvider> detailViewControllerProvider; 
@property (nonatomic,readonly) id<PXInboxModelMediaProvider> mediaProvider; 
@property (nonatomic,readonly) id<PXInboxModelTitleProvider> titleProvider; 
-(id<PXInboxModelMediaProvider>)mediaProvider;
-(id)createInitialDataSource;
-(id<PXInboxModelDetailViewControllerProvider>)detailViewControllerProvider;
-(id)providerSource;
-(int)requestImageForPreviewItem:(id)arg1 targetSize:(CGSize)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)_updateDataSource;
-(id)init;
-(id)_sectionInfosForDataSource;
-(PXSAInboxTitleProvider *)sharedAlbumTitleProvider;
-(void)setSharedAlbumTitleProvider:(PXSAInboxTitleProvider *)arg1 ;
-(PXSAInboxDetailViewControllerProvider *)sharedAlbumDetailViewControllerProvider;
-(void)setSharedAlbumDetailViewControllerProvider:(PXSAInboxDetailViewControllerProvider *)arg1 ;
-(id<PXInboxModelTitleProvider>)titleProvider;
-(PXFeedSectionInfosManager *)feedSectionInfosManager;
-(void)setFeedSectionInfosManager:(PXFeedSectionInfosManager *)arg1 ;
-(void)feedSectionInfosManager:(id)arg1 sectionInfosDidChange:(id)arg2 ;
-(id)_dataSourceSnapshot;
@end

