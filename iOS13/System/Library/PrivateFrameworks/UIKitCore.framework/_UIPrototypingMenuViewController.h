/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UIDebuggingInformationViewController.h>

@class NSArray, UITableView, NSString, _UIContentUnavailableView;

@interface _UIPrototypingMenuViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIDebuggingInformationViewController> {

	NSArray* _allSettings;
	UITableView* _tableView;
	NSString* _domain;
	_UIContentUnavailableView* _noContentView;

}

@property (nonatomic,retain) UITableView * tableView;                                //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSString * domain;                                      //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSArray * allSettings;                                  //@synthesize allSettings=_allSettings - In the implementation block
@property (nonatomic,retain) _UIContentUnavailableView * noContentView;              //@synthesize noContentView=_noContentView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)domain;
-(void)setDomain:(NSString *)arg1 ;
-(NSArray *)allSettings;
-(void)loadView;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setNoContentView:(_UIContentUnavailableView *)arg1 ;
-(_UIContentUnavailableView *)noContentView;
-(void)_reloadSettings:(id)arg1 ;
-(void)_resetSettings:(id)arg1 ;
-(void)setAllSettings:(NSArray *)arg1 ;
@end

