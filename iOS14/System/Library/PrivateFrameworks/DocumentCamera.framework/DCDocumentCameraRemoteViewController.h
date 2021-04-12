/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <DocumentCamera/DocumentCamera-Structs.h>
#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/DCDocumentCameraRemoteViewController.h>

@protocol DCDocumentCameraRemoteViewController
@required
-(void)didCancel:(id)arg1;
-(void)dismiss;
-(void)viewServicePreferredSizeDidChange:(CGSize)arg1;
-(void)viewControllerWasDismissed;
-(void)didFinishWithDocumentInfoCollection:(id)arg1;

@end


@protocol DCDocumentCameraPublicViewController;
@class UIViewController;

@interface DCDocumentCameraRemoteViewController : _UIRemoteViewController <DCDocumentCameraRemoteViewController> {

	UIViewController*<DCDocumentCameraPublicViewController> _publicViewController;

}

@property (assign,nonatomic,__weak) UIViewController*<DCDocumentCameraPublicViewController> publicViewController;                                     //@synthesize publicViewController=_publicViewController - In the implementation block
@property (getter=viewServiceViewController,nonatomic,readonly) id<DCDocumentCameraViewServiceViewController> viewServiceViewController; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)didCancel:(id)arg1 ;
-(void)dismiss;
-(id<DCDocumentCameraViewServiceViewController>)viewServiceViewController;
-(void)setPublicViewController:(UIViewController*<DCDocumentCameraPublicViewController>)arg1 ;
-(void)viewServicePreferredSizeDidChange:(CGSize)arg1 ;
-(void)viewControllerWasDismissed;
-(void)didFinishWithDocumentInfoCollection:(id)arg1 ;
-(UIViewController*<DCDocumentCameraPublicViewController>)publicViewController;
@end

