/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_PKUIKVisibilityBackdropViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, UILabel, UITableViewController, UIView, PKPaymentSetupDockView, _PKUIKVisibilityBackdropView, NSIndexPath, NSString;

@interface PKPaymentSetupTableViewController : UIViewController <_PKUIKVisibilityBackdropViewDelegate, UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	UILabel* _footerLabel;
	UITableViewController* _tableViewController;
	UIView* _containerView;
	long long _style;
	PKPaymentSetupDockView* _dockView;
	_PKUIKVisibilityBackdropView* _backdropView;
	double _backdropWeight;
	BOOL _clearsSelectionOnViewWillAppear;
	long long _context;
	NSIndexPath* _selectedIndexPath;

}

@property (assign,nonatomic) long long context;                                   //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                           //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) UILabel * footerLabel; 
@property (nonatomic,readonly) PKPaymentSetupDockView * dockView; 
@property (assign,nonatomic) BOOL clearsSelectionOnViewWillAppear;                //@synthesize clearsSelectionOnViewWillAppear=_clearsSelectionOnViewWillAppear - In the implementation block
@property (nonatomic,copy,readonly) NSIndexPath * selectedIndexPath;              //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)context;
-(void)setContext:(long long)arg1 ;
-(void)loadView;
-(UITableView *)tableView;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(unsigned long long)edgesForExtendedLayout;
-(BOOL)extendedLayoutIncludesOpaqueBars;
-(void)setClearsSelectionOnViewWillAppear:(BOOL)arg1 ;
-(BOOL)clearsSelectionOnViewWillAppear;
-(NSIndexPath *)selectedIndexPath;
-(PKPaymentSetupDockView *)dockView;
-(void)tableViewDidFinishReload:(id)arg1 ;
-(UILabel *)footerLabel;
-(id)initWithStyle:(long long)arg1 context:(long long)arg2 ;
-(long long)visibilityBackdropView:(id)arg1 preferredStyleForTraitCollection:(id)arg2 ;
@end

