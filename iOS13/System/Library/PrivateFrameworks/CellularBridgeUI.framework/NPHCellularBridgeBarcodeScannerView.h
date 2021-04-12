/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CellularBridgeUI.framework/CellularBridgeUI
*/

#import <CellularBridgeUI/CellularBridgeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/AVCaptureMetadataOutputObjectsDelegate.h>

@protocol OS_dispatch_queue, NPHCellularBridgeBarcodeScannerCaptureDelegate;
@class AVCaptureSession, AVCaptureDeviceInput, NSObject, AVCaptureVideoPreviewLayer, NSString;

@interface NPHCellularBridgeBarcodeScannerView : UIView <AVCaptureMetadataOutputObjectsDelegate> {

	AVCaptureSession* _captureSession;
	AVCaptureDeviceInput* _deviceInput;
	NSObject*<OS_dispatch_queue> _metadataQueue;
	AVCaptureVideoPreviewLayer* _previewLayer;
	BOOL _canUseCamera;
	id<NPHCellularBridgeBarcodeScannerCaptureDelegate> _delegate;

}

@property (nonatomic,readonly) AVCaptureVideoPreviewLayer * previewLayer;                              //@synthesize previewLayer=_previewLayer - In the implementation block
@property (nonatomic,readonly) BOOL canUseCamera;                                                      //@synthesize canUseCamera=_canUseCamera - In the implementation block
@property (nonatomic,readonly) BOOL isRunning; 
@property (assign,nonatomic) id<NPHCellularBridgeBarcodeScannerCaptureDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<NPHCellularBridgeBarcodeScannerCaptureDelegate>)delegate;
-(void)setDelegate:(id<NPHCellularBridgeBarcodeScannerCaptureDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isRunning;
-(id)initWithDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(void)stopRunning;
-(void)startRunning;
-(AVCaptureVideoPreviewLayer *)previewLayer;
-(void)setupCameraSession;
-(void)handleRuntimeError:(id)arg1 ;
-(void)_changeCameraConfiguration;
-(void)autoFocusAtPoint:(CGPoint)arg1 ;
-(void)autoExposeAtPoint:(CGPoint)arg1 ;
-(BOOL)canUseCamera;
@end

