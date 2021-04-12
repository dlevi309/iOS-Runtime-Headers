/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)specifier;
-(void)suspend;
-(void)handleURL:(id)arg1 ;
-(void)willBecomeActive;
-(void)willResignActive;
-(void)setSpecifier:(id)arg1 ;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(id)readPreferenceValue:(id)arg1 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)setParentController:(id)arg1 ;
-(id)parentController;
-(void)setRootController:(id)arg1 ;
-(id)rootController;
-(void)showController:(id)arg1 ;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(void)handleURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)didLock;
-(void)willUnlock;
-(void)didUnlock;
-(void)didWake;
-(void)statusBarWillAnimateByHeight:(double)arg1 ;
-(void)pushController:(id)arg1 ;
-(void)pushController:(id)arg1 animate:(BOOL)arg2 ;
-(void)formSheetViewWillDisappear;
-(void)popupViewWillDisappear;
-(long long)navigationItemLargeTitleDisplayMode;
-(void)popupViewDidDisappear;
-(void)formSheetViewDidDisappear;
@end

