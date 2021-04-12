/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <CarPlaySupport/CPSBaseTemplateViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/CPListTemplateProviding.h>

@class CPSSectionedDataSource, NSIndexPath, UIActivityIndicatorView, NSTimer, CPSTableView, CPListTemplate, NSString;

@interface CPSListTemplateViewController : CPSBaseTemplateViewController <UITableViewDelegate, CPListTemplateProviding> {

	CPSSectionedDataSource* _dataSource;
	NSIndexPath* _currentSpinningIndexPath;
	NSIndexPath* _nextSpinningIndexPath;
	UIActivityIndicatorView* _spinnerView;
	unsigned long long _spinnerState;
	NSTimer* _spinnerStartTimer;
	NSTimer* _spinnerTimeoutTimer;
	CPSTableView* _tableView;

}

@property (nonatomic,retain) CPSSectionedDataSource * dataSource;                //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy) NSIndexPath * currentSpinningIndexPath;               //@synthesize currentSpinningIndexPath=_currentSpinningIndexPath - In the implementation block
@property (nonatomic,copy) NSIndexPath * nextSpinningIndexPath;                  //@synthesize nextSpinningIndexPath=_nextSpinningIndexPath - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinnerView;              //@synthesize spinnerView=_spinnerView - In the implementation block
@property (assign,nonatomic) unsigned long long spinnerState;                    //@synthesize spinnerState=_spinnerState - In the implementation block
@property (nonatomic,retain) NSTimer * spinnerStartTimer;                        //@synthesize spinnerStartTimer=_spinnerStartTimer - In the implementation block
@property (nonatomic,retain) NSTimer * spinnerTimeoutTimer;                      //@synthesize spinnerTimeoutTimer=_spinnerTimeoutTimer - In the implementation block
@property (nonatomic,readonly) CPListTemplate * listTemplate; 
@property (nonatomic,retain) CPSTableView * tableView;                           //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CPSSectionedDataSource *)dataSource;
-(void)setDataSource:(CPSSectionedDataSource *)arg1 ;
-(CPSTableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setButton:(id)arg1 enabled:(BOOL)arg2 ;
-(void)setTableView:(CPSTableView *)arg1 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(UIActivityIndicatorView *)spinnerView;
-(void)setSpinnerView:(UIActivityIndicatorView *)arg1 ;
-(void)updateSections:(id)arg1 ;
-(void)_viewDidLoad;
-(id)initWithListTemplate:(id)arg1 templateDelegate:(id)arg2 ;
-(CPListTemplate *)listTemplate;
-(NSIndexPath *)currentSpinningIndexPath;
-(NSIndexPath *)nextSpinningIndexPath;
-(void)setCurrentSpinningIndexPath:(NSIndexPath *)arg1 ;
-(void)setNextSpinningIndexPath:(NSIndexPath *)arg1 ;
-(unsigned long long)spinnerState;
-(void)_startSpinnerTimerFired:(id)arg1 indexPath:(id)arg2 ;
-(void)setSpinnerStartTimer:(NSTimer *)arg1 ;
-(void)_timeoutSpinnerFired:(id)arg1 indexPath:(id)arg2 ;
-(void)setSpinnerTimeoutTimer:(NSTimer *)arg1 ;
-(void)setSpinnerState:(unsigned long long)arg1 ;
-(void)_addSpinnerToIndexPath:(id)arg1 ;
-(void)_cellSelectionCompleted:(id)arg1 ;
-(NSTimer *)spinnerStartTimer;
-(NSTimer *)spinnerTimeoutTimer;
-(void)_cancelScheduledLoadingSpinnerForIndexPath:(id)arg1 ;
-(void)_scheduleLoadingSpinnerForIndexPath:(id)arg1 ;
-(void)setButton:(id)arg1 hidden:(BOOL)arg2 ;
@end

