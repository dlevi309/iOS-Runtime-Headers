/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


@protocol OS_dispatch_data;
#import <Metal/Metal-Structs.h>
@class NSObject;

@interface MTLIndirectArgumentBufferEmulationData : NSObject {

	NSObject*<OS_dispatch_data> _dataMap;
	char* _bufferIndices;
	char* _textureIndices;
	char* _samplerIndices;
	const void* _dataPtr;
	unsigned long long _dataSize;

}
-(void)bindIndirectArgumentsWithFunctions:(SCD_Struct_MT18)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)dealloc;
@end

