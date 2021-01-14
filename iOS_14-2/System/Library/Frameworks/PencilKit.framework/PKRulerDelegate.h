/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol PKRulerDelegate
@optional
-(id)canvasView;

@required
-(id)topView;
-(BOOL)isDrawing;
-(double)drawingScale;
-(CGAffineTransform*)strokeTransform;
-(id)drawingGestureRecognizer;
-(void)setRulerEnabled:(BOOL)arg1;
-(id)drawingController;

@end

