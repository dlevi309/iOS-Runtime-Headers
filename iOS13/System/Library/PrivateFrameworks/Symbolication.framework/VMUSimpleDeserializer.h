/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/

#import <Symbolication/VMUAbstractSerializer.h>

@class NSData;

@interface VMUSimpleDeserializer : VMUAbstractSerializer {

	void* _cache;
	NSData* _data;

}
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(unsigned)deserialize32;
-(unsigned long long)deserialize64;
-(id)copyDeserializedString;
-(id)copyDeserializedStringWithID:(unsigned)arg1 ;
-(void)skipFields:(unsigned)arg1 ;
-(const char*)copyDeserializedNullTerminatedBytes;
-(unsigned*)_deserializeValues:(unsigned)arg1 ;
@end

