/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PSController.h>

@protocol PSController;
@class UIViewController, PSRootController, PSSpecifier, NSString;

@interface PSViewController : UIViewController <PSController> {

	UIViewController*<PSController> _parentController;
	PSRootController* _rootController;
	PSSpecifier* _specifier;

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
-(id)init;
-(id)rootController;
-(void)popupViewDidDisappear;
-(void)formSheetViewDidDisappear;
-(long long)navigationItemLargeTitleDisplayMode;
-(void)didLock;
-(void)didWake;
-(void)setParentController:(id)arg1 ;
-(void)handleURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)parentController;
-(void)didUnlock;
-(void)willResignActive;
-(void)setRootController:(id)arg1 ;
-(id)readPreferenceValue:(id)arg1 ;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)showController:(id)arg1 ;
-(void)pushController:(id)arg1 ;
-(void)willUnlock;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(void)statusBarWillAnimateByHeight:(double)arg1 ;
-(void)pushController:(id)arg1 animate:(BOOL)arg2 ;
-(void)popupViewWillDisappear;
-(void)formSheetViewWillDisappear;
@end

