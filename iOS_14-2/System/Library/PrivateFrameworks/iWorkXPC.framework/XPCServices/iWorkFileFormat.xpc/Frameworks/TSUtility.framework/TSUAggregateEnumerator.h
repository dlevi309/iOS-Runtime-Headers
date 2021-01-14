/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSMutableArray;

@interface TSUAggregateEnumerator : NSEnumerator {

	NSMutableArray* _objects;

}
+(id)aggregateEnumeratorWithObjects:(id)arg1 ;
-(id)nextObject;
-(id)init;
-(void)addObject:(id)arg1 ;
-(id)initWithObjects:(id)arg1 ;
-(void)dealloc;
-(id)initWithFirstObject:(id)arg1 argumentList:(char*)arg2 ;
@end

