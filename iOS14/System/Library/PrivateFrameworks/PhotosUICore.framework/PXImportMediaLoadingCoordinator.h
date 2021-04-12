/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXImportAssetsDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXImportMediaProviderNotificationsReceiver.h>

@protocol OS_dispatch_queue;
@class NSObject, PXImportController, PXImportAssetsDataSourceManager, NSMutableArray, PXImportAssetsDataSource, NSString;

@interface PXImportMediaLoadingCoordinator : PXObservable <PXImportAssetsDataSourceManagerObserver, PXImportMediaProviderNotificationsReceiver> {

	NSObject*<OS_dispatch_queue> _modelQueue;
	NSObject*<OS_dispatch_queue> _workerQueue;
	BOOL _paused;
	PXImportController* _importController;
	PXImportAssetsDataSourceManager* _dataSourceManager;
	NSMutableArray* _thumbnailWorkItemUuids;
	PXImportAssetsDataSource* _dataSource;
	unsigned long long _completedDataSourceIdentifier;

}

@property (nonatomic,__weak,readonly) PXImportController * importController;                     //@synthesize importController=_importController - In the implementation block
@property (nonatomic,readonly) PXImportAssetsDataSourceManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,retain) NSMutableArray * thumbnailWorkItemUuids;                            //@synthesize thumbnailWorkItemUuids=_thumbnailWorkItemUuids - In the implementation block
@property (nonatomic,retain) PXImportAssetsDataSource * dataSource;                              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) unsigned long long completedDataSourceIdentifier;                   //@synthesize completedDataSourceIdentifier=_completedDataSourceIdentifier - In the implementation block
@property (assign,setter=setPaused:,nonatomic) BOOL paused;                                      //@synthesize paused=_paused - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)shutdown;
-(id)initWithImportController:(id)arg1 ;
-(id)dequeueNextThumbnailWorkItem;
-(void)_processItemIfPossible;
-(NSMutableArray *)thumbnailWorkItemUuids;
-(void)setThumbnailWorkItemUuids:(NSMutableArray *)arg1 ;
-(unsigned long long)completedDataSourceIdentifier;
-(void)setCompletedDataSourceIdentifier:(unsigned long long)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(PXImportAssetsDataSource *)dataSource;
-(void)setDataSource:(PXImportAssetsDataSource *)arg1 ;
-(PXImportAssetsDataSourceManager *)dataSourceManager;
-(PXImportController *)importController;
-(BOOL)paused;
-(void)handleNewDataSource:(id)arg1 ;
-(void)mediaProviderThumbnailingBecameIdle;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

