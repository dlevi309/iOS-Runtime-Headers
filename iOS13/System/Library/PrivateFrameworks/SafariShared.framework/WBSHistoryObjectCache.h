/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


#import <SafariShared/SafariShared-Structs.h>
@interface WBSHistoryObjectCache : NSObject {

	unordered_map<long long, WBSHistoryItem *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, WBSHistoryItem *> > >* _itemsByDatabaseID;
	unordered_map<long long, WBSHistoryVisit *__weak, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, WBSHistoryVisit *__weak> > >* _weakVisitsByDatabaseID;

}
-(id)init;
-(void)clear;
-(id)allItems;
-(void)_clearNilReferences;
-(id)itemForID:(long long)arg1 ;
-(void)setItem:(id)arg1 forID:(long long)arg2 ;
-(void)removeItemWithID:(long long)arg1 ;
-(void)changeItemIDs:(id)arg1 ;
-(void)reserveItemCapacity:(long long)arg1 ;
-(id)visitForID:(long long)arg1 ;
-(void)setVisit:(id)arg1 forID:(long long)arg2 ;
-(void)changeVisitIDs:(id)arg1 ;
@end

