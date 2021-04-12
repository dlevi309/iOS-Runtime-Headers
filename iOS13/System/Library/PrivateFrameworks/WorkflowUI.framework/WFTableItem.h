/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@class NSMutableArray, WFTableItemTreeNode, WFTableSection, NSArray;

@interface WFTableItem : NSObject {

	BOOL _selectable;
	BOOL _expanded;
	Class _cellClass;
	long long _style;
	long long _accessoryType;
	NSMutableArray* _mutableChildren;
	WFTableItemTreeNode* _node;

}

@property (nonatomic,readonly) NSMutableArray * mutableChildren;               //@synthesize mutableChildren=_mutableChildren - In the implementation block
@property (nonatomic,readonly) WFTableItemTreeNode * node;                     //@synthesize node=_node - In the implementation block
@property (nonatomic,__weak,readonly) WFTableSection * section; 
@property (nonatomic,readonly) Class cellClass;                                //@synthesize cellClass=_cellClass - In the implementation block
@property (nonatomic,readonly) long long style;                                //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long accessoryType;                          //@synthesize accessoryType=_accessoryType - In the implementation block
@property (assign,getter=isSelectable,nonatomic) BOOL selectable;              //@synthesize selectable=_selectable - In the implementation block
@property (nonatomic,copy) NSArray * children; 
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                  //@synthesize expanded=_expanded - In the implementation block
+(id)itemWithPrimaryText:(id)arg1 ;
+(id)itemWithPrimaryText:(id)arg1 image:(id)arg2 ;
+(id)itemWithStyle:(long long)arg1 primaryText:(id)arg2 ;
+(id)itemWithStyle:(long long)arg1 primaryText:(id)arg2 image:(id)arg3 ;
+(id)itemWithStyle:(long long)arg1 primaryText:(id)arg2 secondaryText:(id)arg3 ;
+(id)itemWithStyle:(long long)arg1 primaryText:(id)arg2 secondaryText:(id)arg3 image:(id)arg4 ;
+(id)itemWithStyle:(long long)arg1 representedObject:(id)arg2 configurationBlock:(/*^block*/id)arg3 ;
+(id)itemWithCellClass:(Class)arg1 representedObject:(id)arg2 configurationBlock:(/*^block*/id)arg3 ;
-(void)removeItem:(id)arg1 ;
-(long long)style;
-(WFTableItemTreeNode *)node;
-(BOOL)isSelectable;
-(void)addItem:(id)arg1 ;
-(NSArray *)children;
-(void)setChildren:(NSArray *)arg1 ;
-(WFTableSection *)section;
-(long long)accessoryType;
-(void)setAccessoryType:(long long)arg1 ;
-(void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeItemAtIndex:(unsigned long long)arg1 ;
-(BOOL)isExpanded;
-(void)setExpanded:(BOOL)arg1 ;
-(void)setSelectable:(BOOL)arg1 ;
-(Class)cellClass;
-(void)removeFromParent;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(NSMutableArray *)mutableChildren;
-(id)initWithCellClass:(Class)arg1 style:(long long)arg2 ;
-(void)updateChildren;
-(void)configureCell:(id)arg1 ;
-(id)nextItemInSection;
@end

