/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/PSController.h>
#import <libobjc.A.dylib/PSSpecifierControllerDelegate.h>

@protocol PSController;
@class UIViewController, PSRootController, PSSpecifierController, NSString;

@interface PSThirdPartyAppViewController : UITableViewController <PSController, PSSpecifierControllerDelegate> {

	UIViewController*<PSController> _parent;
	PSRootController* _root;
	PSSpecifierController* _specifierController;

}

@property (nonatomic,retain) UIViewController*<PSController> parent;                   //@synthesize parent=_parent - In the implementation block
@property (nonatomic,retain) PSRootController * root;                                  //@synthesize root=_root - In the implementation block
@property (nonatomic,retain) PSSpecifierController * specifierController;              //@synthesize specifierController=_specifierController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIViewController*<PSController>)parent;
-(void)setParent:(UIViewController*<PSController>)arg1 ;
-(id)specifier;
-(PSRootController *)root;
-(void)setRoot:(PSRootController *)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setSpecifierController:(PSSpecifierController *)arg1 ;
-(PSSpecifierController *)specifierController;
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
-(void)didReloadSpecifiers;
@end

