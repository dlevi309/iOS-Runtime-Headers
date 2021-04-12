/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id<MTLBuffer>)buffer;
-(BOOL)isFull;
-(void)deallocateElementAtOffset:(unsigned long long)arg1 ;
-(unsigned long long)_allocateElement;
-(id)initWithBuffer:(id)arg1 elementSize:(unsigned long long)arg2 ;
-(BOOL)hasFreeElementsLeft;
-(id)newSubBuffer;
@end

