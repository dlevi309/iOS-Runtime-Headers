/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIClickHighlightEffect.h>

@class UITargetedPreview, _UIAnchoredClickHighlightPlatterView, NSString;

@interface _UIClickHighlightInteractionEffect : NSObject <_UIClickHighlightEffect> {

	long long _phase;
	long long _inflightAnimationCount;
	BOOL _isActive;
	UITargetedPreview* _targetedPreview;
	/*^block*/id _completionBlock;
	_UIAnchoredClickHighlightPlatterView* _highlightPlatter;
	UITargetedPreview* _continuationPreview;

}

@property (nonatomic,retain) _UIAnchoredClickHighlightPlatterView * highlightPlatter;                 //@synthesize highlightPlatter=_highlightPlatter - In the implementation block
@property (nonatomic,retain) UITargetedPreview * continuationPreview;                                 //@synthesize continuationPreview=_continuationPreview - In the implementation block
@property (nonatomic,readonly) UITargetedPreview * targetedPreviewForEffectContinuation; 
@property (nonatomic,readonly) UITargetedPreview * targetedPreview;                                   //@synthesize targetedPreview=_targetedPreview - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                        //@synthesize completionBlock=_completionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)effectWithPreview:(id)arg1 continuingFromPreview:(id)arg2 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)interaction:(id)arg1 didChangeWithContext:(id)arg2 ;
-(id)initWithTargetedPreview:(id)arg1 continuingFromPreview:(id)arg2 ;
-(void)setContinuationPreview:(UITargetedPreview *)arg1 ;
-(void)_createHighlightPlatter;
-(_UIAnchoredClickHighlightPlatterView *)highlightPlatter;
-(void)_completeHighlightEffect;
-(UITargetedPreview *)continuationPreview;
-(void)setHighlightPlatter:(_UIAnchoredClickHighlightPlatterView *)arg1 ;
-(UITargetedPreview *)targetedPreviewForEffectContinuation;
-(UITargetedPreview *)targetedPreview;
@end

