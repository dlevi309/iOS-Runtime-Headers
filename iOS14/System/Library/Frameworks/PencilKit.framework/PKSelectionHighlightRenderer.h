/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/PKSelectionRendering.h>

@protocol PKSelectionRenderingDelegate;
@class CAShapeLayer, PKStrokeSelection, UIBezierPath, NSString;

@interface PKSelectionHighlightRenderer : NSObject <PKSelectionRendering> {

	CAShapeLayer* _highlightLayer;
	PKStrokeSelection* _strokeSelection;
	id<PKSelectionRenderingDelegate> _renderingDelegate;
	UIBezierPath* _lassoPath;

}

@property (nonatomic,retain) PKStrokeSelection * strokeSelection;                                    //@synthesize strokeSelection=_strokeSelection - In the implementation block
@property (assign,nonatomic,__weak) id<PKSelectionRenderingDelegate> renderingDelegate;              //@synthesize renderingDelegate=_renderingDelegate - In the implementation block
@property (nonatomic,retain) UIBezierPath * lassoPath;                                               //@synthesize lassoPath=_lassoPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_accessibilityUserTestingChildren;
-(id)_highlightColor;
-(void)_setupSelectionAdornment;
-(PKStrokeSelection *)strokeSelection;
-(UIBezierPath *)lassoPath;
-(CGPoint)editMenuLocation;
-(void)_didEndDraggingSelection;
-(void)_didBeginDraggingSelection;
-(void)_setupHighlightIfNecessary;
-(id<PKSelectionRenderingDelegate>)renderingDelegate;
-(void)setLassoPath:(UIBezierPath *)arg1 ;
-(id)initWithStrokeSelection:(id)arg1 renderingDelegate:(id)arg2 ;
-(id)initForLiveSelectionWithRenderingDelegate:(id)arg1 ;
-(id)adornmentLayer;
-(void)_renderLiveSelectionPath:(const CGPathRef)arg1 forStrokes:(id)arg2 inDrawing:(id)arg3 liveScrollOffset:(CGPoint)arg4 ;
-(void)setStrokeSelection:(PKStrokeSelection *)arg1 ;
-(void)setRenderingDelegate:(id<PKSelectionRenderingDelegate>)arg1 ;
-(id)_bezierPathForStrokes:(id)arg1 ;
@end

