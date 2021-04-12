/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/

#import <OnBoardingKit/OBTableWelcomeController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/TSSetupFlowItem.h>

@protocol TSSIMSetupFlowDelegate;
@class OBBoldTrayButton, NSLayoutConstraint, UITableViewCell, NSMutableArray, TSCellularPlanLabelPickerTableViewController, NSArray, NSString;

@interface TSCellularPlanLabelsViewController : OBTableWelcomeController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate, TSSetupFlowItem> {

	OBBoldTrayButton* _doneButton;
	BOOL _allowDismiss;
	id<TSSIMSetupFlowDelegate> _delegate;
	NSLayoutConstraint* _heightAnchor;
	UITableViewCell* _sectionFooter;
	NSMutableArray* _sortedPlanItemsWithPendingLabels;
	TSCellularPlanLabelPickerTableViewController* _labelPickerViewController;
	NSArray* _planItemBadges;
	NSString* _iccid;

}

@property (nonatomic,retain) NSLayoutConstraint * heightAnchor;                                           //@synthesize heightAnchor=_heightAnchor - In the implementation block
@property (retain) UITableViewCell * sectionFooter;                                                       //@synthesize sectionFooter=_sectionFooter - In the implementation block
@property (retain) NSMutableArray * sortedPlanItemsWithPendingLabels;                                     //@synthesize sortedPlanItemsWithPendingLabels=_sortedPlanItemsWithPendingLabels - In the implementation block
@property (retain) TSCellularPlanLabelPickerTableViewController * labelPickerViewController;              //@synthesize labelPickerViewController=_labelPickerViewController - In the implementation block
@property (retain) NSArray * planItemBadges;                                                              //@synthesize planItemBadges=_planItemBadges - In the implementation block
@property (assign) BOOL allowDismiss;                                                                     //@synthesize allowDismiss=_allowDismiss - In the implementation block
@property (readonly) NSString * iccid;                                                                    //@synthesize iccid=_iccid - In the implementation block
@property (__weak) id<TSSIMSetupFlowDelegate> delegate;                                                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)iccid;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(UITableViewCell *)sectionFooter;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)setSectionFooter:(UITableViewCell *)arg1 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id<TSSIMSetupFlowDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_doneButtonTapped;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<TSSIMSetupFlowDelegate>)arg1 ;
-(void)setHeightAnchor:(NSLayoutConstraint *)arg1 ;
-(void)viewDidLoad;
-(NSLayoutConstraint *)heightAnchor;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)_cancelButtonTapped;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)prepare:(/*^block*/id)arg1 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)viewDidLayoutSubviews;
-(NSArray *)planItemBadges;
-(void)setPlanItemBadges:(NSArray *)arg1 ;
-(id)initWithIccid:(id)arg1 allowDismiss:(BOOL)arg2 ;
-(id)initWithAllowDismiss:(BOOL)arg1 ;
-(TSCellularPlanLabelPickerTableViewController *)labelPickerViewController;
-(void)setPendingLabel:(id)arg1 forPlanItem:(id)arg2 ;
-(void)setLabelPickerViewController:(TSCellularPlanLabelPickerTableViewController *)arg1 ;
-(id)getPlanItemByIndex:(long long)arg1 ;
-(id)getPredefinedUserLabels;
-(id)getPendingLabelAtIndex:(long long)arg1 ;
-(void)savePlanLabels:(/*^block*/id)arg1 ;
-(NSMutableArray *)sortedPlanItemsWithPendingLabels;
-(void)setSortedPlanItemsWithPendingLabels:(NSMutableArray *)arg1 ;
-(BOOL)allowDismiss;
-(void)setAllowDismiss:(BOOL)arg1 ;
@end

