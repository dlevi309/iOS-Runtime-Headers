/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <ScreenshotServices/ScreenshotServices-Structs.h>
#import <UIKitCore/UIViewController.h>

@class UIViewController;

@interface SSScreenshotsWindowRootViewController : UIViewController {

	UIViewController* _managedViewController;

}

@property (nonatomic,retain) UIViewController * managedViewController;              //@synthesize managedViewController=_managedViewController - In the implementation block
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)setManagedViewController:(UIViewController *)arg1 ;
-(UIViewController *)managedViewController;
-(void)getRotationContentSettings:(SCD_Struct_SS5*)arg1 forWindow:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

