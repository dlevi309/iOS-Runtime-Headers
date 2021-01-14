/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PKScribbleInteractionDelegate <NSObject>
@optional
-(void)_scribbleInteraction:(id)arg1 didTargetElement:(id)arg2 forTouches:(id)arg3 event:(id)arg4;
-(UIEdgeInsets*)_scribbleInteraction:(id)arg1 hitToleranceInsetsForElement:(id)arg2 defaultInsets:(UIEdgeInsets)arg3;
-(BOOL)_scribbleInteraction:(id)arg1 shouldBeginAtLocation:(CGPoint)arg2;
-(void)_scribbleInteraction:(id)arg1 willBeginWritingInElement:(id)arg2;
-(BOOL)_scribbleInteraction:(id)arg1 focusWillTransformElement:(id)arg2;
-(void)_scribbleInteraction:(id)arg1 didFinishWritingInElement:(id)arg2;
-(BOOL)_scribbleInteractionIsEnabled:(id)arg1;
-(BOOL)_pkScribbleInteractionShouldDisableInputAssistant:(id)arg1;

@end

