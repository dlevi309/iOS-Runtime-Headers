/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <TSReading/TSWPInteractiveCanvasController.h>

@protocol SXTextTangierInteractiveCanvasControllerDataSource;
@class UIScrollView;

@interface SXTextTangierInteractiveCanvasController : TSWPInteractiveCanvasController {

	BOOL _forceLayoutAndRenderOnThread;
	BOOL _isSelecting;
	BOOL _startedEditing;
	BOOL _isScrolling;
	BOOL _mightScrollToTop;
	UIScrollView* _scrollView;
	id<SXTextTangierInteractiveCanvasControllerDataSource> _dataSource;

}

@property (assign,nonatomic) BOOL startedEditing;                                                                   //@synthesize startedEditing=_startedEditing - In the implementation block
@property (assign,nonatomic) BOOL isScrolling;                                                                      //@synthesize isScrolling=_isScrolling - In the implementation block
@property (assign,nonatomic) BOOL mightScrollToTop;                                                                 //@synthesize mightScrollToTop=_mightScrollToTop - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                                             //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic,__weak) id<SXTextTangierInteractiveCanvasControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL forceLayoutAndRenderOnThread;                                                     //@synthesize forceLayoutAndRenderOnThread=_forceLayoutAndRenderOnThread - In the implementation block
@property (assign,nonatomic) BOOL isSelecting;                                                                      //@synthesize isSelecting=_isSelecting - In the implementation block
+(void)createCanvasWithDelegate:(id)arg1 outICC:(id*)arg2 outLayerHost:(id*)arg3 iccClass:(Class)arg4 layerHostClass:(Class)arg5 ;
-(id<SXTextTangierInteractiveCanvasControllerDataSource>)dataSource;
-(void)setDataSource:(id<SXTextTangierInteractiveCanvasControllerDataSource>)arg1 ;
-(void)teardown;
-(BOOL)isScrolling;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(BOOL)isSelecting;
-(void)setIsScrolling:(BOOL)arg1 ;
-(void)setIsSelecting:(BOOL)arg1 ;
-(id)hitRep:(CGPoint)arg1 withGesture:(id)arg2 passingTest:(/*^block*/id)arg3 ;
-(void)setSelection:(id)arg1 onModel:(id)arg2 withFlags:(unsigned long long)arg3 ;
-(void)endUISession;
-(void)setStartedEditing:(BOOL)arg1 ;
-(BOOL)mightScrollToTop;
-(void)setMightScrollToTop:(BOOL)arg1 ;
-(id)topLevelRepsForHitTesting;
-(id)i_topLevelLayersForTiling;
-(BOOL)p_currentlyScrolling;
-(BOOL)forceLayoutAndRenderOnThread;
-(void)didBeginEditingText;
-(id)closestRepToPoint:(CGPoint)arg1 forStorage:(id)arg2 ;
-(BOOL)p_shouldLayoutAndRenderOnThreadForcePendingLayout:(BOOL)arg1 ;
-(void)setForceLayoutAndRenderOnThread:(BOOL)arg1 ;
-(BOOL)startedEditing;
@end

