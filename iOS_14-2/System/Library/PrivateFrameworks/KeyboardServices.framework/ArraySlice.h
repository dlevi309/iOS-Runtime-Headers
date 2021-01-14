/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

