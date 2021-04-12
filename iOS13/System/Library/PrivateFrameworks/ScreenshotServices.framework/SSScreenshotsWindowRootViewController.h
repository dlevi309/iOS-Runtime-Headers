/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <ScreenshotServices/ScreenshotServices-Structs.h>
#import <UIKitCore/UIViewController.h>

@class UIViewController;

@interface SSScreenshotsWindowRootViewController : UIViewController {

	UIViewController* _managedViewController;

}

@property (nonatomic,retain) UIViewController * managedViewController;              //@synthesize managedViewController=_managedViewController - In the implementation block
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(unsigned long long)supportedInterfaceOrientations;
-(void)getRotationContentSettings:(SCD_Struct_SS5*)arg1 forWindow:(id)arg2 ;
-(UIViewController *)managedViewController;
-(void)setManagedViewController:(UIViewController *)arg1 ;
@end

