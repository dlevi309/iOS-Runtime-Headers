/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/WBSHistoryTag.h>

@class NSMutableOrderedSet, NSArray;

@interface WBSHistoryTopicTag : WBSHistoryTag {

	NSMutableOrderedSet* _taggedItems;

}

@property (nonatomic,copy,readonly) NSArray * historyItems; 
+(void)initialize;
-(void)groupHistoryItemsBySessionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeHistoryItems:(id)arg1 ;
-(BOOL)containsHistoryItem:(id)arg1 ;
-(id)initWithTag:(id)arg1 historyItems:(id)arg2 ;
-(void)tagHistoryItem:(id)arg1 ;
-(NSArray *)historyItems;
-(id)initWithTitle:(id)arg1 identifier:(id)arg2 databaseID:(long long)arg3 modificationTimestamp:(double)arg4 level:(long long)arg5 ;
-(void)_historyItemsWereRemoved:(id)arg1 ;
-(void)dealloc;
@end

