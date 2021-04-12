/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <libobjc.A.dylib/WFTreeObserver.h>

@class NSString, WFTableSectionTreeNode, NSMutableArray, WFTableDataSource, NSArray;

@interface WFTableSection : NSObject <WFTreeObserver> {

	NSString* _headerText;
	NSString* _footerText;
	WFTableSectionTreeNode* _node;
	NSMutableArray* _mutableItems;
	long long _cellStyle;
	Class _cellClass;
	/*^block*/id _configurationBlock;

}

@property (nonatomic,readonly) WFTableSectionTreeNode * node;                      //@synthesize node=_node - In the implementation block
@property (nonatomic,readonly) NSMutableArray * mutableItems;                      //@synthesize mutableItems=_mutableItems - In the implementation block
@property (nonatomic,readonly) long long cellStyle;                                //@synthesize cellStyle=_cellStyle - In the implementation block
@property (nonatomic,readonly) Class cellClass;                                    //@synthesize cellClass=_cellClass - In the implementation block
@property (nonatomic,readonly) id configurationBlock;                              //@synthesize configurationBlock=_configurationBlock - In the implementation block
@property (nonatomic,__weak,readonly) WFTableDataSource * dataSource; 
@property (nonatomic,retain) NSArray * items; 
@property (nonatomic,retain) NSString * headerText;                                //@synthesize headerText=_headerText - In the implementation block
@property (nonatomic,retain) NSString * footerText;                                //@synthesize footerText=_footerText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)section;
+(id)sectionWithItems:(id)arg1 ;
+(id)sectionWithStyle:(long long)arg1 representedObjects:(id)arg2 configurationBlock:(/*^block*/id)arg3 ;
+(id)sectionWithCellClass:(Class)arg1 representedObjects:(id)arg2 configurationBlock:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)removeItem:(id)arg1 ;
-(WFTableSectionTreeNode *)node;
-(WFTableDataSource *)dataSource;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)addItem:(id)arg1 ;
-(id)tableView;
-(void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeItemAtIndex:(unsigned long long)arg1 ;
-(id)configurationBlock;
-(unsigned long long)currentIndex;
-(NSString *)headerText;
-(void)setHeaderText:(NSString *)arg1 ;
-(long long)cellStyle;
-(Class)cellClass;
-(NSString *)footerText;
-(void)setRepresentedObjects:(id)arg1 ;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(void)setFooterText:(NSString *)arg1 ;
-(NSMutableArray *)mutableItems;
-(void)treeNode:(id)arg1 flattenedDescendentsDidChangeFrom:(id)arg2 to:(id)arg3 changeSource:(id)arg4 ;
-(id)initWithCellClass:(Class)arg1 cellStyle:(long long)arg2 items:(id)arg3 representedObjects:(id)arg4 configurationBlock:(/*^block*/id)arg5 ;
-(void)updateCellForItem:(id)arg1 ;
-(unsigned long long)recursiveChildrenCount;
@end

