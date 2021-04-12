/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/CRCameraReaderDelegate.h>

@class CRCameraReader, WBSCreditCardData, NSString;

@interface _SFCreditCardCaptureViewController : UINavigationController <CRCameraReaderDelegate> {

	CRCameraReader* _reader;
	WBSCreditCardData* _receivedCardData;

}

@property (assign,nonatomic,__weak) id<_SFCreditCardCaptureViewControllerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canCapture;
-(id)init;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)cameraReaderDidCancel:(id)arg1 ;
-(void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2 ;
-(void)cameraReaderDidEnd:(id)arg1 ;
-(void)cameraReader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_cancel:(id)arg1 ;
@end

