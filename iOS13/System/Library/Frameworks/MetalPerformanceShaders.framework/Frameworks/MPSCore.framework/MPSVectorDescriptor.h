/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(unsigned long long)length;
-(void)setLength:(unsigned long long)arg1 ;
-(unsigned)dataType;
-(unsigned long long)vectors;
-(void)setDataType:(unsigned)arg1 ;
-(unsigned long long)vectorBytes;
@end

