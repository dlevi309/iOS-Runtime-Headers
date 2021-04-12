/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionCamera.framework/CompanionCamera
*/

#import <libobjc.A.dylib/CCCameraConnectionProtocol.h>

@class CCCameraConnection;

@interface CCCameraConnectionInternal : NSObject <CCCameraConnectionProtocol> {

	CCCameraConnection* _parent;

}

@property (assign,nonatomic,__weak) CCCameraConnection * parent;              //@synthesize parent=_parent - In the implementation block
-(CCCameraConnection *)parent;
-(void)setParent:(CCCameraConnection *)arg1 ;
-(oneway void)xpc_ensureSwitchedToOneOfSupportedCaptureModes:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)takePhotoWithCountdown:(unsigned long long)arg1 ;
-(oneway void)xpc_beginBurstCaptureWithReply:(/*^block*/id)arg1 ;
-(oneway void)xpc_endBurstCaptureWithReply:(/*^block*/id)arg1 ;
-(oneway void)xpc_setCaptureMode:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)xpc_startCaptureWithMode:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)xpc_stopCaptureWithReply:(/*^block*/id)arg1 ;
-(oneway void)xpc_setPreviewEndpoint:(id)arg1 ;
-(oneway void)xpc_setFocusPoint:(id)arg1 ;
-(oneway void)xpc_fetchCurrentStateIncludingSupportedCaptureModes:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)xpc_cancelCountdown;
-(oneway void)xpc_setZoom:(float)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)xpc_setFlashMode:(long long)arg1 ;
-(oneway void)xpc_setHDRMode:(long long)arg1 ;
-(oneway void)xpc_setIrisMode:(long long)arg1 ;
-(oneway void)xpc_toggleCameraDevice;
@end

