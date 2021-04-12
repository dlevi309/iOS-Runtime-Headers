/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/

#import <Symbolication/VMUAbstractSerializer.h>

@class NSData;

@interface VMUSimpleDeserializer : VMUAbstractSerializer {

	void* _cache;
	NSData* _data;

}
-(id)copyDeserializedStringWithError:(id*)arg1 ;
-(id)copyDeserializedStringWithID:(unsigned)arg1 error:(id*)arg2 ;
-(void)skipFields:(unsigned)arg1 ;
-(const char*)copyDeserializedNullTerminatedBytesWithError:(id*)arg1 ;
-(unsigned*)_deserializeValues:(unsigned)arg1 error:(id*)arg2 ;
-(id)initWithData:(id)arg1 ;
-(void)dealloc;
-(unsigned)deserialize32WithError:(id*)arg1 ;
-(unsigned long long)deserialize64WithError:(id*)arg1 ;
@end

