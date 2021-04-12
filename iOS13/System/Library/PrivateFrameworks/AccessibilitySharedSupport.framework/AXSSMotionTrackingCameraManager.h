/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/


@protocol AXSSMotionTrackingCameraManagerDelegate;
@class NSMutableArray, AVCaptureDeviceDiscoverySession, NSArray, AVCaptureDevice;

@interface AXSSMotionTrackingCameraManager : NSObject {

	BOOL __monitoring;
	id<AXSSMotionTrackingCameraManagerDelegate> _delegate;
	NSMutableArray* __compatibleCaptureDevices;
	NSMutableArray* __allCaptureDevices;
	AVCaptureDeviceDiscoverySession* __captureDeviceDiscoverySession;

}

@property (assign,nonatomic) BOOL _monitoring;                                                              //@synthesize _monitoring=__monitoring - In the implementation block
@property (nonatomic,retain) NSMutableArray * _compatibleCaptureDevices;                                    //@synthesize _compatibleCaptureDevices=__compatibleCaptureDevices - In the implementation block
@property (nonatomic,retain) NSMutableArray * _allCaptureDevices;                                           //@synthesize _allCaptureDevices=__allCaptureDevices - In the implementation block
@property (nonatomic,retain) AVCaptureDeviceDiscoverySession * _captureDeviceDiscoverySession;              //@synthesize _captureDeviceDiscoverySession=__captureDeviceDiscoverySession - In the implementation block
@property (nonatomic,copy,readonly) NSArray * compatibleCaptureDevices; 
@property (nonatomic,copy,readonly) NSArray * allCaptureDevices; 
@property (nonatomic,readonly) AVCaptureDevice * defaultCaptureDevice; 
@property (assign,nonatomic,__weak) id<AXSSMotionTrackingCameraManagerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
+(id)_sortedCaptureDevicesFromDevices:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id<AXSSMotionTrackingCameraManagerDelegate>)delegate;
-(void)setDelegate:(id<AXSSMotionTrackingCameraManagerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)startMonitoring;
-(void)stopMonitoring;
-(BOOL)_monitoring;
-(void)set_monitoring:(BOOL)arg1 ;
-(NSArray *)allCaptureDevices;
-(NSArray *)compatibleCaptureDevices;
-(AVCaptureDevice *)defaultCaptureDevice;
-(AVCaptureDeviceDiscoverySession *)_captureDeviceDiscoverySession;
-(void)_captureDeviceConnected:(id)arg1 ;
-(void)_captureDeviceDisconnected:(id)arg1 ;
-(void)_startDiscoverySession;
-(void)_captureDeviceUpdated;
-(void)_stopDiscoverySession;
-(NSMutableArray *)_compatibleCaptureDevices;
-(NSMutableArray *)_allCaptureDevices;
-(void)_allCaptureDevicesChanged:(id)arg1 ;
-(void)set_captureDeviceDiscoverySession:(AVCaptureDeviceDiscoverySession *)arg1 ;
-(void)_resetDiscoverySession;
-(void)set_compatibleCaptureDevices:(NSMutableArray *)arg1 ;
-(void)set_allCaptureDevices:(NSMutableArray *)arg1 ;
@end

