/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCameraViewfinder.h>
#import <libobjc.A.dylib/FigCameraViewfinderRemoteObjectCallbacks.h>

@protocol OS_dispatch_queue, FigCameraViewfinderRemoteObject;
@class NSMapTable, FigStateMachine, FigNSXPCConnection, NSObject, NSString;

@interface FigCameraViewfinderRemote : FigCameraViewfinder <FigCameraViewfinderRemoteObjectCallbacks> {

	NSMapTable* _weakSessionTable;
	FigStateMachine* _stateMachine;
	FigNSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _connectionManagementQueue;
	id<FigCameraViewfinderRemoteObject> _remoteViewfinder;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)cameraViewfinder;
+(id)remoteObjectCallbacksInterface;
-(void)_bringupXPCConnectionAndStartRemoteViewfinderWithOptions:(id)arg1 ;
-(id)init;
-(void)startWithOptions:(id)arg1 ;
-(void)stop;
-(void)viewfinderSession:(long long)arg1 didCapturePhotoWithStatus:(int)arg2 thumbnailData:(id)arg3 timestamp:(SCD_Struct_BW8)arg4 ;
-(void)_handleServerDeathWithOptions:(id)arg1 reconnect:(BOOL)arg2 ;
-(void)_teardownXPCConnectionAndRemoteViewfinder;
-(void)viewfinderSession:(long long)arg1 previewStreamDidCloseWithStatus:(int)arg2 ;
-(void)viewfinderSessionDidBegin:(id)arg1 withIdentifier:(long long)arg2 ;
-(void)_setupStateMachine;
-(void)viewfinderSessionPreviewStreamDidOpen:(long long)arg1 ;
-(void)viewfinderSessionDidEnd;
-(void)dealloc;
@end

