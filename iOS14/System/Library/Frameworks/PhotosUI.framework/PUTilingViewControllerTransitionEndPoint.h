/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUTilingViewControllerTransitionEndPoint <NSObject>
@optional
-(void)tilingViewControllerTransitionWasAborted:(id)arg1;
-(BOOL)tilingViewControllerTransitionUsesTransientTilingView:(id)arg1;
-(long long)tilingViewControllerTransitionPreferredBarStyle:(id)arg1;

@required
-(id)tilingViewControllerTransitionTilingViewHostView:(id)arg1;
-(void)tilingViewControllerTransition:(id)arg1 abandonTilingView:(id)arg2 toEndPoint:(id)arg3;
-(id)tilingViewControllerTransition:(id)arg1 tilingViewToTransferToEndPoint:(id)arg2;
-(void)tilingViewControllerTransition:(id)arg1 adoptTilingView:(id)arg2 fromEndPoint:(id)arg3 isCancelingTransition:(BOOL)arg4 animationSetupCompletionHandler:(/*^block*/id)arg5;

@end

