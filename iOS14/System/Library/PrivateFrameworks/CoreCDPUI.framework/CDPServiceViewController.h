/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CDPServiceInterface.h>

@class UIViewController;

@interface CDPServiceViewController : UIViewController <CDPServiceInterface> {

	BOOL _inlineMode;
	UIViewController* _contentViewController;

}
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLoad;
-(void)offsetForCurrentKeyboard:(/*^block*/id)arg1 ;
@end

