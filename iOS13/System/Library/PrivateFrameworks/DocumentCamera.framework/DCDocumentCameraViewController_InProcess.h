/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <DocumentCamera/DCDocumentCameraViewController.h>
#import <libobjc.A.dylib/ICDocCamViewControllerDelegate.h>

@class ICDocCamViewController, NSString;

@interface DCDocumentCameraViewController_InProcess : DCDocumentCameraViewController <ICDocCamViewControllerDelegate> {

	ICDocCamViewController* _viewController;

}

@property (nonatomic,retain) ICDocCamViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDelegate:(id)arg1 ;
-(void)setViewController:(ICDocCamViewController *)arg1 ;
-(ICDocCamViewController *)viewController;
-(long long)_preferredModalPresentationStyle;
-(void)_autoDismiss;
-(void)didReceiveMemoryWarning;
-(BOOL)documentCameraController:(id)arg1 canAddImages:(unsigned long long)arg2 ;
-(void)documentCameraControllerDidCancel:(id)arg1 ;
-(id)documentCameraControllerCreateDataCryptorIfNecessary;
-(id)scanDataDelegateWithIdentifier:(id)arg1 ;
-(void)documentCameraController:(id)arg1 didFinishWithImage:(id)arg2 ;
-(void)documentCameraController:(id)arg1 didFinishWithDocInfoCollection:(id)arg2 imageCache:(id)arg3 warnUser:(BOOL)arg4 ;
@end

