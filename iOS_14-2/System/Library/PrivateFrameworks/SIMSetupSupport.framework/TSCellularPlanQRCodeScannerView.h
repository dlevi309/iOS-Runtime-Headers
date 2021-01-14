/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<AVCaptureMetadataOutputObjectsDelegate>)delegate;
-(void)startRunning;
-(void)setDelegate:(id<AVCaptureMetadataOutputObjectsDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)stopRunning;
-(id)initWithDelegate:(id)arg1 ;
-(void)dealloc;
-(AVCaptureVideoPreviewLayer *)previewLayer;
-(void)_changeCameraConfiguration;
-(void)setupCameraSession;
-(BOOL)canUseCamera;
-(void)_handleRuntimeError:(id)arg1 ;
@end

