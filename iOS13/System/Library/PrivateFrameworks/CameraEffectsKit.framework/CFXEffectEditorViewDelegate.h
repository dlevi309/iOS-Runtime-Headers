/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol CFXEffectEditorViewDelegate <NSObject>
@optional
-(BOOL)effectEditorView:(id)arg1 shouldDisableEditingAnimationForEffect:(id)arg2;
-(double)effectEditorView:(id)arg1 durationForBeginEditingAnimationForEffect:(id)arg2;
-(void)effectEditorView:(id)arg1 willBeginAnimationBeforeEditingEffect:(id)arg2;
-(void)effectEditorView:(id)arg1 didStartBeginEditingAnimationForEffect:(id)arg2 completion:(/*^block*/id)arg3;
-(void)effectEditorView:(id)arg1 didCompleteBeginEditingAnimationForEffect:(id)arg2;
-(id)effectEditorView:(id)arg1 beginEditingAnimationFromFrameForEffect:(id)arg2 relativeToBounds:(CGRect)arg3;
-(id)effectEditorView:(id)arg1 beginEditingAnimationToFrameForEffect:(id)arg2 relativeToBounds:(CGRect)arg3;
-(double)effectEditorView:(id)arg1 durationForEndEditingAnimationForEffect:(id)arg2;
-(void)effectEditorView:(id)arg1 willBeginAnimationAfterEditingEffect:(id)arg2;
-(id)effectEditorView:(id)arg1 endEditingAnimationFromFrameForEffect:(id)arg2 relativeToBounds:(CGRect)arg3;
-(id)effectEditorView:(id)arg1 endEditingAnimationToFrameForEffect:(id)arg2 relativeToBounds:(CGRect)arg3;
-(void)effectEditorView:(id)arg1 didStartEndEditingAnimationForEffect:(id)arg2;
-(void)effectEditorView:(id)arg1 didCompleteEndEditingAnimationForEffect:(id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)effectEditorViewIsTrackingEffect:(id)arg1;
-(id)effectEditorView:(id)arg1 trackingTransformWithEffectFrame:(id)arg2 trackingTransformWithObjectTransform:(id)arg3 fractionComplete:(double)arg4;
-(void)effectEditorViewDidEndEditing:(id)arg1;
-(void)effectEditorView:(id)arg1 didBeginEditingEffect:(id)arg2;
-(void)effectEditorView:(id)arg1 didEndEditingEffect:(id)arg2;
-(void)effectEditorView:(id)arg1 didEndEditingByTappingOutSideEffectAtScreenPoint:(CGPoint)arg2;
-(BOOL)effectEditorView:(id)arg1 shouldRotateEffect:(id)arg2;
-(BOOL)effectEditorView:(id)arg1 shouldScaleEffect:(id)arg2;
-(BOOL)effectEditorView:(id)arg1 shouldMoveEffect:(id)arg2;
-(void)effectEditorView:(id)arg1 didMoveEffect:(id)arg2 withTouchPoint:(CGPoint)arg3 withTransform:(CGAffineTransform*)arg4;
-(BOOL)effectEditorView:(id)arg1 presentCustomTextEditingUI:(id)arg2;
-(unsigned long long)effectEditorView:(id)arg1 maximumTextLengthForEffect:(id)arg2;
-(BOOL)effectEditorViewShouldPreviewEditEffect:(id)arg1;
-(void)effectEditorViewWillBeginPreviewingEditEffect:(id)arg1;
-(void)effectEditorViewDidEndPreviewingEditingEffect:(id)arg1;
-(BOOL)effectEditorViewShouldShowFaceReticle:(id)arg1;
-(BOOL)effectEditorView:(id)arg1 shouldRemoveEffect:(id)arg2;

@required
-(id)effectEditorView:(id)arg1 effectAtPoint:(CGPoint)arg2;
-(BOOL)effectEditorView:(id)arg1 isEffectAtPoint:(CGPoint)arg2 effect:(id)arg3;
-(CGRect*)effectEditorView:(id)arg1 frameForEffect:(id)arg2 relativeToBounds:(CGRect)arg3 includeTracking:(BOOL)arg4 adjustForMinimumHitTestArea:(BOOL)arg5;
-(id)effectEditorView:(id)arg1 viewInfoForEffect:(id)arg2 relativeToBounds:(CGRect)arg3;
-(CGPoint*)effectEditorView:(id)arg1 removeButtonPositionForEffect:(id)arg2 relativeToBounds:(CGRect)arg3;
-(void)effectEditorViewDidBeginEditing:(id)arg1;
-(CGPoint*)effectEditorView:(id)arg1 spacingBetweenCenterPointOfEffect:(id)arg2 point:(CGPoint)arg3 relativeToBounds:(CGRect)arg4;
-(void)effectEditorView:(id)arg1 didTransformEffect:(id)arg2 transform:(CGAffineTransform)arg3 relativeToBounds:(CGRect)arg4;
-(BOOL)effectEditorView:(id)arg1 shouldEditTextForEffect:(id)arg2;
-(void)effectEditorView:(id)arg1 didBeginEditingTextForEffect:(id)arg2;
-(id)effectEditorView:(id)arg1 textEditingPropertiesForEffect:(id)arg2 relativeToBounds:(CGRect)arg3 displayScale:(double)arg4;
-(id)effectEditorView:(id)arg1 textForEffect:(id)arg2;
-(void)effectEditorView:(id)arg1 didEditTextForEffect:(id)arg2 newText:(id)arg3;
-(void)effectEditorView:(id)arg1 didEndEditingTextForEffect:(id)arg2 wasCancelled:(BOOL)arg3;
-(void)effectEditorView:(id)arg1 didRemoveEffect:(id)arg2;

@end

