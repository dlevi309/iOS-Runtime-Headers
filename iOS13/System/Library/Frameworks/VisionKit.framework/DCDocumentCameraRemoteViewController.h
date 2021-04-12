/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
*/

#import <VisionKit/VisionKit-Structs.h>
#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/DCDocumentCameraRemoteViewController.h>

@protocol DCDocumentCameraRemoteViewController
@required
-(void)dismiss;
-(void)didCancel:(id)arg1;
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
-(void)dismiss;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)didCancel:(id)arg1 ;
-(id<DCDocumentCameraViewServiceViewController>)viewServiceViewController;
-(void)setPublicViewController:(UIViewController*<DCDocumentCameraPublicViewController>)arg1 ;
-(void)viewServicePreferredSizeDidChange:(CGSize)arg1 ;
-(void)viewControllerWasDismissed;
-(void)didFinishWithDocumentInfoCollection:(id)arg1 ;
-(UIViewController*<DCDocumentCameraPublicViewController>)publicViewController;
@end

