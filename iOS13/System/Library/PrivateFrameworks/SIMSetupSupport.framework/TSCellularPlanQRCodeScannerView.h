/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/AVCaptureMetadataOutputObjectsDelegate.h>

@protocol OS_dispatch_queue, AVCaptureMetadataOutputObjectsDelegate;
@class AVCaptureSession, AVCaptureDeviceInput, NSObject, AVCaptureVideoPreviewLayer, NSString;

@interface TSCellularPlanQRCodeScannerView : UIView <AVCaptureMetadataOutputObjectsDelegate> {

	AVCaptureSession* _captureSession;
	AVCaptureDeviceInput* _deviceInput;
	NSObject*<OS_dispatch_queue> _metadataQueue;
	AVCaptureVideoPreviewLayer* _previewLayer;
	BOOL _canUseCamera;
	id<AVCaptureMetadataOutputObjectsDelegate> _delegate;

}

@property (nonatomic,readonly) AVCaptureVideoPreviewLayer * previewLayer;                      //@synthesize previewLayer=_previewLayer - In the implementation block
@property (nonatomic,readonly) BOOL canUseCamera;                                              //@synthesize canUseCamera=_canUseCamera - In the implementation block
@property (assign,nonatomic) id<AVCaptureMetadataOutputObjectsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<AVCaptureMetadataOutputObjectsDelegate>)delegate;
-(void)setDelegate:(id<AVCaptureMetadataOutputObjectsDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(void)stopRunning;
-(void)startRunning;
-(AVCaptureVideoPreviewLayer *)previewLayer;
-(void)setupCameraSession;
-(void)_changeCameraConfiguration;
-(BOOL)canUseCamera;
-(void)_handleRuntimeError:(id)arg1 ;
@end

