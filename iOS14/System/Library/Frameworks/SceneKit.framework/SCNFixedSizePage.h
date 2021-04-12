/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


@protocol MTLBuffer;
@class NSMutableIndexSet;

@interface SCNFixedSizePage : NSObject {

	id<MTLBuffer> _buffer;
	unsigned long long _elementSize;
	NSMutableIndexSet* _freeIndices;

}

@property (nonatomic,readonly) id<MTLBuffer> buffer;              //@synthesize buffer=_buffer - In the implementation block
-(BOOL)isFull;
-(id<MTLBuffer>)buffer;
-(void)dealloc;
-(void)deallocateElementAtOffset:(unsigned long long)arg1 ;
-(unsigned long long)_allocateElement;
-(id)initWithBuffer:(id)arg1 elementSize:(unsigned long long)arg2 ;
-(BOOL)hasFreeElementsLeft;
-(id)newSubBuffer;
@end

