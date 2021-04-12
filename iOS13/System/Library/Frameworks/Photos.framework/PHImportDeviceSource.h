/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHImportSource.h>
#import <libobjc.A.dylib/ICCameraDeviceDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSDate, NSObject, NSMutableArray, NSMapTable, ICCameraDeviceRemovedItemsCoalescer, NSMutableSet, NSMutableDictionary, NSProgress, NSArray, ICCameraDevice, NSString;

@interface PHImportDeviceSource : PHImportSource <ICCameraDeviceDelegate> {

	double _idleTimeout;
	NSDate* _timeoutStart;
	NSObject*<OS_dispatch_source> _idleTimer;
	NSObject*<OS_dispatch_queue> _timeoutSerializer;
	NSMutableArray* _assetThumbnailRequests;
	BOOL _waitingForAssetThumbnailRequest;
	NSMutableArray* _assetMetadataRequests;
	BOOL _waitingForAssetMetadataRequest;
	NSMutableArray* _assetThumbnailHighPriorityRequests;
	NSMapTable* _assetDataRequestsByCameraItem;
	NSObject*<OS_dispatch_queue> _assetDataRequestQueue;
	BOOL _isEjecting;
	BOOL _ejectAfterDelete;
	NSObject*<OS_dispatch_queue> _deleteEjectQueue;
	ICCameraDeviceRemovedItemsCoalescer* _removalCoalescer;
	NSMutableSet* _removedCameraFiles;
	NSMutableDictionary* _assetByCameraFile;
	NSObject*<OS_dispatch_queue> _assetByCameraFileAccess;
	NSProgress* _deleteProgress;
	NSArray* _avchdAssets;
	NSObject*<OS_dispatch_queue> _serialHackQueue;
	NSMutableArray* _deleteJobs;
	ICCameraDevice* _camera;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> deleteEjectQueue;                       //@synthesize deleteEjectQueue=_deleteEjectQueue - In the implementation block
@property (nonatomic,retain) ICCameraDeviceRemovedItemsCoalescer * removalCoalescer;              //@synthesize removalCoalescer=_removalCoalescer - In the implementation block
@property (nonatomic,retain) NSMutableSet * removedCameraFiles;                                   //@synthesize removedCameraFiles=_removedCameraFiles - In the implementation block
@property (assign,nonatomic) BOOL isEjecting;                                                     //@synthesize isEjecting=_isEjecting - In the implementation block
@property (assign,nonatomic) BOOL ejectAfterDelete;                                               //@synthesize ejectAfterDelete=_ejectAfterDelete - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetByCameraFile;                             //@synthesize assetByCameraFile=_assetByCameraFile - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> assetByCameraFileAccess;                //@synthesize assetByCameraFileAccess=_assetByCameraFileAccess - In the implementation block
@property (nonatomic,retain) NSProgress * deleteProgress;                                         //@synthesize deleteProgress=_deleteProgress - In the implementation block
@property (nonatomic,retain) NSArray * avchdAssets;                                               //@synthesize avchdAssets=_avchdAssets - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialHackQueue;                        //@synthesize serialHackQueue=_serialHackQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * deleteJobs;                                         //@synthesize deleteJobs=_deleteJobs - In the implementation block
@property (retain) ICCameraDevice * camera;                                                       //@synthesize camera=_camera - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)name;
-(id)path;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)uuid;
-(id)initWithDevice:(id)arg1 ;
-(BOOL)isAvailable;
-(CGImageRef)icon;
-(void)setCamera:(ICCameraDevice *)arg1 ;
-(ICCameraDevice *)camera;
-(BOOL)isAppleDevice;
-(void)cameraDevice:(id)arg1 didAddItems:(id)arg2 ;
-(void)cameraDevice:(id)arg1 didRemoveItems:(id)arg2 ;
-(void)deviceDidBecomeReady:(id)arg1 ;
-(void)device:(id)arg1 didOpenSessionWithError:(id)arg2 ;
-(void)device:(id)arg1 didCloseSessionWithError:(id)arg2 ;
-(id)volumePath;
-(id)productKind;
-(void)cameraDeviceDidChangeCapability:(id)arg1 ;
-(void)didRemoveDevice:(id)arg1 ;
-(BOOL)canReference;
-(void)beginWork;
-(id)assetsByProcessingItem:(id)arg1 ;
-(void)endWork;
-(void)dispatchAssetDataRequestAsync:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)cameraDevice:(id)arg1 didReceiveThumbnailForItem:(id)arg2 ;
-(void)cameraDevice:(id)arg1 didReceiveMetadataForItem:(id)arg2 ;
-(void)device:(id)arg1 didReceiveStatusInformation:(id)arg2 ;
-(void)device:(id)arg1 didEncounterError:(id)arg2 ;
-(void)setupDeviceTimeoutHandler;
-(BOOL)canUseCachedThumbnailForRequest:(id)arg1 ;
-(void)fetchDataUsingRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)sendNextRequestOfType:(unsigned char)arg1 ;
-(void)finishMetadataForRequest:(id)arg1 importAsset:(id)arg2 error:(id)arg3 atEnd:(/*^block*/id)arg4 ;
-(void)deviceTimeoutHandler;
-(id)importAssetForCameraFile:(id)arg1 create:(BOOL)arg2 ;
-(void)removeAssetForCameraFile:(id)arg1 ;
-(void)cancelAssetLoading;
-(id)deleteImportAssets:(id)arg1 isConfirmed:(BOOL)arg2 isCancelable:(BOOL)arg3 atEnd:(/*^block*/id)arg4 ;
-(id)cameraFilesForAssets:(id)arg1 ;
-(BOOL)canDeleteContent;
-(BOOL)canAutolaunch;
-(BOOL)isConnectedDevice;
-(void)eject;
-(void)deviceFinishedEnumeratingItems:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)deleteEjectQueue;
-(void)setDeleteEjectQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(ICCameraDeviceRemovedItemsCoalescer *)removalCoalescer;
-(void)setRemovalCoalescer:(ICCameraDeviceRemovedItemsCoalescer *)arg1 ;
-(NSMutableSet *)removedCameraFiles;
-(void)setRemovedCameraFiles:(NSMutableSet *)arg1 ;
-(BOOL)isEjecting;
-(void)setIsEjecting:(BOOL)arg1 ;
-(BOOL)ejectAfterDelete;
-(void)setEjectAfterDelete:(BOOL)arg1 ;
-(NSMutableDictionary *)assetByCameraFile;
-(void)setAssetByCameraFile:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)assetByCameraFileAccess;
-(void)setAssetByCameraFileAccess:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSProgress *)deleteProgress;
-(void)setDeleteProgress:(NSProgress *)arg1 ;
-(NSArray *)avchdAssets;
-(void)setAvchdAssets:(NSArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialHackQueue;
-(void)setSerialHackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableArray *)deleteJobs;
-(void)setDeleteJobs:(NSMutableArray *)arg1 ;
@end

