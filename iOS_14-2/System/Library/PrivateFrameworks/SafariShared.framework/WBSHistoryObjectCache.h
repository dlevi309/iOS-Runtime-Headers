/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


#import <SafariShared/SafariShared-Structs.h>
@interface WBSHistoryObjectCache : NSObject {

	unordered_map<long long, WBSHistoryItem *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, WBSHistoryItem *> > >* _itemsByDatabaseID;
	unordered_map<long long, WBSHistoryVisit *__weak, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, WBSHistoryVisit *__weak> > >* _weakVisitsByDatabaseID;

}
-(void)clear;
-(void)_clearNilReferences;
-(id)init;
-(id)allItems;
-(void)reserveItemCapacity:(long long)arg1 ;
-(void)setItem:(id)arg1 forID:(long long)arg2 ;
-(void)changeVisitIDs:(id)arg1 ;
-(id)visitForID:(long long)arg1 ;
-(void)changeItemIDs:(id)arg1 ;
-(id)itemForID:(long long)arg1 ;
-(void)removeItemWithID:(long long)arg1 ;
-(void)setVisit:(id)arg1 forID:(long long)arg2 ;
@end

