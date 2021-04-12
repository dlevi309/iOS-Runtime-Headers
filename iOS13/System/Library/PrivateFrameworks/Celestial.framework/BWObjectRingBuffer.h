/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@interface BWObjectRingBuffer : NSObject {

	id* _objects;
	SCD_Struct_BW2* _times;
	int _capacity;
	int _count;
	int _oldest;
	BOOL _ascending;
	BOOL _expectAscending;

}

@property (nonatomic,readonly) int count;                       //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) int capacity;                      //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,readonly) BOOL ascending;                  //@synthesize ascending=_ascending - In the implementation block
@property (assign,nonatomic) BOOL expectAscending;              //@synthesize expectAscending=_expectAscending - In the implementation block
+(void)initialize;
-(void)dealloc;
-(id)description;
-(id)initWithCapacity:(int)arg1 ;
-(int)count;
-(void)clear;
-(id)firstObject;
-(id)lastObject;
-(int)capacity;
-(BOOL)ascending;
-(void)setCapacity:(int)arg1 ;
-(SCD_Struct_BW2)lastTime;
-(void)_enumerateObjectsStartingAtOffset:(int)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_checkAscendingInsertAt:(int)arg1 object:(id)arg2 forTime:(SCD_Struct_BW2)arg3 ;
-(int)_findClosestOffsetToTimestamp:(SCD_Struct_BW2)arg1 ;
-(void)_reverseEnumerateObjectsStartingAtOffset:(int)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateObjectsStartingAt:(SCD_Struct_BW2)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_forceAscendingTo:(BOOL)arg1 ;
-(void)appendObject:(id)arg1 forTime:(SCD_Struct_BW2)arg2 ;
-(SCD_Struct_BW2)firstTime;
-(id)getObjectForIndex:(int)arg1 ;
-(SCD_Struct_BW2)getTimeForIndex:(int)arg1 ;
-(void)reverseEnumerateObjectsStartingAt:(SCD_Struct_BW2)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)extractTimeRangeFrom:(SCD_Struct_BW2)arg1 until:(SCD_Struct_BW2)arg2 into:(id)arg3 times:(id)arg4 ;
-(void)flushEntriesEarlierThan:(SCD_Struct_BW2)arg1 ;
-(BOOL)expectAscending;
-(void)setExpectAscending:(BOOL)arg1 ;
@end

