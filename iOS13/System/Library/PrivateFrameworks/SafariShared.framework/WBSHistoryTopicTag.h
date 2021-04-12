/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/WBSHistoryTag.h>

@class NSMutableOrderedSet, NSArray;

@interface WBSHistoryTopicTag : WBSHistoryTag {

	NSMutableOrderedSet* _taggedItems;

}

@property (nonatomic,copy,readonly) NSArray * historyItems; 
+(void)initialize;
-(void)dealloc;
-(void)_historyItemsWereRemoved:(id)arg1 ;
-(NSArray *)historyItems;
-(id)initWithTitle:(id)arg1 identifier:(id)arg2 databaseID:(long long)arg3 modificationTimestamp:(double)arg4 level:(long long)arg5 ;
-(void)removeHistoryItems:(id)arg1 ;
-(id)initWithTag:(id)arg1 historyItems:(id)arg2 ;
-(void)tagHistoryItem:(id)arg1 ;
-(void)groupHistoryItemsBySessionWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)containsHistoryItem:(id)arg1 ;
@end

