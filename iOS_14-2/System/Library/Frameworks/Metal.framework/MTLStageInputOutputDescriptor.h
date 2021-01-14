/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MTLBufferLayoutDescriptorArray, MTLAttributeDescriptorArray;

@interface MTLStageInputOutputDescriptor : NSObject <NSCopying>

@property (readonly) MTLBufferLayoutDescriptorArray * layouts; 
@property (readonly) MTLAttributeDescriptorArray * attributes; 
@property (assign,nonatomic) unsigned long long indexType; 
@property (assign,nonatomic) unsigned long long indexBufferIndex; 
+(id)alloc;
+(id)stageInputOutputDescriptor;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

