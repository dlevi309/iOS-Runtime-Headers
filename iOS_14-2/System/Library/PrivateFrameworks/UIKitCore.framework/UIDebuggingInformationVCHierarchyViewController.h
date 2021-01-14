/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIDebuggingInformationViewController.h>

@class NSArray, UITableView, NSString;

@interface UIDebuggingInformationVCHierarchyViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIDebuggingInformationViewController> {

	NSArray* _data;
	UITableView* _tableView;

}

@property (nonatomic,retain) NSArray * data;                        //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) UITableView * tableView;               //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setData:(NSArray *)arg1 ;
-(void)viewDidLoad;
-(NSArray *)data;
-(void)setTableView:(UITableView *)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2 ;
-(id)getViewControllersRecursiveWithLevel:(int)arg1 forView:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

