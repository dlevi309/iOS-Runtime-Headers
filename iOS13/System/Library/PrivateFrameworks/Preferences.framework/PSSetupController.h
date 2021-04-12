/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSRootController.h>

@protocol PSController;
@class NSDictionary, UIViewController, PSRootController;

@interface PSSetupController : PSRootController {

	NSDictionary* _rootInfo;
	UIViewController*<PSController> _parentController;
	PSRootController* _parentRootController;

}
-(id)init;
-(void)handleURL:(id)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)dismiss;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)controller;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
-(void)setParentController:(id)arg1 ;
-(id)parentController;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(void)setupController;
-(BOOL)usePopupStyle;
-(BOOL)popupStyleIsModal;
-(void)statusBarWillChangeHeight:(id)arg1 ;
-(void)pushControllerOnParentWithSpecifier:(id)arg1 ;
-(void)popControllerOnParent;
@end

