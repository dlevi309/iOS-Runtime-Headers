/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/DataSourceKit.framework/DataSourceKit
*/


@class NSMutableOrderedSet;

@interface _DSKDataSourceSection : NSObject {

	id _sectionItem;
	NSMutableOrderedSet* __items;

}

@property (nonatomic,retain) NSMutableOrderedSet * _items;              //@synthesize _items=__items - In the implementation block
@property (nonatomic,retain) id sectionItem;                            //@synthesize sectionItem=_sectionItem - In the implementation block
@property (nonatomic,readonly) long long numberOfItems; 
-(NSMutableOrderedSet *)_items;
-(long long)numberOfItems;
-(void)deleteAllItems;
-(id)itemAtIndex:(long long)arg1 ;
-(BOOL)containsItem:(id)arg1 ;
-(void)appendItems:(id)arg1 ;
-(void)deleteItems:(id)arg1 ;
-(void)insertItems:(id)arg1 afterItem:(id)arg2 ;
-(id)sectionItem;
-(void)setSectionItem:(id)arg1 ;
-(void)insertItems:(id)arg1 beforeItem:(id)arg2 ;
-(id)initWithSectionItem:(id)arg1 ;
-(void)set_items:(NSMutableOrderedSet *)arg1 ;
@end

