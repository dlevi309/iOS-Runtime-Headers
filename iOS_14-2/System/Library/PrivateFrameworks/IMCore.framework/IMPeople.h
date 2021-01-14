/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)removeIMHandle:(id)arg1 ;
-(BOOL)addIMHandle:(id)arg1 ;
-(void)imHandle:(id)arg1 buddyStatusChanged:(BOOL)arg2 ;
-(unsigned long long)count;
-(BOOL)addPeopleFromArray:(id)arg1 skipMe:(BOOL)arg2 ;
-(void)addNotificationObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)endCoalescedChanges;
-(NSArray *)groups;
-(void)removedIMHandle:(id)arg1 ;
-(void)removeNotificationObserver:(id)arg1 ;
-(void)_addedPeople:(id)arg1 ;
-(NSArray *)people;
-(BOOL)hidePeople;
-(void)addedIMHandle:(id)arg1 ;
-(BOOL)removePeopleFromArray:(id)arg1 ;
-(BOOL)containsIMHandle:(id)arg1 ;
-(BOOL)coalescingChanges;
-(void)beginCoalescedChanges;
-(void)setShouldHidePeople:(BOOL)arg1 ;
-(BOOL)addPeopleFromArray:(id)arg1 ;
-(void)dealloc;
@end

