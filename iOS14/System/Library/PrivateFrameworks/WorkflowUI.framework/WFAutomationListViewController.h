/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/WFCreateAutomationCoordinatorDelegate.h>
#import <libobjc.A.dylib/WFEditAutomationCoordinatorDelegate.h>
#import <libobjc.A.dylib/WFDatabaseResultObserver.h>
#import <libobjc.A.dylib/WFHomeManagerEventObserver.h>
#import <libobjc.A.dylib/HMHomeDelegate.h>
#import <libobjc.A.dylib/HUTriggerEditorDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class WFDatabase, WFTriggerManager, UIView, NSArray, WFDatabaseResult, WFHomeManager, WFCreateAutomationCoordinator, WFEditAutomationCoordinator, NSString;

@interface WFAutomationListViewController : UITableViewController <WFCreateAutomationCoordinatorDelegate, WFEditAutomationCoordinatorDelegate, WFDatabaseResultObserver, WFHomeManagerEventObserver, HMHomeDelegate, HUTriggerEditorDelegate, UITableViewDataSource, UITableViewDelegate> {

	BOOL _showsAddNewAutomationButton;
	WFDatabase* _database;
	WFTriggerManager* _triggerManager;
	UIView* _subheadWrapperView;
	NSArray* _tableSections;
	WFDatabaseResult* _personalAutomationsDatabaseResult;
	NSArray* _sortedPersonalAutomations;
	WFHomeManager* _homeManager;
	WFCreateAutomationCoordinator* _createAutomationCoordinator;
	WFEditAutomationCoordinator* _editAutomationCoordinator;

}

@property (nonatomic,readonly) WFDatabase * database;                                                  //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) WFTriggerManager * triggerManager;                                        //@synthesize triggerManager=_triggerManager - In the implementation block
@property (nonatomic,readonly) UIView * subheadWrapperView;                                            //@synthesize subheadWrapperView=_subheadWrapperView - In the implementation block
@property (nonatomic,retain) NSArray * tableSections;                                                  //@synthesize tableSections=_tableSections - In the implementation block
@property (nonatomic,readonly) WFDatabaseResult * personalAutomationsDatabaseResult;                   //@synthesize personalAutomationsDatabaseResult=_personalAutomationsDatabaseResult - In the implementation block
@property (nonatomic,copy) NSArray * sortedPersonalAutomations;                                        //@synthesize sortedPersonalAutomations=_sortedPersonalAutomations - In the implementation block
@property (nonatomic,retain) WFHomeManager * homeManager;                                              //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,retain) WFCreateAutomationCoordinator * createAutomationCoordinator;              //@synthesize createAutomationCoordinator=_createAutomationCoordinator - In the implementation block
@property (nonatomic,retain) WFEditAutomationCoordinator * editAutomationCoordinator;                  //@synthesize editAutomationCoordinator=_editAutomationCoordinator - In the implementation block
@property (assign,nonatomic) BOOL showsAddNewAutomationButton;                                         //@synthesize showsAddNewAutomationButton=_showsAddNewAutomationButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)updateTableViewLayoutMargins;
-(void)triggerEditor:(id)arg1 didFinishWithTriggerBuilder:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)homeDidUpdateName:(id)arg1 ;
-(void)updateUI;
-(void)viewLayoutMarginsDidChange;
-(void)home:(id)arg1 didAddTrigger:(id)arg2 ;
-(void)home:(id)arg1 didRemoveTrigger:(id)arg2 ;
-(void)home:(id)arg1 didUpdateNameForTrigger:(id)arg2 ;
-(void)home:(id)arg1 didUpdateTrigger:(id)arg2 ;
-(void)viewDidLoad;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(WFTriggerManager *)triggerManager;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(WFDatabase *)database;
-(WFHomeManager *)homeManager;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithDatabase:(id)arg1 ;
-(void)setHomeManager:(WFHomeManager *)arg1 ;
-(void)dealloc;
-(NSArray *)tableSections;
-(void)databaseResultDidChange:(id)arg1 ;
-(void)editAutomationCoordinatorDidFinish:(id)arg1 ;
-(void)editAutomationCoordinatorDidCancel:(id)arg1 ;
-(void)createAutomationCoordinatorDidFinish:(id)arg1 ;
-(void)createAutomationCoordinatorDidCancel:(id)arg1 ;
-(void)updateSubheadLayoutMargins;
-(void)flashAutomationForTriggerID:(id)arg1 ;
-(void)buildTableSections;
-(void)setShowsAddNewAutomationButton:(BOOL)arg1 ;
-(BOOL)showEditViewForItem:(id)arg1 ;
-(BOOL)showPersonalAutomationEditorForConfiguredTrigger:(id)arg1 ;
-(void)startCreateNewAutomation:(id)arg1 ;
-(void)startCreateNewPersonalAutomation:(id)arg1 ;
-(void)startCreateNewHomeAutomation:(id)arg1 ;
-(void)startCreateNewAutomationFlowAtStep:(unsigned long long)arg1 ;
-(BOOL)showHomeAutomationEditorForTriggerItem:(id)arg1 ;
-(void)setTriggerManager:(WFTriggerManager *)arg1 ;
-(UIView *)subheadWrapperView;
-(void)setTableSections:(NSArray *)arg1 ;
-(WFDatabaseResult *)personalAutomationsDatabaseResult;
-(NSArray *)sortedPersonalAutomations;
-(void)setSortedPersonalAutomations:(NSArray *)arg1 ;
-(WFCreateAutomationCoordinator *)createAutomationCoordinator;
-(void)setCreateAutomationCoordinator:(WFCreateAutomationCoordinator *)arg1 ;
-(WFEditAutomationCoordinator *)editAutomationCoordinator;
-(void)setEditAutomationCoordinator:(WFEditAutomationCoordinator *)arg1 ;
-(BOOL)showsAddNewAutomationButton;
@end

