/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


#import <CoreDuet/CoreDuet-Structs.h>
@class NSString, NSArray, PETEventTracker;

@interface _DKEventStatsCounterInternal : NSObject {

	os_unfair_lock_s _lock;
	BOOL _hasType;
	BOOL _hasResult;
	unsigned long long _numCounters;
	unsigned long long* _counters;
	NSString* _eventName;
	NSString* _eventType;
	NSArray* _typeValues;
	NSString* _domain;
	PETEventTracker* _eventTracker;

}

@property (nonatomic,readonly) NSString * eventName;              //@synthesize eventName=_eventName - In the implementation block
@property (nonatomic,readonly) NSString * eventType;              //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) NSArray * typeValues;              //@synthesize typeValues=_typeValues - In the implementation block
@property (nonatomic,readonly) NSString * domain;                 //@synthesize domain=_domain - In the implementation block
@property (readonly) PETEventTracker * eventTracker;              //@synthesize eventTracker=_eventTracker - In the implementation block
-(void)dealloc;
-(NSString *)domain;
-(NSString *)eventName;
-(id)initWithCollectionName:(id)arg1 eventName:(id)arg2 eventType:(id)arg3 eventTypePossibleValues:(id)arg4 hasResult:(BOOL)arg5 scalar:(BOOL)arg6 ;
-(long long)indexOfTypeValue:(id)arg1 success:(BOOL)arg2 ;
-(id)initWithCollectionName:(id)arg1 eventName:(id)arg2 eventType:(id)arg3 eventTypePossibleValues:(id)arg4 hasResult:(BOOL)arg5 ;
-(void)incrementCountByNumber:(unsigned long long)arg1 typeValue:(id)arg2 success:(BOOL)arg3 ;
-(unsigned long long)countWithTypeValue:(id)arg1 success:(BOOL)arg2 ;
-(NSString *)eventType;
-(NSArray *)typeValues;
-(PETEventTracker *)eventTracker;
@end

