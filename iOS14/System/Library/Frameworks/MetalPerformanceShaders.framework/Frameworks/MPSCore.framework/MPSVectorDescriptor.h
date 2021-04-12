/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/


@interface MPSVectorDescriptor : NSObject {

	unsigned long long _length;
	unsigned long long _vectors;
	unsigned long long _vectorBytes;
	unsigned _dataType;

}

@property (assign,nonatomic) unsigned long long length;                     //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) unsigned long long vectors;                  //@synthesize vectors=_vectors - In the implementation block
@property (assign,nonatomic) unsigned dataType;                             //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,readonly) unsigned long long vectorBytes;              //@synthesize vectorBytes=_vectorBytes - In the implementation block
+(id)vectorDescriptorWithLength:(unsigned long long)arg1 dataType:(unsigned)arg2 ;
+(unsigned long long)vectorBytesForLength:(unsigned long long)arg1 dataType:(unsigned)arg2 ;
+(id)vectorDescriptorWithLength:(unsigned long long)arg1 vectors:(unsigned long long)arg2 vectorBytes:(unsigned long long)arg3 dataType:(unsigned)arg4 ;
-(unsigned)dataType;
-(void)setLength:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)vectors;
-(void)setDataType:(unsigned)arg1 ;
-(unsigned long long)length;
-(unsigned long long)vectorBytes;
@end

