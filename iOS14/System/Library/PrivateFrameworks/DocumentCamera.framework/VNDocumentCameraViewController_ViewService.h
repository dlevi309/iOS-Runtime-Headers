/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <DocumentCamera/DocumentCamera-Structs.h>
#import <DocumentCamera/VNDocumentCameraViewController.h>
#import <libobjc.A.dylib/BKSAccelerometerDelegate.h>
#import <libobjc.A.dylib/DCDocumentCameraPublicViewController.h>

@class DCDocumentCameraViewServiceSession, BKSAccelerometer, DCDocumentCameraRemoteViewController, NSString;

@interface VNDocumentCameraViewController_ViewService : VNDocumentCameraViewController <BKSAccelerometerDelegate, DCDocumentCameraPublicViewController> {

	DCDocumentCameraViewServiceSession* _viewServiceSession;
	BKSAccelerometer* _accelerometer;

}

@property (getter=viewServiceViewController,nonatomic,readonly) id<DCDocumentCameraViewServiceViewController> viewServiceViewController; 
@property (getter=remoteViewController,nonatomic,readonly) DCDocumentCameraRemoteViewController * remoteViewController; 
@property (nonatomic,retain) DCDocumentCameraViewServiceSession * viewServiceSession;                                                                 //@synthesize viewServiceSession=_viewServiceSession - In the implementation block
@property (nonatomic,retain) BKSAccelerometer * accelerometer;                                                                                        //@synthesize accelerometer=_accelerometer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(DCDocumentCameraRemoteViewController *)remoteViewController;
-(id)init;
-(void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6 ;
-(void)accelerometer:(id)arg1 didChangeDeviceOrientation:(long long)arg2 ;
-(void)viewDidLoad;
-(void)didCancel:(id)arg1 ;
-(BKSAccelerometer *)accelerometer;
-(void)setAccelerometer:(BKSAccelerometer *)arg1 ;
-(void)dealloc;
-(void)dismiss;
-(id<DCDocumentCameraViewServiceViewController>)viewServiceViewController;
-(void)setViewServiceSession:(DCDocumentCameraViewServiceSession *)arg1 ;
-(void)viewServicePreferredSizeDidChange:(CGSize)arg1 ;
-(void)didFinishWithDocumentInfoCollection:(id)arg1 ;
-(id)castedChildViewController;
-(DCDocumentCameraViewServiceSession *)viewServiceSession;
@end

