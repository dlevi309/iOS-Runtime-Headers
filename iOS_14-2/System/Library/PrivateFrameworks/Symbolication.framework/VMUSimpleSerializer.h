/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/

#import <Symbolication/VMUAbstractSerializer.h>

@interface VMUSimpleSerializer : VMUAbstractSerializer {

	void* _map;
	unsigned _internCursor;

}
-(id)init;
-(unsigned)serializeNullTerminatedBytes:(const char*)arg1 ;
-(void)_serializeValues:(unsigned*)arg1 count:(unsigned)arg2 ;
-(unsigned)serializeString:(id)arg1 ;
-(void)dealloc;
-(void)serialize32:(unsigned)arg1 ;
-(void)serialize64:(unsigned long long)arg1 ;
-(id)copyContiguousData;
@end

