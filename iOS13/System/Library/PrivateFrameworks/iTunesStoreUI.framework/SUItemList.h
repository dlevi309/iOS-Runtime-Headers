/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSDictionary, NSArray;

@interface SUItemList : NSObject <NSCopying> {

	NSMutableArray* _groups;
	NSDictionary* _hintText;
	BOOL _ignoresEmptySections;

}

@property (nonatomic,readonly) long long numberOfItems; 
@property (assign,nonatomic) BOOL ignoresEmptySections;                   //@synthesize ignoresEmptySections=_ignoresEmptySections - In the implementation block
@property (nonatomic,readonly) long long numberOfSections; 
@property (nonatomic,readonly) NSArray * sectionIndexTitles; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setItems:(id)arg1 ;
-(long long)numberOfSections;
-(long long)numberOfItems;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(NSArray *)sectionIndexTitles;
-(id)itemAtIndexPath:(id)arg1 ;
-(void)removeItemAtIndexPath:(id)arg1 ;
-(id)copyItems;
-(void)setItemsFromPropertyList:(id)arg1 ;
-(void)setHintText:(id)arg1 ;
-(long long)sectionIndexForIndexTitle:(id)arg1 atIndex:(long long)arg2 ;
-(id)indexPathOfItemWithIdentifier:(unsigned long long)arg1 ;
-(id)indexPathOfItem:(id)arg1 ;
-(void)replaceItemAtIndexPath:(id)arg1 withItems:(id)arg2 ;
-(void)setIgnoresEmptySections:(BOOL)arg1 ;
-(id)itemsForSectionAtIndex:(long long)arg1 ;
-(id)sectionItemForSectionAtIndex:(long long)arg1 ;
-(id)_groupAtExternalIndex:(long long)arg1 ;
-(void)insertItems:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_removeHiddenItemsFromArray:(id)arg1 ;
-(id)hintTextForKey:(id)arg1 ;
-(BOOL)ignoresEmptySections;
@end

