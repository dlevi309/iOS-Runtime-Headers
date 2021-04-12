/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/PKTextInputDebugViewTableCellDelegate.h>
#import <libobjc.A.dylib/PKTextInputDebugStateIntrospectorDelegate.h>

@protocol PKTextInputDebugViewControllerDelegate;
@class PKTextInputDebugStateIntrospector, PKTextInputDebugLogController, PKTextInputElementsController, UIView, UITableView, UIToolbar, PKTextInputDebugTargetsView, NSArray, NSTimer, NSString;

@interface PKTextInputDebugViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, PKTextInputDebugViewTableCellDelegate, PKTextInputDebugStateIntrospectorDelegate> {

	BOOL __visualizeTargets;
	BOOL __needsReloadData;
	BOOL __needsReloadTargetsVisualization;
	PKTextInputDebugStateIntrospector* _introspectorDataSource;
	id<PKTextInputDebugViewControllerDelegate> _delegate;
	PKTextInputDebugLogController* _debugLogController;
	PKTextInputElementsController* _elementsController;
	unsigned long long _statusViewAnchorCorner;
	UIView* __statusContainerView;
	UITableView* __statusTableView;
	UIToolbar* __statusViewToolbar;
	PKTextInputDebugTargetsView* __targetsContainerView;
	NSArray* __statusViewPositionConstraints;
	NSTimer* __autoreloadTimer;

}

@property (nonatomic,retain) UIView * _statusContainerView;                                           //@synthesize _statusContainerView=__statusContainerView - In the implementation block
@property (nonatomic,retain) UITableView * _statusTableView;                                          //@synthesize _statusTableView=__statusTableView - In the implementation block
@property (nonatomic,retain) UIToolbar * _statusViewToolbar;                                          //@synthesize _statusViewToolbar=__statusViewToolbar - In the implementation block
@property (nonatomic,retain) PKTextInputDebugTargetsView * _targetsContainerView;                     //@synthesize _targetsContainerView=__targetsContainerView - In the implementation block
@property (nonatomic,retain) NSArray * _statusViewPositionConstraints;                                //@synthesize _statusViewPositionConstraints=__statusViewPositionConstraints - In the implementation block
@property (assign,setter=_setVisualizeTargets:,nonatomic) BOOL _visualizeTargets;                     //@synthesize _visualizeTargets=__visualizeTargets - In the implementation block
@property (assign,nonatomic) BOOL _needsReloadData;                                                   //@synthesize _needsReloadData=__needsReloadData - In the implementation block
@property (assign,nonatomic) BOOL _needsReloadTargetsVisualization;                                   //@synthesize _needsReloadTargetsVisualization=__needsReloadTargetsVisualization - In the implementation block
@property (nonatomic,retain) NSTimer * _autoreloadTimer;                                              //@synthesize _autoreloadTimer=__autoreloadTimer - In the implementation block
@property (nonatomic,retain) PKTextInputDebugStateIntrospector * introspectorDataSource;              //@synthesize introspectorDataSource=_introspectorDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<PKTextInputDebugViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PKTextInputDebugLogController * debugLogController;                      //@synthesize debugLogController=_debugLogController - In the implementation block
@property (nonatomic,retain) PKTextInputElementsController * elementsController;                      //@synthesize elementsController=_elementsController - In the implementation block
@property (assign,nonatomic) unsigned long long statusViewAnchorCorner;                               //@synthesize statusViewAnchorCorner=_statusViewAnchorCorner - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_updateStatusView;
-(id<PKTextInputDebugViewControllerDelegate>)delegate;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<PKTextInputDebugViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setDebugLogController:(PKTextInputDebugLogController *)arg1 ;
-(void)setIntrospectorDataSource:(PKTextInputDebugStateIntrospector *)arg1 ;
-(void)setNeedsReloadDebugStateData;
-(PKTextInputElementsController *)elementsController;
-(void)setElementsController:(PKTextInputElementsController *)arg1 ;
-(void)setStatusViewAnchorCorner:(unsigned long long)arg1 ;
-(PKTextInputDebugLogController *)debugLogController;
-(void)setNeedsReloadTargetsVisualization;
-(void)_setupStatusView;
-(void)_handleAutoreloadTimerFired;
-(void)set_autoreloadTimer:(NSTimer *)arg1 ;
-(NSTimer *)_autoreloadTimer;
-(void)set_statusContainerView:(UIView *)arg1 ;
-(void)set_statusViewToolbar:(UIToolbar *)arg1 ;
-(void)_handleRadarButton:(id)arg1 ;
-(void)_handleTargetsButton:(id)arg1 ;
-(void)_handleLogButton:(id)arg1 ;
-(void)_handleCloseButton:(id)arg1 ;
-(void)set_statusTableView:(UITableView *)arg1 ;
-(BOOL)_needsReloadData;
-(void)set_needsReloadData:(BOOL)arg1 ;
-(void)_reloadDebugStateData;
-(BOOL)_needsReloadTargetsVisualization;
-(void)set_needsReloadTargetsVisualization:(BOOL)arg1 ;
-(void)_reloadTargetsVisualization;
-(NSArray *)_statusViewPositionConstraints;
-(void)set_statusViewPositionConstraints:(NSArray *)arg1 ;
-(UIView *)_statusContainerView;
-(unsigned long long)statusViewAnchorCorner;
-(UITableView *)_statusTableView;
-(void)_updateTargetsVisualizationView;
-(BOOL)_visualizeTargets;
-(PKTextInputDebugTargetsView *)_targetsContainerView;
-(void)set_targetsContainerView:(PKTextInputDebugTargetsView *)arg1 ;
-(void)_setVisualizeTargets:(BOOL)arg1 ;
-(PKTextInputDebugStateIntrospector *)introspectorDataSource;
-(void)_configureCell:(id)arg1 forItemAtIndex:(long long)arg2 ;
-(void)debugViewTableCellDidTapDetailsButton:(id)arg1 ;
-(void)debugStateIntrospectorContentDidChange:(id)arg1 ;
-(UIToolbar *)_statusViewToolbar;
@end

