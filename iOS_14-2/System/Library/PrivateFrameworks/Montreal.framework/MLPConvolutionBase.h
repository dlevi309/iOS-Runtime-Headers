/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
*/

#import <Montreal/MLPImageLayer.h>

@interface MLPConvolutionBase : MLPImageLayer {

	unsigned long long _kernelWidth;
	unsigned long long _kernelHeight;
	unsigned long long _kernelStride;

}

@property (assign) unsigned long long kernelWidth;               //@synthesize kernelWidth=_kernelWidth - In the implementation block
@property (assign) unsigned long long kernelHeight;              //@synthesize kernelHeight=_kernelHeight - In the implementation block
@property (assign) unsigned long long kernelStride;              //@synthesize kernelStride=_kernelStride - In the implementation block
-(unsigned long long)kernelStride;
-(unsigned long long)kernelWidth;
-(unsigned long long)kernelHeight;
-(unsigned long long)computeOutputLengthWithInputLength:(long long)arg1 kernelWidth:(long long)arg2 kernelStride:(long long)arg3 ;
-(void)setKernelWidth:(unsigned long long)arg1 ;
-(void)setKernelHeight:(unsigned long long)arg1 ;
-(void)setKernelStride:(unsigned long long)arg1 ;
@end

