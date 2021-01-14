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
@class OBBoldTrayButton, NSLayoutConstraint, NSArray, CTDanglingPlanItem, CTCellularPlanItem, UITableViewCell, NSIndexPath, NSString;

@interface TSCellularPlanRemapViewController : OBTableWelcomeController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate, TSSetupFlowItem> {

	OBBoldTrayButton* _doneButton;
	BOOL _hasBackButton;
	BOOL _hasContinueButton;
	id<TSSIMSetupFlowDelegate> _delegate;
	NSLayoutConstraint* _heightAnchor;
	NSArray* _selectedPlanItems;
	CTDanglingPlanItem* _danglingPlanItem;
	CTCellularPlanItem* _defaultVoiceItem;
	UITableViewCell* _sectionFooter;
	NSIndexPath* _chosenTargetCellularPlanItem;

}

@property (nonatomic,retain) NSLayoutConstraint * heightAnchor;              //@synthesize heightAnchor=_heightAnchor - In the implementation block
@property (retain) NSArray * selectedPlanItems;                              //@synthesize selectedPlanItems=_selectedPlanItems - In the implementation block
@property (retain) CTDanglingPlanItem * danglingPlanItem;                    //@synthesize danglingPlanItem=_danglingPlanItem - In the implementation block
@property (retain) CTCellularPlanItem * defaultVoiceItem;                    //@synthesize defaultVoiceItem=_defaultVoiceItem - In the implementation block
@property (retain) UITableViewCell * sectionFooter;                          //@synthesize sectionFooter=_sectionFooter - In the implementation block
@property (retain) NSIndexPath * chosenTargetCellularPlanItem;               //@synthesize chosenTargetCellularPlanItem=_chosenTargetCellularPlanItem - In the implementation block
@property (assign) BOOL hasBackButton;                                       //@synthesize hasBackButton=_hasBackButton - In the implementation block
@property (assign) BOOL hasContinueButton;                                   //@synthesize hasContinueButton=_hasContinueButton - In the implementation block
@property (__weak) id<TSSIMSetupFlowDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(UITableViewCell *)sectionFooter;
-(void)setSectionFooter:(UITableViewCell *)arg1 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id<TSSIMSetupFlowDelegate>)delegate;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(void)_doneButtonTapped;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<TSSIMSetupFlowDelegate>)arg1 ;
-(void)setHeightAnchor:(NSLayoutConstraint *)arg1 ;
-(void)viewDidLoad;
-(NSLayoutConstraint *)heightAnchor;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)prepare:(/*^block*/id)arg1 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)viewDidLayoutSubviews;
-(NSArray *)selectedPlanItems;
-(void)setSelectedPlanItems:(NSArray *)arg1 ;
-(id)initWithBackButton:(BOOL)arg1 continueButton:(BOOL)arg2 danglingPlanItem:(id)arg3 ;
-(void)remapDanglingItem:(/*^block*/id)arg1 ;
-(CTDanglingPlanItem *)danglingPlanItem;
-(void)setDanglingPlanItem:(CTDanglingPlanItem *)arg1 ;
-(CTCellularPlanItem *)defaultVoiceItem;
-(void)setDefaultVoiceItem:(CTCellularPlanItem *)arg1 ;
-(NSIndexPath *)chosenTargetCellularPlanItem;
-(void)setChosenTargetCellularPlanItem:(NSIndexPath *)arg1 ;
-(BOOL)hasBackButton;
-(void)setHasBackButton:(BOOL)arg1 ;
-(BOOL)hasContinueButton;
-(void)setHasContinueButton:(BOOL)arg1 ;
@end

