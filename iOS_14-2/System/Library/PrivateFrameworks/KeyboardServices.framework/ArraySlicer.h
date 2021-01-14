/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)consumed;
-(id)initWithArray:(id)arg1 sliceSize:(unsigned long long)arg2 ;
-(id)nextSlice;
-(id)unconsumed;
@end

