/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/

#import <libobjc.A.dylib/ARUIRendering.h>
#import <libobjc.A.dylib/ARUIPrecompiledRendering.h>
#import <libobjc.A.dylib/ARUIRingsState.h>

@protocol MTLRenderPipelineState;
@class NSString;

@interface ARUIRingsRenderState : NSObject <ARUIRendering, ARUIPrecompiledRendering, ARUIRingsState> {

	id<MTLRenderPipelineState> _renderPipelineState;
	unsigned long long _renderArea;
	long long _centeredAroundPercentSegmentDrawCount;

}

@property (assign,nonatomic) unsigned long long renderArea;                                //@synthesize renderArea=_renderArea - In the implementation block
@property (assign,nonatomic) long long centeredAroundPercentSegmentDrawCount;              //@synthesize centeredAroundPercentSegmentDrawCount=_centeredAroundPercentSegmentDrawCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<MTLRenderPipelineState> renderPipelineState; 
-(id)name;
-(id)initWithDevice:(id)arg1 library:(id)arg2 ;
-(void)setRenderPipelineState:(id<MTLRenderPipelineState>)arg1 ;
-(id)renderPipelineDescriptorFromLibrary:(id)arg1 ;
-(id)initWithPipelineLibrary:(id)arg1 ;
-(void)didInitialize;
-(id<MTLRenderPipelineState>)renderPipelineState;
-(BOOL)shouldRunStateForRing:(id)arg1 ;
-(unsigned long long)renderArea;
-(void)setRenderArea:(unsigned long long)arg1 ;
-(long long)centeredAroundPercentSegmentDrawCount;
-(void)setCenteredAroundPercentSegmentDrawCount:(long long)arg1 ;
@end

