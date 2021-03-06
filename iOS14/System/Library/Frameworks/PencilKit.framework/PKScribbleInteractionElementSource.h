/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol PKScribbleInteractionElementSource <NSObject>
@optional
-(void)_scribbleInteraction:(id)arg1 focusElement:(id)arg2 completion:(/*^block*/id)arg3;

@required
-(void)_scribbleInteraction:(id)arg1 focusElement:(id)arg2 initialFocusSelectionReferencePoint:(CGPoint)arg3 completion:(/*^block*/id)arg4;
-(void)_scribbleInteraction:(id)arg1 requestElementsInRect:(CGRect)arg2 completion:(/*^block*/id)arg3;
-(CGRect*)_scribbleInteraction:(id)arg1 frameForElement:(id)arg2;

@end

