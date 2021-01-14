/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/

#import <SIMSetupSupport/SIMSetupSupport-Structs.h>
#import <OnBoardingKit/OBTableWelcomeController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/TSSetupFlowItem.h>

@protocol TSSIMSetupFlowDelegate;
@class OBBoldTrayButton, NSLayoutConstraint, UITableViewCell, NSIndexPath, NSMutableArray, NSArray, NSString;

@interface TSCellularPlanUsesViewController : OBTableWelcomeController <UITableViewDataSource, UITableViewDelegate, TSSetupFlowItem> {

	OBBoldTrayButton* _doneButton;
	BOOL _dataSwitchEnabled;
	BOOL _hasDoneButton;
	id<TSSIMSetupFlowDelegate> _delegate;
	unsigned long long _usesType;
	NSLayoutConstraint* _heightAnchor;
	UITableViewCell* _sectionFooter;
	NSIndexPath* _chosenUseIndexPath;
	NSMutableArray* _chosenUseIndexPaths;
	NSArray* _planItemBadges;
	NSArray* _selectedPlanItems;

}

@property (assign) BOOL hasDoneButton;                                       //@synthesize hasDoneButton=_hasDoneButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightAnchor;              //@synthesize heightAnchor=_heightAnchor - In the implementation block
@property (retain) UITableViewCell * sectionFooter;                          //@synthesize sectionFooter=_sectionFooter - In the implementation block
@property (retain) NSIndexPath * chosenUseIndexPath;                         //@synthesize chosenUseIndexPath=_chosenUseIndexPath - In the implementation block
@property (retain) NSMutableArray * chosenUseIndexPaths;                     //@synthesize chosenUseIndexPaths=_chosenUseIndexPaths - In the implementation block
@property (retain) NSArray * planItemBadges;                                 //@synthesize planItemBadges=_planItemBadges - In the implementation block
@property (retain) NSArray * selectedPlanItems;                              //@synthesize selectedPlanItems=_selectedPlanItems - In the implementation block
@property (__weak) id<TSSIMSetupFlowDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long usesType;                  //@synthesize usesType=_usesType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(UITableViewCell *)sectionFooter;
-(void)setSectionFooter:(UITableViewCell *)arg1 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id<TSSIMSetupFlowDelegate>)delegate;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)_doneButtonTapped;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<TSSIMSetupFlowDelegate>)arg1 ;
-(void)setHeightAnchor:(NSLayoutConstraint *)arg1 ;
-(void)viewDidLoad;
-(NSLayoutConstraint *)heightAnchor;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)prepare:(/*^block*/id)arg1 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)viewDidLayoutSubviews;
-(NSArray *)selectedPlanItems;
-(void)dataSwitchChanged:(id)arg1 ;
-(void)saveDefaultUse:(/*^block*/id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 withDoneButton:(BOOL)arg2 ;
-(unsigned long long)usesType;
-(BOOL)hasDoneButton;
-(void)setHasDoneButton:(BOOL)arg1 ;
-(NSIndexPath *)chosenUseIndexPath;
-(void)setChosenUseIndexPath:(NSIndexPath *)arg1 ;
-(NSMutableArray *)chosenUseIndexPaths;
-(void)setChosenUseIndexPaths:(NSMutableArray *)arg1 ;
-(NSArray *)planItemBadges;
-(void)setPlanItemBadges:(NSArray *)arg1 ;
-(void)setSelectedPlanItems:(NSArray *)arg1 ;
@end

