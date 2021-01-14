/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, NSArray, NSString;

@interface UIDebuggingInformationOverlayWindowPickerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	NSArray* _windows;

}

@property (nonatomic,retain) UITableView * tableView;               //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSArray * windows;                     //@synthesize windows=_windows - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)windows;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(UITableView *)tableView;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)loadData;
-(void)viewDidLoad;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setWindows:(NSArray *)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

