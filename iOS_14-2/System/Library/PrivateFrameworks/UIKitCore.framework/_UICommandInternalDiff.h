/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMutableSet, NSMutableDictionary, NSSet, NSDictionary;

@interface _UICommandInternalDiff : NSObject {

	NSMutableSet* _menuDeletes;
	NSMutableDictionary* _itemDeletes;
	NSMutableDictionary* _inserts;
	NSMutableDictionary* _replacements;

}

@property (nonatomic,readonly) NSSet * menuDeletes;                      //@synthesize menuDeletes=_menuDeletes - In the implementation block
@property (nonatomic,readonly) NSDictionary * itemDeletes;               //@synthesize itemDeletes=_itemDeletes - In the implementation block
@property (nonatomic,readonly) NSDictionary * inserts;                   //@synthesize inserts=_inserts - In the implementation block
@property (nonatomic,readonly) NSDictionary * replacements;              //@synthesize replacements=_replacements - In the implementation block
-(NSDictionary *)inserts;
-(NSDictionary *)replacements;
-(void)deleteMenu:(id)arg1 ;
-(NSSet *)menuDeletes;
-(NSDictionary *)itemDeletes;
-(id)_deletesForMenu:(id)arg1 ;
-(id)_replacementsForMenu:(id)arg1 ;
-(id)_parentInsertsForMenu:(id)arg1 ;
-(void)deleteItem:(id)arg1 inMenu:(id)arg2 ;
-(void)replaceItem:(id)arg1 inMenu:(id)arg2 withElements:(id)arg3 ;
-(void)insertAtStartElements:(id)arg1 atEndElements:(id)arg2 inMenu:(id)arg3 ;
-(void)insertBeforeElements:(id)arg1 afterElements:(id)arg2 aroundElement:(id)arg3 inMenu:(id)arg4 ;
-(void)insertFallbackBeforeElements:(id)arg1 fallbackAfterElements:(id)arg2 inMenu:(id)arg3 ;
@end

