/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@protocol MTLComputePipelineState;
@class NSArray;

@interface AVTCompositorPipeline : NSObject {

	BOOL _isAffectedBySkin;
	unsigned long long _affectingComponentsMask;
	NSArray* _bindings;
	id<MTLComputePipelineState> _pipelineState;

}
-(id)initWithFunction:(id)arg1 ;
-(void)compositeTexture:(id)arg1 forMemoji:(id)arg2 considerSkin:(BOOL)arg3 componentsToConsider:(unsigned long long)arg4 computeCommandHandler:(/*^block*/id)arg5 blitCommandHandler:(/*^block*/id)arg6 helper:(id)arg7 helperTokens:(id)arg8 ;
@end

