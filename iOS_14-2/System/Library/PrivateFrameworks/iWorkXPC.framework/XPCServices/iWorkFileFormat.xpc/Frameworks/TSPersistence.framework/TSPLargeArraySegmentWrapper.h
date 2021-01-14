/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <CoreFoundation/NSMutableArray.h>

@class TSPAbstractMutableLargeArraySegment;

@interface TSPLargeArraySegmentWrapper : NSMutableArray {

	TSPAbstractMutableLargeArraySegment* _backingStore;

}
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeLastObject;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(id)initWithLargeArraySegment:(id)arg1 ;
@end

