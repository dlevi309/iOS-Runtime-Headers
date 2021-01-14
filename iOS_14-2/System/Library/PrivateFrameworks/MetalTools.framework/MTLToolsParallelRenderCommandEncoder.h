/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsCommandEncoder.h>
#import <libobjc.A.dylib/MTLParallelRenderCommandEncoder.h>

@class NSString;

@interface MTLToolsParallelRenderCommandEncoder : MTLToolsCommandEncoder <MTLParallelRenderCommandEncoder>

@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDepthStoreAction:(unsigned long long)arg1 ;
-(void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setDepthStoreActionOptions:(unsigned long long)arg1 ;
-(BOOL)isMemorylessRender;
-(void)endEncoding;
-(id)renderCommandEncoder;
-(void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setStencilStoreActionOptions:(unsigned long long)arg1 ;
-(void)setStencilStoreAction:(unsigned long long)arg1 ;
@end

