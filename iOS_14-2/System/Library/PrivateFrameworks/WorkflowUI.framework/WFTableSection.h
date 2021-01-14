/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <libobjc.A.dylib/WFTreeObserver.h>

@class NSString, WFTableSectionTreeNode, NSMutableArray, WFTableDataSource;

@interface WFTableSection : NSObject <WFTreeObserver> {

	NSString* _headerText;
	NSString* _footerText;
	WFTableSectionTreeNode* _node;
	NSMutableArray* _mutableItems;

}

@property (nonatomic,readonly) WFTableSectionTreeNode * node;                      //@synthesize node=_node - In the implementation block
@property (nonatomic,readonly) NSMutableArray * mutableItems;                      //@synthesize mutableItems=_mutableItems - In the implementation block
@property (nonatomic,__weak,readonly) WFTableDataSource * dataSource; 
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
-(unsigned long long)currentIndex;
-(id)initWithItems:(id)arg1 ;
-(void)setFooterText:(NSString *)arg1 ;
-(WFTableSectionTreeNode *)node;
-(id)tableView;
-(WFTableDataSource *)dataSource;
-(NSString *)footerText;
-(void)setHeaderText:(NSString *)arg1 ;
-(NSString *)headerText;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSMutableArray *)mutableItems;
-(void)treeNode:(id)arg1 flattenedDescendentsDidChangeFrom:(id)arg2 to:(id)arg3 changeSource:(id)arg4 ;
-(void)applyItems:(id)arg1 ;
-(void)updateCellForItem:(id)arg1 ;
-(unsigned long long)recursiveChildrenCount;
@end

