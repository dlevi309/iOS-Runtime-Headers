/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol PKDrawingGestureTarget <NSObject>
@optional
-(BOOL)drawingShouldBegin:(id)arg1 withEvent:(id)arg2;
-(void)_replayDrawingBegan:(SCD_Struct_PK6)arg1;
-(void)_replayDrawingMoved:(SCD_Struct_PK6)arg1;
-(void)_replayDrawingEnded;
-(void)_replayDrawingCancelled;

@required
-(void)drawingBegan:(id)arg1;
-(void)drawingMoved:(id)arg1 withEvent:(id)arg2;
-(void)drawingEnded:(id)arg1;
-(void)drawingCancelled;
-(void)drawingEstimatedPropertiesUpdated:(id)arg1;

@end

