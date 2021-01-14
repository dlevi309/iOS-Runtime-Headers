/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSectionedDataSourceManager.h>
#import <libobjc.A.dylib/PXAssetsDataSourceManagerObserver.h>

@protocol OS_dispatch_queue;
@class PXAssetsDataSourceManager, PXAssetsDataSource, PXZoomableInlineHeaderSectionInfoMetaDataStore, NSObject, PXZoomableInlineHeadersDataSource, PXUpdater, NSString;

@interface PXZoomableInlineHeadersDataSourceManager : PXSectionedDataSourceManager <PXAssetsDataSourceManagerObserver> {

	PXAssetsDataSourceManager* _assetsDataSourceManager;
	PXAssetsDataSource* _previousAssetsDataSource;
	PXZoomableInlineHeaderSectionInfoMetaDataStore* _metaDataStore;
	BOOL _isPreparingMetadataInBackground;
	NSObject*<OS_dispatch_queue> _prepareQueue;
	PXZoomableInlineHeadersDataSource* _monthsDataSource;
	PXZoomableInlineHeadersDataSource* _yearsDataSource;
	PXUpdater* _updater;

}

@property (nonatomic,readonly) PXUpdater * updater;                                               //@synthesize updater=_updater - In the implementation block
@property (nonatomic,readonly) PXZoomableInlineHeadersDataSource * monthsDataSource;              //@synthesize monthsDataSource=_monthsDataSource - In the implementation block
@property (nonatomic,readonly) PXZoomableInlineHeadersDataSource * yearsDataSource;               //@synthesize yearsDataSource=_yearsDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsAssetsDataSourceManager:(id)arg1 ;
-(PXZoomableInlineHeadersDataSource *)yearsDataSource;
-(void)setNeedsUpdate;
-(id)_fetchResultForDataSource:(id)arg1 ;
-(void)_updateDataSource;
-(void)_prepareQueue_prepareInBackroundWithDataSource:(id)arg1 ;
-(PXZoomableInlineHeadersDataSource *)monthsDataSource;
-(void)didPerformChanges;
-(void)_invalidateDataSource;
-(id)_prepareQueue_createMetaDataStoreForAlbumWithDataSource:(id)arg1 ;
-(PXUpdater *)updater;
-(id)initWithAssetsDataSourceManager:(id)arg1 ;
-(void)_didFinishBackgroundPreparationWithResult:(id)arg1 forDataSource:(id)arg2 ;
-(id)dataSourceForLevel:(unsigned long long)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)_prepareInBackgroundWithDataSource:(id)arg1 ;
@end

