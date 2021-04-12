/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/PKSelectionRendering.h>

@protocol PKSelectionRenderingDelegate;
@class CAShapeLayer, PKStrokeSelection, UIBezierPath, NSString;

@interface PKLassoRenderer : NSObject <PKSelectionRendering> {

	CAShapeLayer* _lassoLayer;
	CAShapeLayer* _whiteLassoLayer;
	CGPoint _editMenuLocation;
	PKStrokeSelection* _strokeSelection;
	id<PKSelectionRenderingDelegate> _renderingDelegate;
	/*^block*/id _calculateSelectionHullBlock;
	UIBezierPath* _lassoPath;

}

@property (nonatomic,retain) PKStrokeSelection * strokeSelection;                                    //@synthesize strokeSelection=_strokeSelection - In the implementation block
@property (assign,nonatomic,__weak) id<PKSelectionRenderingDelegate> renderingDelegate;              //@synthesize renderingDelegate=_renderingDelegate - In the implementation block
@property (nonatomic,copy) id calculateSelectionHullBlock;                                           //@synthesize calculateSelectionHullBlock=_calculateSelectionHullBlock - In the implementation block
@property (nonatomic,retain) UIBezierPath * lassoPath;                                               //@synthesize lassoPath=_lassoPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGColorRef)_selectionColor;
-(id)_accessibilityUserTestingChildren;
-(void)dealloc;
-(void)_setupSelectionAdornment;
-(PKStrokeSelection *)strokeSelection;
-(UIBezierPath *)lassoPath;
-(CGPoint)editMenuLocation;
-(void)_didEndDraggingSelection;
-(void)_didBeginDraggingSelection;
-(id<PKSelectionRenderingDelegate>)renderingDelegate;
-(void)setLassoPath:(UIBezierPath *)arg1 ;
-(id)initWithStrokeSelection:(id)arg1 renderingDelegate:(id)arg2 ;
-(id)initForLiveSelectionWithRenderingDelegate:(id)arg1 ;
-(id)adornmentLayer;
-(void)_renderLiveSelectionPath:(CGPathRef)arg1 forStrokes:(id)arg2 inDrawing:(id)arg3 liveScrollOffset:(CGPoint)arg4 ;
-(void)setStrokeSelection:(PKStrokeSelection *)arg1 ;
-(void)setRenderingDelegate:(id<PKSelectionRenderingDelegate>)arg1 ;
-(void)_setupLiveLasso;
-(id)calculateSelectionHullBlock;
-(void)setCalculateSelectionHullBlock:(id)arg1 ;
-(void)_updateLassoForAccessibility:(id)arg1 ;
-(void)_setupAnimatedLasso;
-(void)addAnimationsToSelectionLayer:(id)arg1 whiteLayer:(id)arg2 ;
-(void)_updateSelectionPath:(CGPathRef)arg1 ;
-(void)_setupLassoLayerAppearanceWithBezierPath:(id)arg1 ;
-(void)_setupAccessibilityObservers;
-(void)_setupAnimatedLassoForStrokes:(id)arg1 lassoLayer:(id)arg2 whiteLassoLayer:(id)arg3 isSelection:(BOOL)arg4 lassoStroke:(id)arg5 ;
-(vector<CGPoint, std::__1::allocator<CGPoint> >*)pointsOfInterestForStrokes:(id)arg1 ;
-(id)_expandBezierPathIfNecessary:(id)arg1 ;
@end

