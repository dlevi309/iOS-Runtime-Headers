/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLBufferLayoutDescriptor.h>

@interface MTLBufferLayoutDescriptorInternal : MTLBufferLayoutDescriptor {

	unsigned long long _stride;
	unsigned long long _stepFunction;
	unsigned long long _instanceStepRate;

}
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStepFunction:(unsigned long long)arg1 ;
-(void)setStride:(unsigned long long)arg1 ;
-(unsigned long long)stride;
-(void)setStepRate:(unsigned long long)arg1 ;
-(unsigned long long)stepFunction;
-(unsigned long long)stepRate;
@end

