/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)elementIndirectArgumentType;
-(id)elementPointerType;
-(id)elementTextureReferenceType;
-(id)elementArrayType;
-(id)elementStructType;
@end

