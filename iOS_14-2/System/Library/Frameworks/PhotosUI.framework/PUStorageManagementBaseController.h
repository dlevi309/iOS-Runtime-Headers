/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PSController.h>

@protocol PSController;
@class PSSpecifier, UIViewController, PSRootController, NSString;

@interface PUStorageManagementBaseController : UIViewController <PSController> {

	PSSpecifier* _specifier;
	id _preferenceValue;
	UIViewController*<PSController> _parentController;
	PSRootController* _rootController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willBecomeActive;
-(void)handleURL:(id)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(id)specifier;
-(void)suspend;
-(id)rootController;
-(void)didLock;
-(void)didWake;
-(void)setParentController:(id)arg1 ;
-(void)handleURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(id)parentController;
-(void)didUnlock;
-(void)willResignActive;
-(void)setRootController:(id)arg1 ;
-(id)readPreferenceValue:(id)arg1 ;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)showController:(id)arg1 ;
-(void)willUnlock;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(void)statusBarWillAnimateByHeight:(double)arg1 ;
@end

