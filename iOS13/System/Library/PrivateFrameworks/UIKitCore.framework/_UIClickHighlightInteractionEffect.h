/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIInteractionEffect.h>

@class UITargetedPreview, _UIAnchoredClickHighlightPlatterView, NSString;

@interface _UIClickHighlightInteractionEffect : NSObject <UIInteractionEffect> {

	long long _phase;
	long long _inflightAnimationCount;
	BOOL _isActive;
	UITargetedPreview* _targetedPreview;
	_UIAnchoredClickHighlightPlatterView* _highlightPlatter;
	/*^block*/id _completionBlock;

}

@property (nonatomic,retain) _UIAnchoredClickHighlightPlatterView * highlightPlatter;                 //@synthesize highlightPlatter=_highlightPlatter - In the implementation block
@property (nonatomic,retain) UITargetedPreview * targetedPreview;                                     //@synthesize targetedPreview=_targetedPreview - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                        //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,readonly) UITargetedPreview * targetedPreviewForEffectContinuation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)interaction:(id)arg1 didChangeWithContext:(id)arg2 ;
-(UITargetedPreview *)targetedPreview;
-(void)setTargetedPreview:(UITargetedPreview *)arg1 ;
-(UITargetedPreview *)targetedPreviewForEffectContinuation;
-(id)initWithTargetedPreview:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_createHighlightPlatter;
-(_UIAnchoredClickHighlightPlatterView *)highlightPlatter;
-(void)_completeHighlightEffect;
-(void)setHighlightPlatter:(_UIAnchoredClickHighlightPlatterView *)arg1 ;
@end

