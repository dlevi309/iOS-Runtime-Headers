/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

@class UITouch;


@protocol PKDrawingGestureRecognizerProtocol <NSObject>
@property (nonatomic,readonly) UITouch * drawingTouch; 
@property (assign,nonatomic,__weak) id<PKDrawingGestureRecognizerDelegate> delegate; 
@property (assign,nonatomic,__weak) id<PKDrawingGestureTarget> drawingTarget; 
@required
-(id<PKDrawingGestureRecognizerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)cancel;
-(void)end;
-(id<PKDrawingGestureTarget>)drawingTarget;
-(void)setDrawingTarget:(id)arg1;
-(UITouch *)drawingTouch;

@end

