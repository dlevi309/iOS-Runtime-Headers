/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TVApplicationControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class TVApplicationController, VUIBootURLController, UINavigationController, NSString;

@interface VUIApplicationViewController : UIViewController <TVApplicationControllerDelegate, UIGestureRecognizerDelegate> {

	TVApplicationController* _applicationController;
	VUIBootURLController* _bootURLController;
	UINavigationController* _navigationController;

}

@property (nonatomic,retain) TVApplicationController * applicationController;              //@synthesize applicationController=_applicationController - In the implementation block
@property (nonatomic,retain) VUIBootURLController * bootURLController;                     //@synthesize bootURLController=_bootURLController - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationController;                //@synthesize navigationController=_navigationController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_launchOptions;
-(id)preferredFocusEnvironments;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(void)viewDidLoad;
-(void)dealloc;
-(UINavigationController *)navigationController;
-(void)setBootURLController:(VUIBootURLController *)arg1 ;
-(VUIBootURLController *)bootURLController;
-(void)_startApplicationControllerWithBootURL:(id)arg1 ;
-(void)_exposeObjectsInJSContext:(id)arg1 ;
-(id)_initialViewControllerWithAppContext:(id)arg1 ;
-(TVApplicationController *)applicationController;
-(Class)_applicationControllerClass;
-(void)setApplicationController:(TVApplicationController *)arg1 ;
-(void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2 ;
-(void)appController:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)appController:(id)arg1 didFailWithError:(id)arg2 ;
@end

