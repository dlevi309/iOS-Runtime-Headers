/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, NSArray, UIViewController, NSString;

@interface UIDebuggingInformationVCDetailViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	UITableView* _tableView;
	NSArray* _data;
	UIViewController* _inspectedVC;

}

@property (assign,nonatomic,__weak) UIViewController * inspectedVC;              //@synthesize inspectedVC=_inspectedVC - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)inspectVC:(id)arg1 ;
-(UIViewController *)inspectedVC;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)_updateDataAndReload:(BOOL)arg1 ;
-(void)setInspectedVC:(UIViewController *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

