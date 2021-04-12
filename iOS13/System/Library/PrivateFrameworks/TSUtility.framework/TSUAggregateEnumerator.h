/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSMutableArray;

@interface TSUAggregateEnumerator : NSEnumerator {

	NSMutableArray* _objects;

}
+(id)aggregateEnumeratorWithObjects:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)addObject:(id)arg1 ;
-(id)nextObject;
-(id)initWithObjects:(id)arg1 ;
-(id)initWithFirstObject:(id)arg1 argumentList:(char*)arg2 ;
@end

