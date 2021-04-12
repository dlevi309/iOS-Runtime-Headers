/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLType.h>

@interface MTLArrayType : MTLType

@property (readonly) unsigned long long elementType; 
@property (readonly) unsigned long long arrayLength; 
@property (readonly) unsigned long long stride; 
@property (readonly) unsigned long long argumentIndexStride; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)elementStructType;
-(id)elementArrayType;
-(id)elementIndirectArgumentType;
-(id)elementTextureReferenceType;
-(id)elementPointerType;
@end

