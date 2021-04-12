/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
*/

#import <CoreFoundation/NSArray.h>

@class NSArray;

@interface ArraySlice : NSArray {

	NSArray* _array;
	unsigned long long _offset;
	unsigned long long _count;

}
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)initWithArray:(id)arg1 offset:(unsigned long long)arg2 count:(unsigned long long)arg3 ;
@end

