/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <libobjc.A.dylib/WFTreeObserver.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, WFTableDataSourceTreeNode, NSMutableArray, NSArray, NSString;

@interface WFTableDataSource : NSObject <WFTreeObserver, UITableViewDataSource> {

	UITableView* _tableView;
	double _indentationWidth;
	WFTableDataSourceTreeNode* _tree;
	NSMutableArray* _mutableSections;

}

@property (nonatomic,readonly) WFTableDataSourceTreeNode * tree;              //@synthesize tree=_tree - In the implementation block
@property (nonatomic,readonly) NSMutableArray * mutableSections;              //@synthesize mutableSections=_mutableSections - In the implementation block
@property (assign,nonatomic,__weak) UITableView * tableView;                  //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,copy) NSArray * sections; 
@property (assign,nonatomic) double indentationWidth;                         //@synthesize indentationWidth=_indentationWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sectionAtIndex:(unsigned long long)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)removeSection:(id)arg1 ;
-(double)indentationWidth;
-(WFTableDataSourceTreeNode *)tree;
-(id)init;
-(UITableView *)tableView;
-(id)itemAtIndexPath:(id)arg1 ;
-(id)indexPathForItem:(id)arg1 ;
-(NSArray *)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)insertSection:(id)arg1 atIndex:(long long)arg2 ;
-(id)initWithTableView:(id)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)addSection:(id)arg1 ;
-(void)setIndentationWidth:(double)arg1 ;
-(void)removeSectionAtIndex:(long long)arg1 ;
-(NSMutableArray *)mutableSections;
-(void)treeNode:(id)arg1 flattenedDescendentsDidChangeFrom:(id)arg2 to:(id)arg3 changeSource:(id)arg4 ;
-(id)indexPathFromTableViewIndexPath:(id)arg1 ;
-(id)cellIdentifierForItem:(id)arg1 ;
-(id)treeNodeAtTableViewIndexPath:(id)arg1 ;
-(id)treeNodeAtTreeIndexPath:(id)arg1 ;
@end

