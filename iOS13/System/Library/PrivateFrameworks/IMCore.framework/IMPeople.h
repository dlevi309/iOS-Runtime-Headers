/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@class NSMutableArray, NSArray;

@interface IMPeople : NSObject {

	NSMutableArray* _people;
	int _coalesceCount;
	BOOL _hidePeople;

}

@property (nonatomic,readonly) NSArray * groups; 
@property (nonatomic,readonly) NSArray * people; 
@property (assign,setter=setShouldHidePeople:,nonatomic) BOOL hidePeople;              //@synthesize hidePeople=_hidePeople - In the implementation block
@property (nonatomic,readonly) BOOL coalescingChanges; 
@property (nonatomic,readonly) unsigned long long count; 
-(void)dealloc;
-(unsigned long long)count;
-(NSArray *)people;
-(NSArray *)groups;
-(void)setShouldHidePeople:(BOOL)arg1 ;
-(void)beginCoalescedChanges;
-(void)imHandle:(id)arg1 buddyStatusChanged:(BOOL)arg2 ;
-(void)endCoalescedChanges;
-(BOOL)removeIMHandle:(id)arg1 ;
-(BOOL)addIMHandle:(id)arg1 ;
-(BOOL)hidePeople;
-(BOOL)coalescingChanges;
-(void)addedIMHandle:(id)arg1 ;
-(void)removedIMHandle:(id)arg1 ;
-(void)_addedPeople:(id)arg1 ;
-(BOOL)addPeopleFromArray:(id)arg1 skipMe:(BOOL)arg2 ;
-(void)removeNotificationObserver:(id)arg1 ;
-(void)addNotificationObserver:(id)arg1 selector:(SEL)arg2 ;
-(BOOL)containsIMHandle:(id)arg1 ;
-(BOOL)removePeopleFromArray:(id)arg1 ;
-(BOOL)addPeopleFromArray:(id)arg1 ;
@end

