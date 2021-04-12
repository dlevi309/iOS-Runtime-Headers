/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

@class NSArray;


@protocol WBSHistorySessions
@property (nonatomic,copy,readonly) NSArray * orderedSessions; 
@property (nonatomic,readonly) unsigned long long numberOfSessions; 
@required
-(unsigned long long)numberOfItemsVisitedInSession:(id)arg1;
-(id)itemLastVisitedInSession:(id)arg1 atIndex:(unsigned long long)arg2;
-(id)itemsLastVisitedInSession:(id)arg1;
-(void)enumerateOrderedItemsLastVisitedInSession:(id)arg1 usingBlock:(/*^block*/id)arg2;
-(void)orderedItemsNewerThanDate:(id)arg1 maxCount:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3;
-(NSArray *)orderedSessions;
-(unsigned long long)numberOfSessions;

@end

