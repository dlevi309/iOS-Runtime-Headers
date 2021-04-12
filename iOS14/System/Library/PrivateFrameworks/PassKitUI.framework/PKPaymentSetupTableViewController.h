/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewWillLayoutSubviews;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(UITableView *)tableView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(long long)context;
-(unsigned long long)edgesForExtendedLayout;
-(BOOL)extendedLayoutIncludesOpaqueBars;
-(PKPaymentSetupDockView *)dockView;
-(long long)visibilityBackdropView:(id)arg1 preferredStyleForTraitCollection:(id)arg2 ;
-(UILabel *)footerLabel;
-(void)tableViewDidFinishReload:(id)arg1 ;
-(void)setClearsSelectionOnViewWillAppear:(BOOL)arg1 ;
-(BOOL)clearsSelectionOnViewWillAppear;
-(id)initWithStyle:(long long)arg1 context:(long long)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(NSIndexPath *)selectedIndexPath;
-(void)setContext:(long long)arg1 ;
@end

