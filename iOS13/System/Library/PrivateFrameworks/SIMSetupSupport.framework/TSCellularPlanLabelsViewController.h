/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/

#import <OnBoardingKit/OBTableWelcomeController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/TSSetupFlowItem.h>

@protocol TSSIMSetupFlowDelegate;
@class OBBoldTrayButton, NSLayoutConstraint, UITableViewCell, NSMutableArray, TSCellularPlanLabelPickerViewController, NSArray, NSString;

@interface TSCellularPlanLabelsViewController : OBTableWelcomeController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate, TSSetupFlowItem> {

	OBBoldTrayButton* _doneButton;
	BOOL _allowDismiss;
	id<TSSIMSetupFlowDelegate> _delegate;
	NSLayoutConstraint* _heightAnchor;
	UITableViewCell* _sectionFooter;
	NSMutableArray* _sortedPlanItemsWithPendingLabels;
	TSCellularPlanLabelPickerViewController* _labelPickerViewController;
	NSArray* _planItemBadges;
	NSString* _iccid;

}

@property (nonatomic,retain) NSLayoutConstraint * heightAnchor;                                      //@synthesize heightAnchor=_heightAnchor - In the implementation block
@property (retain) UITableViewCell * sectionFooter;                                                  //@synthesize sectionFooter=_sectionFooter - In the implementation block
@property (retain) NSMutableArray * sortedPlanItemsWithPendingLabels;                                //@synthesize sortedPlanItemsWithPendingLabels=_sortedPlanItemsWithPendingLabels - In the implementation block
@property (retain) TSCellularPlanLabelPickerViewController * labelPickerViewController;              //@synthesize labelPickerViewController=_labelPickerViewController - In the implementation block
@property (retain) NSArray * planItemBadges;                                                         //@synthesize planItemBadges=_planItemBadges - In the implementation block
@property (assign) BOOL allowDismiss;                                                                //@synthesize allowDismiss=_allowDismiss - In the implementation block
@property (readonly) NSString * iccid;                                                               //@synthesize iccid=_iccid - In the implementation block
@property (__weak) id<TSSIMSetupFlowDelegate> delegate;                                              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<TSSIMSetupFlowDelegate>)delegate;
-(void)setDelegate:(id<TSSIMSetupFlowDelegate>)arg1 ;
-(NSLayoutConstraint *)heightAnchor;
-(NSString *)iccid;
-(UITableViewCell *)sectionFooter;
-(void)setSectionFooter:(UITableViewCell *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)_doneButtonTapped;
-(void)setHeightAnchor:(NSLayoutConstraint *)arg1 ;
-(void)_cancelButtonTapped;
-(void)prepare:(/*^block*/id)arg1 ;
-(NSArray *)planItemBadges;
-(void)setPlanItemBadges:(NSArray *)arg1 ;
-(id)initWithIccid:(id)arg1 allowDismiss:(BOOL)arg2 ;
-(id)initWithAllowDismiss:(BOOL)arg1 ;
-(TSCellularPlanLabelPickerViewController *)labelPickerViewController;
-(void)setPendingLabel:(id)arg1 forPlanItem:(id)arg2 ;
-(void)setLabelPickerViewController:(TSCellularPlanLabelPickerViewController *)arg1 ;
-(id)getPlanItemByIndex:(long long)arg1 ;
-(id)getPredefinedUserLabels;
-(id)getPendingLabelAtIndex:(long long)arg1 ;
-(void)savePlanLabels:(/*^block*/id)arg1 ;
-(NSMutableArray *)sortedPlanItemsWithPendingLabels;
-(void)setSortedPlanItemsWithPendingLabels:(NSMutableArray *)arg1 ;
-(BOOL)allowDismiss;
-(void)setAllowDismiss:(BOOL)arg1 ;
@end

