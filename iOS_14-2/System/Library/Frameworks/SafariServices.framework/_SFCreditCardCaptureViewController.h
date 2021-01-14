/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)init;
-(void)_cancel:(id)arg1 ;
-(void)cameraReaderDidCancel:(id)arg1 ;
-(void)cameraReaderDidEnd:(id)arg1 ;
-(void)cameraReader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2 ;
@end

