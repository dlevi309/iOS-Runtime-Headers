/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/SSBaseDataSource.h>

@class NSString, NSMutableArray;

@interface SSArrayDataSource : SSBaseDataSource {

	id _target;
	NSString* _keyPath;
	NSMutableArray* _items;

}

@property (nonatomic,retain) id target;                           //@synthesize target=_target - In the implementation block
@property (nonatomic,copy) NSString * keyPath;                    //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,retain) NSMutableArray * items;              //@synthesize items=_items - In the implementation block
-(void)dealloc;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(NSString *)keyPath;
-(void)removeAllItems;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(void)appendItem:(id)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(unsigned long long)numberOfSections;
-(unsigned long long)numberOfItemsInSection:(long long)arg1 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeItemAtIndex:(unsigned long long)arg1 ;
-(void)setKeyPath:(NSString *)arg1 ;
-(void)clearItems;
-(id)itemAtIndexPath:(id)arg1 ;
-(void)removeItems:(id)arg1 ;
-(id)allItems;
-(void)appendItems:(id)arg1 ;
-(void)removeItemsAtIndexes:(id)arg1 ;
-(void)insertItems:(id)arg1 atIndexes:(id)arg2 ;
-(void)moveItemAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(id)initWithTarget:(id)arg1 keyPath:(id)arg2 ;
-(void)updateItems:(id)arg1 ;
-(void)replaceItemAtIndex:(unsigned long long)arg1 withItem:(id)arg2 ;
-(void)replaceItemsInRange:(NSRange)arg1 withItemsFromArray:(id)arg2 ;
-(void)replaceItemsAtIndexes:(id)arg1 withItemsFromArray:(id)arg2 ;
-(void)removeItemsInRange:(NSRange)arg1 ;
-(id)indexPathForItemWithId:(id)arg1 ;
-(void)registerKVO;
-(void)unregisterKVO;
@end

