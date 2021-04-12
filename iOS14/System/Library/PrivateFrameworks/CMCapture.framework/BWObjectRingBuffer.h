/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@interface BWObjectRingBuffer : NSObject {

	id* _objects;
	SCD_Struct_BW8* _times;
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
-(void)setCapacity:(int)arg1 ;
-(void)clear;
-(int)capacity;
-(int)count;
-(id)lastObject;
-(id)firstObject;
-(id)description;
-(BOOL)ascending;
-(SCD_Struct_BW8)firstTime;
-(void)_forceAscendingTo:(BOOL)arg1 ;
-(void)_checkAscendingInsertAt:(int)arg1 object:(id)arg2 forTime:(SCD_Struct_BW8)arg3 ;
-(int)_findClosestOffsetToTimestamp:(SCD_Struct_BW8)arg1 ;
-(void)_enumerateObjectsStartingAtOffset:(int)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_reverseEnumerateObjectsStartingAtOffset:(int)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)getObjectForIndex:(int)arg1 ;
-(SCD_Struct_BW8)getTimeForIndex:(int)arg1 ;
-(void)reverseEnumerateObjectsStartingAt:(SCD_Struct_BW8)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)extractTimeRangeFrom:(SCD_Struct_BW8)arg1 until:(SCD_Struct_BW8)arg2 into:(id)arg3 times:(id)arg4 ;
-(BOOL)expectAscending;
-(void)appendObject:(id)arg1 forTime:(SCD_Struct_BW8)arg2 ;
-(void)flushEntriesEarlierThan:(SCD_Struct_BW8)arg1 ;
-(void)setExpectAscending:(BOOL)arg1 ;
-(id)initWithCapacity:(int)arg1 ;
-(SCD_Struct_BW8)lastTime;
-(void)enumerateObjectsStartingAt:(SCD_Struct_BW8)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

