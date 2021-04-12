/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol UIIndirectScribbleInteractionDelegate <NSObject>
@optional
-(BOOL)indirectScribbleInteraction:(id)arg1 shouldDelayFocusForElement:(id)arg2;
-(void)indirectScribbleInteraction:(id)arg1 willBeginWritingInElement:(id)arg2;
-(void)indirectScribbleInteraction:(id)arg1 didFinishWritingInElement:(id)arg2;

@required
-(CGRect*)indirectScribbleInteraction:(id)arg1 frameForElement:(id)arg2;
-(BOOL)indirectScribbleInteraction:(id)arg1 isElementFocused:(id)arg2;
-(void)indirectScribbleInteraction:(id)arg1 focusElementIfNeeded:(id)arg2 referencePoint:(CGPoint)arg3 completion:(/*^block*/id)arg4;
-(void)indirectScribbleInteraction:(id)arg1 requestElementsInRect:(CGRect)arg2 completion:(/*^block*/id)arg3;

@end

