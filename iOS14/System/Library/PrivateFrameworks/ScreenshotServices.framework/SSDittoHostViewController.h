/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)becomeFirstResponder;
-(id<SSDittoHostViewControllerDelegate>)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setDelegate:(id<SSDittoHostViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(id)_serviceProxy;
-(void)dismiss;
-(void)screenshotExperienceHasDismissed;
-(void)dismissScreenshotExperience;
@end

