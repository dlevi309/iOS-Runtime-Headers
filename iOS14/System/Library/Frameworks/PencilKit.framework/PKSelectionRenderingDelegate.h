/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol PKSelectionRenderingDelegate
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> selectionHullQueue; 
@required
-(BOOL)isRTL;
-(CGColorRef)selectionColor;
-(CGAffineTransform*)transformFromStrokeSpaceToViewInDrawing:(id)arg1;
-(CGRect*)selectedStrokesViewClipRectForDrawing:(id)arg1;
-(double)scaleForDrawing:(id)arg1;
-(id)_firstStrokesInStrokes:(id)arg1;
-(id)_lastStrokesInStrokes:(id)arg1;
-(long long)currentIntersectionAlgorithm;
-(NSObject*<OS_dispatch_queue>)selectionHullQueue;
-(void)setSelectionHullQueue:(id)arg1;

@end

