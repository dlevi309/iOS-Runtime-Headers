/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@class NSMutableArray;

@interface ARTimeKeyedList : NSObject {

	unsigned long long _maxSize;
	NSMutableArray* _times;
	NSMutableArray* _objects;

}
-(void)clear;
-(id)init;
-(id)initWithMaxSize:(unsigned long long)arg1 ;
-(id)description;
-(void)appendObject:(id)arg1 forTime:(double)arg2 ;
-(id)nearestObjectForTime:(double)arg1 ;
-(unsigned long long)insertionIndexForTime:(id)arg1 ;
@end

