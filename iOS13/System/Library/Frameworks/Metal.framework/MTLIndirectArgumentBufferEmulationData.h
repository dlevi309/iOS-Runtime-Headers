/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(void)bindIndirectArgumentsWithFunctions:(SCD_Struct_MT7)arg1 ;
@end

