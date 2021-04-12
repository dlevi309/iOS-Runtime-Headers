/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>

@class NSMutableArray, HMFUnfairLock;

@interface HMIVideoEventBuffer : HMFObject {

	NSMutableArray* _data;
	HMFUnfairLock* _lock;
	long long _maxCapacity;

}

@property (readonly) unsigned long long count; 
-(unsigned long long)count;
-(id)description;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(id)initWithMaxCapacity:(long long)arg1 ;
-(id)objectsInTimeRange:(SCD_Struct_HM4)arg1 includeEnd:(BOOL)arg2 ;
-(id)extractObjectsInTimeRange:(SCD_Struct_HM4)arg1 ;
-(id)neighborsOfObject:(id)arg1 ;
@end

