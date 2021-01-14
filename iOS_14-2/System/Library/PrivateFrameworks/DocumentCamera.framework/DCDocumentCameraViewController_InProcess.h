/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setViewController:(ICDocCamViewController *)arg1 ;
-(void)didReceiveMemoryWarning;
-(ICDocCamViewController *)viewController;
-(id)initWithDelegate:(id)arg1 ;
-(void)_autoDismiss;
-(long long)_preferredModalPresentationStyle;
-(BOOL)documentCameraController:(id)arg1 canAddImages:(unsigned long long)arg2 ;
-(void)documentCameraControllerDidCancel:(id)arg1 ;
-(id)documentCameraControllerCreateDataCryptorIfNecessary;
-(id)scanDataDelegateWithIdentifier:(id)arg1 ;
-(void)documentCameraController:(id)arg1 didFinishWithImage:(id)arg2 ;
-(void)documentCameraController:(id)arg1 didFinishWithDocInfoCollection:(id)arg2 imageCache:(id)arg3 warnUser:(BOOL)arg4 ;
@end

