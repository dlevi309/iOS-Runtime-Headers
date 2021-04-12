/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/


@interface NGMRollingBitmaskBuffer : NSObject {

	unsigned _upper_buffer_index;
	unsigned _valid_values_buffer_size;
	char* _valid_values_buffer;

}

@property (assign) unsigned upper_buffer_index;                    //@synthesize upper_buffer_index=_upper_buffer_index - In the implementation block
@property (assign) char* valid_values_buffer;                      //@synthesize valid_values_buffer=_valid_values_buffer - In the implementation block
@property (assign) unsigned valid_values_buffer_size;              //@synthesize valid_values_buffer_size=_valid_values_buffer_size - In the implementation block
-(id)init;
-(void)dealloc;
-(id)bufferData;
-(char*)valid_values_buffer;
-(unsigned)valid_values_buffer_size;
-(id)initWithData:(id)arg1 upperBufferIndex:(unsigned)arg2 ;
-(BOOL)processIncomingCounter:(unsigned)arg1 ;
-(unsigned)upper_buffer_index;
-(void)setUpper_buffer_index:(unsigned)arg1 ;
-(void)setValid_values_buffer:(char*)arg1 ;
-(void)setValid_values_buffer_size:(unsigned)arg1 ;
@end

