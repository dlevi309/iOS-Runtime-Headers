/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol PKDrawingGestureTarget <NSObject>
@optional
-(BOOL)drawingShouldBegin:(id)arg1 withEvent:(id)arg2;

@required
-(void)drawingBegan:(id)arg1;
-(void)drawingMoved:(id)arg1 withEvent:(id)arg2;
-(void)drawingEnded:(id)arg1;
-(void)drawingCancelled;
-(void)drawingEstimatedPropertiesUpdated:(id)arg1;

@end

