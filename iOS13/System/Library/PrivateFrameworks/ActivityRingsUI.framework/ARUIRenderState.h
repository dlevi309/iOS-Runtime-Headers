/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/

#import <libobjc.A.dylib/ARUIRendering.h>

@protocol MTLRenderPipelineState;
@class NSString;

@interface ARUIRenderState : NSObject <ARUIRendering> {

	id<MTLRenderPipelineState> _renderPipelineState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<MTLRenderPipelineState> renderPipelineState; 
-(id)initWithDevice:(id)arg1 library:(id)arg2 ;
-(void)setRenderPipelineState:(id<MTLRenderPipelineState>)arg1 ;
-(id)renderPipelineDescriptorFromLibrary:(id)arg1 ;
-(id<MTLRenderPipelineState>)renderPipelineState;
@end

