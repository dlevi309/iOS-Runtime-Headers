/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)computeOutputLengthWithInputLength:(long long)arg1 kernelWidth:(long long)arg2 kernelStride:(long long)arg3 ;
-(unsigned long long)kernelWidth;
-(void)setKernelWidth:(unsigned long long)arg1 ;
-(unsigned long long)kernelHeight;
-(void)setKernelHeight:(unsigned long long)arg1 ;
-(unsigned long long)kernelStride;
-(void)setKernelStride:(unsigned long long)arg1 ;
@end

