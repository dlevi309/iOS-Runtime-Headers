/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setStride:(unsigned long long)arg1 ;
-(unsigned long long)stride;
-(unsigned long long)stepRate;
-(void)setStepRate:(unsigned long long)arg1 ;
-(unsigned long long)stepFunction;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStepFunction:(unsigned long long)arg1 ;
@end

