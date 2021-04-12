/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@protocol MTLComputePipelineState;
@class NSArray;

@interface AVTCompositorPipeline : NSObject {

	BOOL _isAffectedBySkin;
	long long _affectingComponentsMask;
	NSArray* _bindings;
	id<MTLComputePipelineState> _pipelineState;

}
-(id)initWithFunction:(id)arg1 ;
-(void)compositeTexture:(id)arg1 forMemoji:(id)arg2 considerSkin:(BOOL)arg3 componentsToConsider:(long long)arg4 computeCommandHandler:(/*^block*/id)arg5 blitCommandHandler:(/*^block*/id)arg6 helper:(id)arg7 helperTokens:(id)arg8 ;
@end

