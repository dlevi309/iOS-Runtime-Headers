/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/SSBaseDataSource.h>

@class NSMutableArray;

@interface SSSectionedDataSource : SSBaseDataSource {

	BOOL _shouldRemoveEmptySections;
	NSMutableArray* _sections;

}

@property (assign,nonatomic) BOOL shouldRemoveEmptySections;              //@synthesize shouldRemoveEmptySections=_shouldRemoveEmptySections - In the implementation block
@property (nonatomic,readonly) NSMutableArray * sections;                 //@synthesize sections=_sections - In the implementation block
-(id)init;
-(id)initWithItems:(id)arg1 ;
-(id)initWithSection:(id)arg1 ;
-(unsigned long long)numberOfSections;
-(unsigned long long)numberOfItemsInSection:(long long)arg1 ;
-(NSMutableArray *)sections;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(id)titleForHeaderInSection:(long long)arg1 ;
-(id)titleForFooterInSection:(long long)arg1 ;
-(double)heightForHeaderInSection:(long long)arg1 ;
-(double)heightForFooterInSection:(long long)arg1 ;
-(id)viewForHeaderInSection:(long long)arg1 ;
-(id)viewForFooterInSection:(long long)arg1 ;
-(void)moveSectionAtIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(id)sectionAtIndex:(long long)arg1 ;
-(void)clearSections;
-(id)initWithSections:(id)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(void)insertSection:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeSectionAtIndex:(long long)arg1 ;
-(void)appendSection:(id)arg1 ;
-(void)insertItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)removeItemAtIndexPath:(id)arg1 ;
-(id)sectionWithIdentifier:(id)arg1 ;
-(void)removeAllSections;
-(unsigned long long)indexOfSectionWithIdentifier:(id)arg1 ;
-(void)appendItems:(id)arg1 toSection:(long long)arg2 ;
-(void)insertItems:(id)arg1 atIndexes:(id)arg2 inSection:(long long)arg3 ;
-(void)replaceItemAtIndexPath:(id)arg1 withItem:(id)arg2 ;
-(void)removeItemsInRange:(NSRange)arg1 inSection:(long long)arg2 ;
-(void)removeItemsAtIndexes:(id)arg1 inSection:(long long)arg2 ;
-(void)insertSections:(id)arg1 atIndexes:(id)arg2 ;
-(BOOL)adjustSectionAtIndex:(unsigned long long)arg1 toNumberOfItems:(unsigned long long)arg2 ;
-(void)removeSectionsInRange:(NSRange)arg1 ;
-(void)removeSectionsAtIndexes:(id)arg1 ;
-(void)removeSectionWithIdentifier:(id)arg1 ;
-(id)headerFooterViewWithClass:(Class)arg1 ;
-(BOOL)shouldRemoveEmptySections;
-(void)setShouldRemoveEmptySections:(BOOL)arg1 ;
@end

