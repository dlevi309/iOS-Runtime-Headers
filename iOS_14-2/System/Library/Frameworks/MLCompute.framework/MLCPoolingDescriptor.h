/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCompute-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MLCPoolingDescriptor : NSObject <NSCopying> {

	BOOL _countIncludesPadding;
	int _poolingType;
	int _paddingPolicy;
	unsigned long long _kernelWidth;
	unsigned long long _kernelHeight;
	unsigned long long _strideInX;
	unsigned long long _strideInY;
	unsigned long long _dilationRateInX;
	unsigned long long _dilationRateInY;
	unsigned long long _paddingSizeInX;
	unsigned long long _paddingSizeInY;

}

@property (nonatomic,readonly) int poolingType;                                 //@synthesize poolingType=_poolingType - In the implementation block
@property (nonatomic,readonly) unsigned long long kernelWidth;                  //@synthesize kernelWidth=_kernelWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long kernelHeight;                 //@synthesize kernelHeight=_kernelHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long strideInX;                    //@synthesize strideInX=_strideInX - In the implementation block
@property (nonatomic,readonly) unsigned long long strideInY;                    //@synthesize strideInY=_strideInY - In the implementation block
@property (nonatomic,readonly) unsigned long long dilationRateInX;              //@synthesize dilationRateInX=_dilationRateInX - In the implementation block
@property (nonatomic,readonly) unsigned long long dilationRateInY;              //@synthesize dilationRateInY=_dilationRateInY - In the implementation block
@property (nonatomic,readonly) int paddingPolicy;                               //@synthesize paddingPolicy=_paddingPolicy - In the implementation block
@property (nonatomic,readonly) unsigned long long paddingSizeInX;               //@synthesize paddingSizeInX=_paddingSizeInX - In the implementation block
@property (nonatomic,readonly) unsigned long long paddingSizeInY;               //@synthesize paddingSizeInY=_paddingSizeInY - In the implementation block
@property (nonatomic,readonly) BOOL countIncludesPadding;                       //@synthesize countIncludesPadding=_countIncludesPadding - In the implementation block
+(id)poolingDescriptorWithType:(int)arg1 kernelSize:(unsigned long long)arg2 stride:(unsigned long long)arg3 ;
+(id)poolingDescriptorWithType:(int)arg1 kernelSizes:(id)arg2 strides:(id)arg3 paddingPolicy:(int)arg4 paddingSizes:(id)arg5 ;
+(id)poolingDescriptorWithType:(int)arg1 kernelSizes:(id)arg2 strides:(id)arg3 dilationRates:(id)arg4 paddingPolicy:(int)arg5 paddingSizes:(id)arg6 ;
+(id)maxPoolingDescriptorWithKernelSizes:(id)arg1 strides:(id)arg2 paddingPolicy:(int)arg3 paddingSizes:(id)arg4 ;
+(id)maxPoolingDescriptorWithKernelSizes:(id)arg1 strides:(id)arg2 dilationRates:(id)arg3 paddingPolicy:(int)arg4 paddingSizes:(id)arg5 ;
+(id)averagePoolingDescriptorWithKernelSizes:(id)arg1 strides:(id)arg2 paddingPolicy:(int)arg3 paddingSizes:(id)arg4 countIncludesPadding:(BOOL)arg5 ;
+(id)averagePoolingDescriptorWithKernelSizes:(id)arg1 strides:(id)arg2 dilationRates:(id)arg3 paddingPolicy:(int)arg4 paddingSizes:(id)arg5 countIncludesPadding:(BOOL)arg6 ;
+(id)l2NormPoolingDescriptorWithKernelSizes:(id)arg1 strides:(id)arg2 paddingPolicy:(int)arg3 paddingSizes:(id)arg4 ;
+(id)l2NormPoolingDescriptorWithKernelSizes:(id)arg1 strides:(id)arg2 dilationRates:(id)arg3 paddingPolicy:(int)arg4 paddingSizes:(id)arg5 ;
-(id)description;
-(unsigned long long)hash;
-(unsigned long long)kernelWidth;
-(unsigned long long)kernelHeight;
-(int)paddingPolicy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)strideInX;
-(unsigned long long)strideInY;
-(unsigned long long)paddingSizeInX;
-(unsigned long long)paddingSizeInY;
-(unsigned long long)dilationRateInX;
-(unsigned long long)dilationRateInY;
-(int)poolingType;
-(BOOL)countIncludesPadding;
-(id)initWithType:(int)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 strideInX:(unsigned long long)arg4 strideInY:(unsigned long long)arg5 dilationRateInX:(unsigned long long)arg6 dilationRateInY:(unsigned long long)arg7 paddingPolicy:(int)arg8 paddingSizeInX:(unsigned long long)arg9 paddingSizeInY:(unsigned long long)arg10 countIncludesPadding:(BOOL)arg11 ;
@end

