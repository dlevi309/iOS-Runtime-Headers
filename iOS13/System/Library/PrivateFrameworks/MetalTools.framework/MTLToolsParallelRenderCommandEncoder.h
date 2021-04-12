/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsCommandEncoder.h>
#import <libobjc.A.dylib/MTLParallelRenderCommandEncoder.h>

@class MTLToolsPointerArray, NSString;

@interface MTLToolsParallelRenderCommandEncoder : MTLToolsCommandEncoder <MTLParallelRenderCommandEncoder> {

	MTLToolsPointerArray* _renderCommandEncoders;

}

@property (nonatomic,readonly) MTLToolsPointerArray * renderCommandEncoders;              //@synthesize renderCommandEncoders=_renderCommandEncoders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
-(void)dealloc;
-(void)endEncoding;
-(void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setDepthStoreAction:(unsigned long long)arg1 ;
-(void)setStencilStoreAction:(unsigned long long)arg1 ;
-(void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setDepthStoreActionOptions:(unsigned long long)arg1 ;
-(void)setStencilStoreActionOptions:(unsigned long long)arg1 ;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(id)renderCommandEncoder;
-(BOOL)isMemorylessRender;
-(void)acceptVisitor:(id)arg1 ;
-(MTLToolsPointerArray *)renderCommandEncoders;
@end

