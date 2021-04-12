/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@class NSMutableArray;

@interface ARTimeKeyedList : NSObject {

	unsigned long long _maxSize;
	NSMutableArray* _times;
	NSMutableArray* _objects;

}
-(id)init;
-(id)description;
-(void)clear;
-(id)initWithMaxSize:(unsigned long long)arg1 ;
-(void)appendObject:(id)arg1 forTime:(double)arg2 ;
-(id)nearestObjectForTime:(double)arg1 ;
-(unsigned long long)insertionIndexForTime:(id)arg1 ;
@end

