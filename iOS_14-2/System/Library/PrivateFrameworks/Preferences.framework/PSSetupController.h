/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)handleURL:(id)arg1 ;
-(id)init;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)statusBarWillChangeHeight:(id)arg1 ;
-(void)popControllerOnParent;
-(void)pushControllerOnParentWithSpecifier:(id)arg1 ;
-(void)setParentController:(id)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)parentController;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
-(id)controller;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)setupController;
-(BOOL)usePopupStyle;
-(BOOL)popupStyleIsModal;
-(void)dismiss;
@end

