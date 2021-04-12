/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MTLRenderPassSampleBufferAttachmentDescriptor : NSObject <NSCopying>

@property (nonatomic,retain) id<MTLCounterSampleBuffer> sampleBuffer; 
@property (assign,nonatomic) unsigned long long startOfVertexSampleIndex; 
@property (assign,nonatomic) unsigned long long endOfVertexSampleIndex; 
@property (assign,nonatomic) unsigned long long startOfFragmentSampleIndex; 
@property (assign,nonatomic) unsigned long long endOfFragmentSampleIndex; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

