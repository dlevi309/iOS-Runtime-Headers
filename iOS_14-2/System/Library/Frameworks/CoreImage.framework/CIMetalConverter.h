/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/


@protocol MTLDevice, MTLFunction;
#import <CoreImage/CoreImage-Structs.h>
@interface CIMetalConverter : NSObject {

	id<MTLDevice> _device;
	id<MTLFunction> _convertToTexture;
	id<MTLFunction> _convertToBuffer;

}
-(void)encodeToCommandBuffer:(id)arg1 sourceBuffer:(id)arg2 sourceRowBytes:(unsigned long long)arg3 destinationBuffer:(id)arg4 destinationRowBytes:(unsigned long long)arg5 destinationSize:(SCD_Struct_CI5)arg6 ;
-(void)dealloc;
-(id)initWithDevice:(id)arg1 kernelName:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceBuffer:(id)arg2 sourceRowBytes:(unsigned long long)arg3 destinationTexture:(id)arg4 ;
@end

