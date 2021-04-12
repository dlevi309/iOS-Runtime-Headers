/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
*/

#import <ImageCaptureCore/ImageCaptureCore-Structs.h>
#import <libobjc.A.dylib/ICDeviceManagerProtocol.h>

@class NSXPCConnection, NSMutableArray, NSDictionary, NSMutableDictionary, NSOperationQueue, NSString;

@interface ICDeviceManager : NSObject <ICDeviceManagerProtocol> {

	NSXPCConnection* _managerConnection;
	NSMutableArray* _deviceHandles;
	os_unfair_lock_s _deviceHandlesLock;
	NSDictionary* _deviceMatchingInfo;
	NSMutableDictionary* _devices;
	NSOperationQueue* _deviceOperationQueue;
	os_unfair_lock_s _deviceOperationQueueLock;
	BOOL _deviceOperationQueueSuspended;
	BOOL _managerIsRunning;

}

@property (retain) NSOperationQueue * deviceOperations;                        //@synthesize deviceOperationQueue=_deviceOperationQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * managerConnection;              //@synthesize managerConnection=_managerConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)postNotification:(id)arg1 ;
-(BOOL)openRemoteDeviceManager;
-(void)getDeviceList;
-(void)closeDeviceHandle:(id)arg1 ;
-(void)stopRunning;
-(void)startRunning;
-(id)remoteManager;
-(void)addSelectorToInterface:(id)arg1 selectorString:(id)arg2 origin:(BOOL)arg3 ;
-(void)startDeviceWithHandle:(id)arg1 ;
-(void)notifyAddedDevice:(id)arg1 ;
-(void)openDeviceHandle:(id)arg1 ;
-(void)addInteractiveOperation:(id)arg1 ;
-(id)deviceManagerConnection;
-(void)notifyRemovedDevice:(id)arg1 ;
-(void)setManagerConnection:(NSXPCConnection *)arg1 ;
-(void)restartRunning;
-(void)resumeOperations;
-(void)openDeviceImp:(id)arg1 ;
-(void)closeDeviceImp:(id)arg1 ;
-(void)getFileThumbnailImp:(id)arg1 ;
-(void)getFileMetadataImp:(id)arg1 ;
-(void)getFileDataImp:(id)arg1 ;
-(void)openSessionImp:(id)arg1 ;
-(void)closeSessionImp:(id)arg1 ;
-(void)syncClockImp:(id)arg1 ;
-(void)addInitiatedOperation:(id)arg1 ;
-(void)deleteFileImp:(id)arg1 ;
-(void)extracted:(id)arg1 ;
-(void)downloadFileImp:(id)arg1 ;
-(void)sendDevicePTPCommandImp:(id)arg1 ;
-(void)registerDevice:(id)arg1 forImageCaptureEventNotificationsImp:(id)arg2 ;
-(void)unregisterDevice:(id)arg1 forImageCaptureEventNotificationsImp:(id)arg2 ;
-(void)ejectImp:(id)arg1 ;
-(long long)openDevice:(id)arg1 contextInfo:(void*)arg2 ;
-(long long)closeDevice:(id)arg1 contextInfo:(void*)arg2 ;
-(long long)openSession:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(long long)closeSession:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(long long)getFileThumbnail:(id)arg1 fromDevice:(id)arg2 withOptions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(long long)getFileMetadata:(id)arg1 fromDevice:(id)arg2 withOptions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(long long)getFileData:(id)arg1 fromDevice:(id)arg2 withOptions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(long long)syncClock:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)deleteFile:(id)arg1 fromDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(long long)downloadFile:(id)arg1 fromDevice:(id)arg2 withOptions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(long long)sendDevice:(id)arg1 ptpCommand:(id)arg2 andPayload:(id)arg3 completion:(/*^block*/id)arg4 ;
-(long long)registerDevice:(id)arg1 forImageCaptureEventNotifications:(id)arg2 ;
-(long long)unregisterDevice:(id)arg1 forImageCaptureEventNotifications:(id)arg2 ;
-(long long)eject:(id)arg1 ;
-(void)enumerateContent;
-(id)deviceForConnection:(id)arg1 ;
-(id)deviceForUUID:(id)arg1 ;
-(void)postCommandCompletionNotification:(id)arg1 ;
-(void)suspendOperations;
-(NSOperationQueue *)deviceOperations;
-(void)setDeviceOperations:(NSOperationQueue *)arg1 ;
-(NSXPCConnection *)managerConnection;
@end

