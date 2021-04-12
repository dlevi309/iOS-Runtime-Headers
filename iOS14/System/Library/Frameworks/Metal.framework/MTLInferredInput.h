/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


@interface MTLInferredInput : NSObject {

	unsigned long long _dataType;
	unsigned long long _pixelFormat;
	unsigned long long _aluType;
	unsigned long long _offset;
	unsigned long long _bufferIndex;
	unsigned long long _stride;
	unsigned long long _stepFunction;
	unsigned long long _stepRate;
	BOOL _baseInstanceUnused;

}

@property (readonly) unsigned long long dataType;                  //@synthesize dataType=_dataType - In the implementation block
@property (readonly) unsigned long long pixelFormat;               //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (readonly) unsigned long long aluType;                   //@synthesize aluType=_aluType - In the implementation block
@property (readonly) unsigned long long offset;                    //@synthesize offset=_offset - In the implementation block
@property (readonly) unsigned long long bufferIndex;               //@synthesize bufferIndex=_bufferIndex - In the implementation block
@property (readonly) unsigned long long stride;                    //@synthesize stride=_stride - In the implementation block
@property (readonly) unsigned long long stepFunction;              //@synthesize stepFunction=_stepFunction - In the implementation block
@property (readonly) unsigned long long stepRate;                  //@synthesize stepRate=_stepRate - In the implementation block
@property (readonly) BOOL baseInstanceUnused;                      //@synthesize baseInstanceUnused=_baseInstanceUnused - In the implementation block
-(unsigned long long)dataType;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)pixelFormat;
-(unsigned long long)stride;
-(unsigned long long)stepRate;
-(unsigned long long)offset;
-(id)description;
-(BOOL)baseInstanceUnused;
-(unsigned long long)bufferIndex;
-(unsigned long long)aluType;
-(id)initWithDataType:(unsigned long long)arg1 pixelFormat:(unsigned long long)arg2 aluType:(unsigned long long)arg3 offset:(unsigned long long)arg4 bufferIndex:(unsigned long long)arg5 stride:(unsigned long long)arg6 stepFunction:(unsigned long long)arg7 stepRate:(unsigned long long)arg8 baseInstanceUnused:(BOOL)arg9 ;
-(unsigned long long)stepFunction;
@end

