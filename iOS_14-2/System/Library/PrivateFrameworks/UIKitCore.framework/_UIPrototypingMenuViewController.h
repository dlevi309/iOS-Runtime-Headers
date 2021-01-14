/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)domain;
-(NSArray *)allSettings;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setNoContentView:(_UIContentUnavailableView *)arg1 ;
-(_UIContentUnavailableView *)noContentView;
-(void)_reloadSettings:(id)arg1 ;
-(void)_resetSettings:(id)arg1 ;
-(void)setAllSettings:(NSArray *)arg1 ;
@end

