/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CRCameraReaderDelegate.h>

@class CRCameraReader, SUCreditCardReaderInfoView, SUCreditCardReaderOutput, NSString;

@interface SUCreditCardReaderViewController : UIViewController <CRCameraReaderDelegate> {

	CRCameraReader* cameraController;
	SUCreditCardReaderInfoView* captureInfoView;
	SUCreditCardReaderOutput* pendingOutput;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) id completionBlock;                      //@synthesize completionBlock=_completionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)cameraSupported;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_cancelButtonPressed;
-(void)didReceiveMemoryWarning;
-(void)cameraReaderDidCancel:(id)arg1 ;
-(void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2 ;
-(void)cameraReaderDidEnd:(id)arg1 ;
-(void)cameraReader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_returnCameraOutput:(id)arg1 error:(id)arg2 ;
@end

