/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
*/


@class NSArray;

@interface ArraySlicer : NSObject {

	unsigned long long _sliceSize;
	unsigned long long _count;
	unsigned long long _offset;
	NSArray* _array;

}

@property (nonatomic,readonly) unsigned long long remaining; 
-(unsigned long long)remaining;
-(id)initWithArray:(id)arg1 sliceSize:(unsigned long long)arg2 ;
-(id)nextSlice;
-(id)unconsumed;
-(id)consumed;
@end

