/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@interface BWRingBuffer : NSObject <NSFastEnumeration> {

	void* _ringBuffer;
	int _outputIndex;
	int _inputIndex;
	int _length;
	unsigned long long _typeSize;

}
-(void)dealloc;
-(int)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_BW50*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void*)elementAtIndex:(int)arg1 ;
-(void*)firstElement;
-(void*)lastElement;
-(void)incrementRingIndex:(int*)arg1 ;
-(void)incrementRingIndex:(int*)arg1 withCount:(int)arg2 ;
-(int)lastElementIndex;
-(int)firstElementIndex;
-(int)lastElementIndexPlusOne;
-(id)initWithLength:(int)arg1 dataTypeSize:(unsigned long long)arg2 ;
-(void)appendElement:(void*)arg1 ;
-(void)removeFirstElements:(int)arg1 ;
@end

