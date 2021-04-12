/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <libobjc.A.dylib/PXImportAssetsDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXImportMediaProviderNotificationsReceiver.h>
#import <libobjc.A.dylib/PUImportActionCoordinatorDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSMutableDictionary, PXImportAssetsDataSourceManager, PXImportController, PUImportPPTImportSource, PXImportMediaProvider, PUImportActionCoordinator, NSObject, PUTabbedLibraryViewController, NSDictionary, NSString;

@interface PUImportPPTDriver : NSObject <PXImportAssetsDataSourceManagerObserver, PXImportMediaProviderNotificationsReceiver, PUImportActionCoordinatorDelegate> {

	/*^block*/id _insertDatasourceReply;
	/*^block*/id _thumbnailTestReply;
	/*^block*/id _importToLibraryTestReply;
	NSMutableDictionary* _extraResults;
	PXImportAssetsDataSourceManager* _dataSourceManager;
	PXImportController* _importController;
	PUImportPPTImportSource* _currentImportSource;
	PXImportMediaProvider* _mediaProvider;
	PUImportActionCoordinator* _actionCoordinator;
	NSObject*<OS_dispatch_semaphore> _importSemaphore;
	BOOL _importComplete;
	long long _iteration;
	double _startTime;
	double _endTime;
	BOOL _loadingContentStarted;
	BOOL _hasSeenAbsolulteLastThumbnailMarker;
	PUTabbedLibraryViewController* _tabbedLibraryViewController;
	NSDictionary* _testOptions;
	NSDictionary* _options;

}

@property (retain) NSDictionary * options;                                                   //@synthesize options=_options - In the implementation block
@property (__weak) PUTabbedLibraryViewController * tabbedLibraryViewController;              //@synthesize tabbedLibraryViewController=_tabbedLibraryViewController - In the implementation block
@property (copy) NSDictionary * testOptions;                                                 //@synthesize testOptions=_testOptions - In the implementation block
@property (nonatomic,readonly) NSDictionary * additionalResults; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)mediaProvider;
-(id)init;
-(id)importViewController;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)testOptions;
-(id)importController;
-(void)actionCoordinatorDidBeginDelete:(id)arg1 ;
-(void)actionCoordinatorDidEndDelete:(id)arg1 ;
-(void)actionCoordinatorWillBeginDelete:(id)arg1 ;
-(void)actionCoordinatorDidBeginImport:(id)arg1 ;
-(void)actionCoordinatorDidCancelImport:(id)arg1 ;
-(void)actionCoordinator:(id)arg1 didCompleteWithImportSession:(id)arg2 results:(id)arg3 ;
-(id)importDestinationForActionCoordinator:(id)arg1 ;
-(void)actionCoordinatorWillBeginImport:(id)arg1 ;
-(void)ppt_mediaProviderDidProcessAsset:(id)arg1 ;
-(void)setTestOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)additionalResults;
-(void)ppt_insertImportDataSourceWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)ppt_removeImportDataSourceWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_removeCurrentImportSourceIfNecessary;
-(id)modelBatchesForOptions:(id)arg1 ;
-(void)ppt_performDeleteWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)ppt_performThumbnailWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)ppt_performImportToLibraryWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateLoadingContentState;
-(double)_contentLoadingCheckInterval;
-(void)signalInsertDatasourceReply:(BOOL)arg1 ;
-(void)signalThumbnailTestReply:(BOOL)arg1 ;
-(void)signalImportToLibraryTestReply:(BOOL)arg1 ;
-(PUTabbedLibraryViewController *)tabbedLibraryViewController;
-(void)setTabbedLibraryViewController:(PUTabbedLibraryViewController *)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

