/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MTLComputePassSampleBufferAttachmentDescriptorArray;

@interface MTLComputePassDescriptor : NSObject <NSCopying>

@property (assign,nonatomic) unsigned long long dispatchType; 
@property (readonly) MTLComputePassSampleBufferAttachmentDescriptorArray * sampleBufferAttachments; 
+(id)alloc;
+(id)computePassDescriptor;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

