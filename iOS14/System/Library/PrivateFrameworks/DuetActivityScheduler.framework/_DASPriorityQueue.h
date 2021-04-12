/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
*/


@class NSMutableDictionary, NSNumber;

@interface _DASPriorityQueue : NSObject {

	unsigned long long _count;
	NSMutableDictionary* _objects;
	NSNumber* _lowestPriority;
	NSNumber* _highestPriority;

}

@property (nonatomic,retain) NSMutableDictionary * objects;              //@synthesize objects=_objects - In the implementation block
@property (assign,nonatomic) unsigned long long count;                   //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) NSNumber * lowestPriority;                  //@synthesize lowestPriority=_lowestPriority - In the implementation block
@property (nonatomic,retain) NSNumber * highestPriority;                 //@synthesize highestPriority=_highestPriority - In the implementation block
+(id)priorityQueue;
-(NSMutableDictionary *)objects;
-(void)setObjects:(NSMutableDictionary *)arg1 ;
-(void)setCount:(unsigned long long)arg1 ;
-(id)init;
-(id)popLast;
-(NSNumber *)lowestPriority;
-(unsigned long long)count;
-(void)removeObject:(id)arg1 atPriority:(unsigned long long)arg2 ;
-(id)allObjects;
-(id)description;
-(void)setLowestPriority:(NSNumber *)arg1 ;
-(id)popFirst;
-(void)setHighestPriority:(NSNumber *)arg1 ;
-(NSNumber *)highestPriority;
-(void)addObject:(id)arg1 withPriority:(unsigned long long)arg2 ;
@end

