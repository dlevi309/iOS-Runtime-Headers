/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol PKSelectionRendering <NSObject>
@required
-(id)_accessibilityUserTestingChildren;
-(void)_setupSelectionAdornment;
-(id)lassoPath;
-(CGPoint*)editMenuLocation;
-(void)_didEndDraggingSelection;
-(void)_didBeginDraggingSelection;
-(id)initWithStrokeSelection:(id)arg1 renderingDelegate:(id)arg2;
-(id)initForLiveSelectionWithRenderingDelegate:(id)arg1;
-(id)adornmentLayer;
-(void)_renderLiveSelectionPath:(const CGPathRef)arg1 forStrokes:(id)arg2 inDrawing:(id)arg3 liveScrollOffset:(CGPoint)arg4;

@end

