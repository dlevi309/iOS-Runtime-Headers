/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)stageInputOutputDescriptor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reset;
-(id)formattedDescription:(unsigned long long)arg1 ;
@end

