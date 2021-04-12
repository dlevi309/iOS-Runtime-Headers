/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SSRemoteViewControllerServiceToHostInterface.h>

@protocol SSDittoHostViewControllerDelegate;
@interface SSDittoHostViewController : _UIRemoteViewController <SSRemoteViewControllerServiceToHostInterface> {

	id<SSDittoHostViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SSDittoHostViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(BOOL)__shouldHostRemoteTextEffectsWindow;
-(id<SSDittoHostViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SSDittoHostViewControllerDelegate>)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)dismiss;
-(BOOL)_canShowWhileLocked;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(id)_serviceProxy;
-(void)screenshotExperienceHasDismissed;
-(void)dismissScreenshotExperience;
@end

