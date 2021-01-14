/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(void)_cancelButtonPressed;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)cameraReaderDidCancel:(id)arg1 ;
-(void)cameraReaderDidEnd:(id)arg1 ;
-(void)cameraReader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)_returnCameraOutput:(id)arg1 error:(id)arg2 ;
@end

