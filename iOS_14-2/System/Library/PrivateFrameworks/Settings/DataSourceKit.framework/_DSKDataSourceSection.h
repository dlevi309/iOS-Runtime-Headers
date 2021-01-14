/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)itemAtIndex:(long long)arg1 ;
-(void)deleteAllItems;
-(NSMutableOrderedSet *)_items;
-(id)sectionItem;
-(long long)numberOfItems;
-(void)insertItems:(id)arg1 afterItem:(id)arg2 ;
-(BOOL)containsItem:(id)arg1 ;
-(void)insertItems:(id)arg1 beforeItem:(id)arg2 ;
-(void)appendItems:(id)arg1 ;
-(void)setSectionItem:(id)arg1 ;
-(void)deleteItems:(id)arg1 ;
-(id)initWithSectionItem:(id)arg1 ;
-(void)set_items:(NSMutableOrderedSet *)arg1 ;
@end

