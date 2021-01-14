/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/

#import <OnBoardingKit/OBTableWelcomeController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/TSSetupFlowItem.h>

@protocol TSSIMSetupFlowDelegate;
@class NSLayoutConstraint, OBBoldTrayButton, CTDisplayPlanList, NSArray, UIView, NSMutableArray, NSString;

@interface TSTransferListViewController : OBTableWelcomeController <UINavigationControllerDelegate, UITableViewDataSource, UITableViewDelegate, TSSetupFlowItem> {

	BOOL _isInEligiblePlanPresent;
	BOOL _receivedPendingInstallItems;
	BOOL _receivedTransferItems;
	BOOL _transferCompleted;
	BOOL _pendingInstallCompleted;
	BOOL _continueButtonTappedOnce;
	NSLayoutConstraint* _tableHeightAnchor;
	OBBoldTrayButton* _continueButton;
	CTDisplayPlanList* _pendingInstallItems;
	id<TSSIMSetupFlowDelegate> _delegate;
	NSArray* _transferItems;
	NSLayoutConstraint* _heightAnchor;
	UIView* _tableFooter;
	NSMutableArray* _chosenUseIndexPaths;

}

@property (retain) NSArray * transferItems;                                  //@synthesize transferItems=_transferItems - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightAnchor;              //@synthesize heightAnchor=_heightAnchor - In the implementation block
@property (retain) UIView * tableFooter;                                     //@synthesize tableFooter=_tableFooter - In the implementation block
@property (retain) NSMutableArray * chosenUseIndexPaths;                     //@synthesize chosenUseIndexPaths=_chosenUseIndexPaths - In the implementation block
@property (__weak) id<TSSIMSetupFlowDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(id<TSSIMSetupFlowDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<TSSIMSetupFlowDelegate>)arg1 ;
-(void)setHeightAnchor:(NSLayoutConstraint *)arg1 ;
-(void)viewDidLoad;
-(NSLayoutConstraint *)heightAnchor;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)updateFooterView;
-(void)viewDidLayoutSubviews;
-(void)_skipButtonTapped;
-(NSMutableArray *)chosenUseIndexPaths;
-(void)setChosenUseIndexPaths:(NSMutableArray *)arg1 ;
-(void)_maybeUpdateTableView;
-(void)_startPendingInstall:(id)arg1 ;
-(void)_continueButtonTapped;
-(double)_heightAnchorConstant;
-(void)_preparePlanTransfer:(id)arg1 withDeviceID:(id)arg2 ;
-(void)_preparePlanPendingInstall:(id)arg1 withDeviceID:(id)arg2 ;
-(void)_startPlanTransfer:(id)arg1 withDeviceID:(id)arg2 ;
-(void)_viewMaybeCompleted;
-(id)initWithTransferItems:(id)arg1 isInEligiblePlanPresent:(BOOL)arg2 pendingInstallItems:(id)arg3 ;
-(NSArray *)transferItems;
-(void)setTransferItems:(NSArray *)arg1 ;
-(UIView *)tableFooter;
-(void)setTableFooter:(UIView *)arg1 ;
@end

