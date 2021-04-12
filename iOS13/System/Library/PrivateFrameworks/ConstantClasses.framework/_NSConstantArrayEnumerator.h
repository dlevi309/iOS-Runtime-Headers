/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConstantClasses.framework/ConstantClasses
*/

#import <CoreFoundation/NSEnumerator.h>

@interface _NSConstantArrayEnumerator : NSEnumerator {

	id* objects;
	unsigned long long capacity;
	unsigned long long index;

}
-(id)nextObject;
-(id)allObjects;
-(id)initWithArray:(id*)arg1 capacity:(unsigned long long)arg2 ;
@end

