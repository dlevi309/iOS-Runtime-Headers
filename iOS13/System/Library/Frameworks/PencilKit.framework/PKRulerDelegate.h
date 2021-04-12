/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol PKRulerDelegate
@optional
-(id)canvasView;

@required
-(id)topView;
-(double)drawingScale;
-(id)drawingGestureRecognizer;
-(CGAffineTransform*)strokeTransform;
-(BOOL)isDrawing;
-(id)drawingController;
-(void)setRulerEnabled:(BOOL)arg1;

@end

