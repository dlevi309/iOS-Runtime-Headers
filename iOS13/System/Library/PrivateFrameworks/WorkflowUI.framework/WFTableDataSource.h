/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <libobjc.A.dylib/WFTreeObserver.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, WFTableDataSourceTreeNode, NSMutableArray, NSArray, NSString;

@interface WFTableDataSource : NSObject <WFTreeObserver, UITableViewDataSource> {

	UITableView* _tableView;
	WFTableDataSourceTreeNode* _tree;
	NSMutableArray* _mutableSections;

}

@property (nonatomic,readonly) WFTableDataSourceTreeNode * tree;              //@synthesize tree=_tree - In the implementation block
@property (nonatomic,readonly) NSMutableArray * mutableSections;              //@synthesize mutableSections=_mutableSections - In the implementation block
@property (assign,nonatomic,__weak) UITableView * tableView;                  //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,copy) NSArray * sections; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(UITableView *)tableView;
-(NSArray *)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(id)initWithTableView:(id)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(id)sectionAtIndex:(unsigned long long)arg1 ;
-(void)addSection:(id)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(void)insertSection:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeSectionAtIndex:(long long)arg1 ;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(void)removeSection:(id)arg1 ;
-(WFTableDataSourceTreeNode *)tree;
-(id)indexPathForItem:(id)arg1 ;
-(void)treeNode:(id)arg1 flattenedDescendentsDidChangeFrom:(id)arg2 to:(id)arg3 changeSource:(id)arg4 ;
-(id)indexPathFromTableViewIndexPath:(id)arg1 ;
-(id)cellIdentifierForItem:(id)arg1 ;
-(id)treeNodeAtTableViewIndexPath:(id)arg1 ;
-(id)treeNodeAtTreeIndexPath:(id)arg1 ;
-(NSMutableArray *)mutableSections;
@end

