/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UITargetedPreview;


@protocol _UIClickHighlightEffect <UIInteractionEffect>
@property (nonatomic,readonly) UITargetedPreview * targetedPreviewForEffectContinuation; 
@property (nonatomic,readonly) UITargetedPreview * targetedPreview; 
@property (nonatomic,copy) id completionBlock; 
@required
+(id)effectWithPreview:(id)arg1 continuingFromPreview:(id)arg2;
-(id)completionBlock;
-(void)setCompletionBlock:(/*^block*/id)arg1;
-(UITargetedPreview *)targetedPreviewForEffectContinuation;
-(UITargetedPreview *)targetedPreview;

@end

