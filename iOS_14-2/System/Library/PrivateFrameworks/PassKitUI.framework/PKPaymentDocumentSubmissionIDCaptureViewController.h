/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <CoreRecognition/CRCameraReader.h>
#import <libobjc.A.dylib/CRCameraReaderDelegate.h>
#import <libobjc.A.dylib/PKPaymentDocumentSubmissionControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentSetupPresentationProtocol.h>

@class PKPaymentDocumentSubmissionController, UIView, PKCameraCaptureInstructionView, NSTimer, UIBarButtonItem, NSString;

@interface PKPaymentDocumentSubmissionIDCaptureViewController : CRCameraReader <CRCameraReaderDelegate, PKPaymentDocumentSubmissionControllerDelegate, PKPaymentSetupPresentationProtocol> {

	PKPaymentDocumentSubmissionController* _captureController;
	UIView* _cameraView;
	UIView* _cameraInstructionContainerView;
	PKCameraCaptureInstructionView* _cameraInstructionView;
	BOOL _reachedTimeout;
	NSTimer* _timerTryAgain;
	UIBarButtonItem* _buttonCancel;
	long long _context;
	unsigned long long _featureIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)updateUIWithState:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)onPresentationRemoveViewControllersAfterMarker;
-(void)captureController:(id)arg1 showLoading:(BOOL)arg2 ;
-(void)captureController:(id)arg1 didChangeStateTo:(long long)arg2 ;
-(id)initWithController:(id)arg1 context:(long long)arg2 featureIdentifier:(unsigned long long)arg3 ;
-(void)viewDidLoad;
-(void)loadView;
-(void)cameraReaderDidCancel:(id)arg1 ;
-(void)cameraReaderDidEnd:(id)arg1 ;
-(void)cameraReader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2 ;
-(void)cancel;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
@end

