/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/

#import <OnBoardingKit/OBTableWelcomeController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/TSSetupFlowItem.h>

@protocol TSSIMSetupFlowDelegate;
@class NSLayoutConstraint, OBBoldTrayButton, NSArray, UIView, NSMutableArray, NSString;

@interface TSTransferListViewController : OBTableWelcomeController <UINavigationControllerDelegate, UITableViewDataSource, UITableViewDelegate, TSSetupFlowItem> {

	BOOL _isInEligiblePlanPresent;
	NSLayoutConstraint* _tableHeightAnchor;
	OBBoldTrayButton* _continueButton;
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
-(id<TSSIMSetupFlowDelegate>)delegate;
-(void)setDelegate:(id<TSSIMSetupFlowDelegate>)arg1 ;
-(NSLayoutConstraint *)heightAnchor;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)setHeightAnchor:(NSLayoutConstraint *)arg1 ;
-(void)_skipButtonTapped;
-(NSMutableArray *)chosenUseIndexPaths;
-(void)setChosenUseIndexPaths:(NSMutableArray *)arg1 ;
-(id)initWithTransferItems:(id)arg1 ;
-(void)_continueButtonTapped;
-(double)_heightAnchorConstant;
-(void)updateFooterView;
-(void)_preparePlanTransfer:(id)arg1 withDeviceID:(id)arg2 ;
-(void)_startPlanTransfer:(id)arg1 withDeviceID:(id)arg2 ;
-(void)updateTableData:(id)arg1 isInEligiblePlanPresent:(BOOL)arg2 ;
-(NSArray *)transferItems;
-(void)setTransferItems:(NSArray *)arg1 ;
-(UIView *)tableFooter;
-(void)setTableFooter:(UIView *)arg1 ;
@end

