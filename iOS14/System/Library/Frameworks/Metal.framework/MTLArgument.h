/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


#import <Metal/Metal-Structs.h>
@class NSString, MTLStructType, MTLPointerType;

@interface MTLArgument : NSObject

@property (readonly) MTLArgument * bufferIndirectArgumentType; 
@property (readonly) unsigned long long indirectConstantAlignment; 
@property (readonly) unsigned long long indirectConstantDataSize; 
@property (readonly) unsigned long long indirectConstantDataType; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long type; 
@property (readonly) unsigned long long access; 
@property (readonly) unsigned long long index; 
@property (getter=isActive,readonly) BOOL active; 
@property (readonly) unsigned long long bufferAlignment; 
@property (readonly) unsigned long long bufferDataSize; 
@property (readonly) unsigned long long bufferDataType; 
@property (readonly) MTLStructType * bufferStructType; 
@property (readonly) MTLPointerType * bufferPointerType; 
@property (readonly) unsigned long long threadgroupMemoryAlignment; 
@property (readonly) unsigned long long threadgroupMemoryDataSize; 
@property (readonly) unsigned long long textureType; 
@property (readonly) unsigned long long textureDataType; 
@property (readonly) BOOL isDepthTexture; 
@property (readonly) unsigned long long arrayLength; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
@end

