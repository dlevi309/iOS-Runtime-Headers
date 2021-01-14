/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/FigCameraViewfinderDelegate.h>
#import <libobjc.A.dylib/FigCameraViewfinderSessionDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSMutableArray, NSObject, NSString;

@interface FigCameraViewfinderServer : NSObject <NSXPCListenerDelegate, FigCameraViewfinderDelegate, FigCameraViewfinderSessionDelegate> {

	NSXPCListener* _serviceListener;
	NSMutableArray* _connections;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)start;
-(id)init;
-(id)_remoteViewfinderForLocalViewfinder:(id)arg1 ;
-(void)cameraViewfinderSession:(id)arg1 didCapturePhotoWithStatus:(int)arg2 thumbnailData:(id)arg3 timestamp:(SCD_Struct_BW8)arg4 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)cameraViewfinder:(id)arg1 viewfinderSessionDidEnd:(id)arg2 ;
-(void)cameraViewfinder:(id)arg1 viewfinderSessionDidBegin:(id)arg2 ;
-(void)cameraViewfinderSession:(id)arg1 previewStreamDidCloseWithStatus:(int)arg2 ;
-(void)cameraViewfinderSessionPreviewStreamDidOpen:(id)arg1 ;
-(void)dealloc;
@end

