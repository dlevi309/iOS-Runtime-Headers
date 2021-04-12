/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/

#import <Symbolication/VMUAbstractSerializer.h>

@interface VMUSimpleSerializer : VMUAbstractSerializer {

	void* _map;
	unsigned _internCursor;

}
-(id)init;
-(void)dealloc;
-(unsigned)serializeString:(id)arg1 ;
-(void)serialize32:(unsigned)arg1 ;
-(void)serialize64:(unsigned long long)arg1 ;
-(id)copyContiguousData;
-(unsigned)serializeNullTerminatedBytes:(const char*)arg1 ;
-(void)_serializeValues:(unsigned*)arg1 count:(unsigned)arg2 ;
@end

