/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)itemWithPrimaryText:(id)arg1 image:(id)arg2 ;
+(id)itemWithStyle:(long long)arg1 primaryText:(id)arg2 ;
+(id)itemWithCellClass:(Class)arg1 representedObject:(id)arg2 configurationBlock:(/*^block*/id)arg3 ;
+(id)itemWithPrimaryText:(id)arg1 ;
+(id)itemWithStyle:(long long)arg1 primaryText:(id)arg2 image:(id)arg3 ;
+(id)itemWithStyle:(long long)arg1 primaryText:(id)arg2 secondaryText:(id)arg3 ;
+(id)itemWithStyle:(long long)arg1 primaryText:(id)arg2 secondaryText:(id)arg3 image:(id)arg4 ;
+(id)itemWithStyle:(long long)arg1 representedObject:(id)arg2 configurationBlock:(/*^block*/id)arg3 ;
-(void)removeItem:(id)arg1 ;
-(void)addItem:(id)arg1 ;
-(NSArray *)children;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)isExpanded;
-(WFTableItemTreeNode *)node;
-(void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(WFTableSection *)section;
-(void)removeItemAtIndex:(unsigned long long)arg1 ;
-(Class)cellClass;
-(BOOL)isSelectable;
-(void)setSelectable:(BOOL)arg1 ;
-(void)setAccessoryType:(long long)arg1 ;
-(void)removeFromParent;
-(long long)accessoryType;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(void)setChildren:(NSArray *)arg1 ;
-(long long)style;
-(NSMutableArray *)mutableChildren;
-(void)configureCell:(id)arg1 ;
-(id)initWithCellClass:(Class)arg1 style:(long long)arg2 ;
-(void)updateChildren;
-(id)nextItemInSection;
@end

