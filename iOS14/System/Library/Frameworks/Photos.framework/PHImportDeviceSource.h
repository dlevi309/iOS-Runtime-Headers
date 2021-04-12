/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHImportSource.h>
#import <libobjc.A.dylib/ICCameraDeviceDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSMapTable, NSObject, ICCameraDeviceRemovedItemsCoalescer, NSMutableSet, NSMutableDictionary, NSProgress, NSArray, ICCameraDevice, NSString;

@interface PHImportDeviceSource : PHImportSource <ICCameraDeviceDelegate> {

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
@property (retain) ICCameraDevice * camera;                                                       //@synthesize camera=_camera - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDevice:(id)arg1 ;
-(ICCameraDevice *)camera;
-(BOOL)isAvailable;
-(id)uuid;
-(void)eject;
-(BOOL)isAppleDevice;
-(CGImageRef)icon;
-(id)path;
-(id)name;
-(void)beginWork;
-(id)volumePath;
-(id)productKind;
-(void)setCamera:(ICCameraDevice *)arg1 ;
-(id)assetsByProcessingItem:(id)arg1 ;
-(BOOL)isDeleting;
-(NSArray *)avchdAssets;
-(void)cameraDevice:(id)arg1 didAddItems:(id)arg2 ;
-(void)cameraDevice:(id)arg1 didRemoveItems:(id)arg2 ;
-(void)cameraDevice:(id)arg1 didReceiveThumbnail:(CGImageRef)arg2 forItem:(id)arg3 error:(id)arg4 ;
-(void)cameraDevice:(id)arg1 didReceiveMetadata:(id)arg2 forItem:(id)arg3 error:(id)arg4 ;
-(void)cameraDevice:(id)arg1 didRenameItems:(id)arg2 ;
-(void)cameraDeviceDidChangeCapability:(id)arg1 ;
-(void)cameraDevice:(id)arg1 didReceivePTPEvent:(id)arg2 ;
-(void)deviceDidBecomeReadyWithCompleteContentCatalog:(id)arg1 ;
-(void)cameraDeviceDidRemoveAccessRestriction:(id)arg1 ;
-(void)cameraDeviceDidEnableAccessRestriction:(id)arg1 ;
-(void)deviceDidBecomeReady:(id)arg1 ;
-(void)device:(id)arg1 didEncounterError:(id)arg2 ;
-(BOOL)canDeleteContent;
-(void)device:(id)arg1 didCloseSessionWithError:(id)arg2 ;
-(void)device:(id)arg1 didOpenSessionWithError:(id)arg2 ;
-(void)fetchThumbnailDataUsingRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)sendNextThumbnailRequest;
-(void)sendNextMetadataRequest;
-(void)fetchMetadataUsingRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)fetchMetadataForRequest:(id)arg1 importAsset:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)cameraDevice:(id)arg1 setAccessState:(unsigned char)arg2 ;
-(id)importAssetForCameraFile:(id)arg1 create:(BOOL)arg2 ;
-(void)removeAssetForCameraFile:(id)arg1 ;
-(id)deleteImportAssets:(id)arg1 isConfirmed:(BOOL)arg2 atEnd:(/*^block*/id)arg3 ;
-(id)cameraFilesForAssets:(id)arg1 ;
-(BOOL)canAutolaunch;
-(BOOL)isConnectedDevice;
-(void)deviceFinishedEnumeratingItems:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)deleteEjectQueue;
-(void)setDeleteEjectQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(ICCameraDeviceRemovedItemsCoalescer *)removalCoalescer;
-(BOOL)isEjecting;
-(void)setRemovalCoalescer:(ICCameraDeviceRemovedItemsCoalescer *)arg1 ;
-(NSMutableSet *)removedCameraFiles;
-(void)setRemovedCameraFiles:(NSMutableSet *)arg1 ;
-(void)setIsEjecting:(BOOL)arg1 ;
-(BOOL)ejectAfterDelete;
-(void)setEjectAfterDelete:(BOOL)arg1 ;
-(NSMutableDictionary *)assetByCameraFile;
-(void)setAssetByCameraFile:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)assetByCameraFileAccess;
-(BOOL)canReference;
-(void)setAssetByCameraFileAccess:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSProgress *)deleteProgress;
-(void)setDeleteProgress:(NSProgress *)arg1 ;
-(void)setAvchdAssets:(NSArray *)arg1 ;
-(void)didRemoveDevice:(id)arg1 ;
@end

