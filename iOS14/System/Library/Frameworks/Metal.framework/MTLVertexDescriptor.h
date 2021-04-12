/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MTLVertexBufferLayoutDescriptorArray, MTLVertexAttributeDescriptorArray;

@interface MTLVertexDescriptor : NSObject <NSCopying>

@property (readonly) MTLVertexBufferLayoutDescriptorArray * layouts; 
@property (readonly) MTLVertexAttributeDescriptorArray * attributes; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)vertexDescriptor;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

