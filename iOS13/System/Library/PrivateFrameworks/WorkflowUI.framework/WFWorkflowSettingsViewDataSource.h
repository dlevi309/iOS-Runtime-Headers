/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKit/UITableViewDataSource.h>

@protocol WFWorkflowSettingsViewDataSourceDelegate;
@class NSString, WFWorkflow, WFDatabase, NSArray, NSMapTable;

@interface WFWorkflowSettingsViewDataSource : NSObject <UITableViewDataSource> {

	id<WFWorkflowSettingsViewDataSourceDelegate> _delegate;
	NSString* _tentativeWorkflowName;
	WFWorkflow* _workflow;
	WFDatabase* _database;
	NSArray* _accessResources;
	NSMapTable* _switchToAccessResourceMapTable;

}

@property (assign,nonatomic,__weak) WFWorkflow * workflow;                                              //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,retain) WFDatabase * database;                                                     //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) NSArray * accessResources;                                                 //@synthesize accessResources=_accessResources - In the implementation block
@property (nonatomic,retain) NSMapTable * switchToAccessResourceMapTable;                               //@synthesize switchToAccessResourceMapTable=_switchToAccessResourceMapTable - In the implementation block
@property (assign,nonatomic,__weak) id<WFWorkflowSettingsViewDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * tentativeWorkflowName;                                            //@synthesize tentativeWorkflowName=_tentativeWorkflowName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFWorkflowSettingsViewDataSourceDelegate>)delegate;
-(void)setDelegate:(id<WFWorkflowSettingsViewDataSourceDelegate>)arg1 ;
-(void)setDatabase:(WFDatabase *)arg1 ;
-(WFDatabase *)database;
-(id)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(WFWorkflow *)workflow;
-(void)setWorkflow:(WFWorkflow *)arg1 ;
-(NSArray *)accessResources;
-(id)initWithWorkflow:(id)arg1 database:(id)arg2 ;
-(void)registerCellsForTableView:(id)arg1 ;
-(BOOL)showCustomizeShortcut;
-(BOOL)showAddToHomeScreen;
-(long long)sectionWithOffsetForButtonsSection:(long long)arg1 ;
-(id)tableView:(id)arg1 nameCellForRow:(long long)arg2 ;
-(id)buttonCellTypes;
-(long long)buttonCellTypeForRow:(long long)arg1 ;
-(id)tableView:(id)arg1 buttonCellForRow:(long long)arg2 ;
-(long long)showInCellCount;
-(id)tableView:(id)arg1 showInCellForRow:(long long)arg2 ;
-(id)setUpShowInWidgetCell:(id)arg1 ;
-(id)setUpShowInShareSheetCell:(id)arg1 ;
-(id)setUpAcceptedTypesCell:(id)arg1 ;
-(long long)importQuestionsCellCount;
-(id)tableView:(id)arg1 importQuestionsCellForRow:(long long)arg2 ;
-(id)setUpImportQuestionsCell:(id)arg1 ;
-(long long)accessResourcesCellCount;
-(id)tableView:(id)arg1 accessResourcesCellForRow:(long long)arg2 ;
-(void)toggledAccessResourceSwitch:(id)arg1 ;
-(id)tableView:(id)arg1 helpCellForRow:(long long)arg2 ;
-(NSString *)tentativeWorkflowName;
-(void)setTentativeWorkflowName:(NSString *)arg1 ;
-(void)setAccessResources:(NSArray *)arg1 ;
-(NSMapTable *)switchToAccessResourceMapTable;
-(void)setSwitchToAccessResourceMapTable:(NSMapTable *)arg1 ;
@end

