/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCameraViewfinder.h>
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
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)startWithOptions:(id)arg1 ;
-(void)_setupStateMachine;
-(void)viewfinderSessionDidBegin:(id)arg1 withIdentifier:(long long)arg2 ;
-(void)viewfinderSessionDidEnd;
-(void)viewfinderSession:(long long)arg1 didCapturePhotoWithStatus:(int)arg2 thumbnailData:(id)arg3 timestamp:(SCD_Struct_BW2)arg4 ;
-(void)viewfinderSessionPreviewStreamDidOpen:(long long)arg1 ;
-(void)viewfinderSession:(long long)arg1 previewStreamDidCloseWithStatus:(int)arg2 ;
-(void)_bringupXPCConnectionAndStartRemoteViewfinderWithOptions:(id)arg1 ;
-(void)_teardownXPCConnectionAndRemoteViewfinder;
-(void)_handleServerDeathWithOptions:(id)arg1 reconnect:(BOOL)arg2 ;
@end

