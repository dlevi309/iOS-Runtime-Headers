/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@interface BWRingBuffer : NSObject <NSFastEnumeration> {

	void* _ringBuffer;
	int _outputIndex;
	int _inputIndex;
	int _length;
	unsigned long long _typeSize;

}
-(int)lastElementIndexPlusOne;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_BW116*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)removeFirstElements:(int)arg1 ;
-(int)count;
-(void*)elementAtIndex:(int)arg1 ;
-(int)firstElementIndex;
-(id)initWithLength:(int)arg1 dataTypeSize:(unsigned long long)arg2 ;
-(void)appendElement:(void*)arg1 ;
-(void)incrementRingIndex:(int*)arg1 ;
-(void)incrementRingIndex:(int*)arg1 withCount:(int)arg2 ;
-(void*)firstElement;
-(void*)lastElement;
-(int)lastElementIndex;
-(void)dealloc;
@end

