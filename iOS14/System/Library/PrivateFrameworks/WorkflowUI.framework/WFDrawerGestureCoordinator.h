/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/WFDrawerDismissalHelperDelegate.h>

@protocol WFDrawerGestureCoordinatorDelegate;
@class UIPanGestureRecognizer, UITapGestureRecognizer, WFDrawerVelocityFilter, UIScrollView, NSString;

@interface WFDrawerGestureCoordinator : NSObject <UIGestureRecognizerDelegate, WFDrawerDismissalHelperDelegate> {

	BOOL _correctingContentOffset;
	id<WFDrawerGestureCoordinatorDelegate> _delegate;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UITapGestureRecognizer* _tapGestureRecognizer;
	WFDrawerVelocityFilter* _heightVelocityFilter;
	WFDrawerVelocityFilter* _heightAccelerationFilter;
	unsigned long long _tapGestureIgnoringCount;
	double _minimumDrawerHeight;
	double _maximumDrawerHeight;
	double _topRubberBandRange;
	double _bottomRubberBandRange;
	UIScrollView* _scrollView;
	CGPoint _previousPanTranslation;
	CGPoint _initialContentOffset;
	CGPoint _unmodifiedInitialContentOffset;

}

@property (nonatomic,readonly) UIPanGestureRecognizer * panGestureRecognizer;                       //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * tapGestureRecognizer;                       //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) WFDrawerVelocityFilter * heightVelocityFilter;                       //@synthesize heightVelocityFilter=_heightVelocityFilter - In the implementation block
@property (nonatomic,readonly) WFDrawerVelocityFilter * heightAccelerationFilter;                   //@synthesize heightAccelerationFilter=_heightAccelerationFilter - In the implementation block
@property (assign,nonatomic) unsigned long long tapGestureIgnoringCount;                            //@synthesize tapGestureIgnoringCount=_tapGestureIgnoringCount - In the implementation block
@property (assign,nonatomic) CGPoint previousPanTranslation;                                        //@synthesize previousPanTranslation=_previousPanTranslation - In the implementation block
@property (assign,nonatomic) double minimumDrawerHeight;                                            //@synthesize minimumDrawerHeight=_minimumDrawerHeight - In the implementation block
@property (assign,nonatomic) double maximumDrawerHeight;                                            //@synthesize maximumDrawerHeight=_maximumDrawerHeight - In the implementation block
@property (assign,nonatomic) double topRubberBandRange;                                             //@synthesize topRubberBandRange=_topRubberBandRange - In the implementation block
@property (assign,nonatomic) double bottomRubberBandRange;                                          //@synthesize bottomRubberBandRange=_bottomRubberBandRange - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                             //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) CGPoint initialContentOffset;                                          //@synthesize initialContentOffset=_initialContentOffset - In the implementation block
@property (assign,nonatomic) CGPoint unmodifiedInitialContentOffset;                                //@synthesize unmodifiedInitialContentOffset=_unmodifiedInitialContentOffset - In the implementation block
@property (assign,nonatomic) BOOL correctingContentOffset;                                          //@synthesize correctingContentOffset=_correctingContentOffset - In the implementation block
@property (nonatomic,__weak,readonly) id<WFDrawerGestureCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(id<WFDrawerGestureCoordinatorDelegate>)delegate;
-(void)handleTapGesture:(id)arg1 ;
-(void)setInitialContentOffset:(CGPoint)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(CGPoint)initialContentOffset;
-(void)handlePanGesture:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)scrollViewDidScroll:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(UIScrollView *)scrollView;
-(double)containerHeight;
-(void)beginDragging;
-(double)dismissalRectTopEdgeForCardDismissalHelper:(id)arg1 coordinateSpace:(id)arg2 ;
-(void)drawerDismissalHelper:(id)arg1 requestedDismissalWithVelocity:(double)arg2 ;
-(id)dragGestureTrackerForCardDismissalHelper:(id)arg1 ;
-(void)updateTapGestureRecognizer;
-(void)beginIgnoringTapGestures;
-(void)endIgnoringTapGestures;
-(void)dragTranslatedWithVerticalDelta:(double)arg1 ;
-(void)endDraggingWithAnimation:(id)arg1 ;
-(void)endDraggingWithVerticalVelocity:(double)arg1 animation:(id)arg2 ;
-(double)applyRubberBandToValue:(double)arg1 withRange:(double)arg2 ;
-(double)unapplyRubberBandToValue:(double)arg1 withRange:(double)arg2 ;
-(double)rubberBandHeightForHeight:(double)arg1 ;
-(double)heightForRubberBandHeight:(double)arg1 ;
-(double)drawerHeight;
-(double)clampedDrawerHeight:(double)arg1 ;
-(WFDrawerVelocityFilter *)heightVelocityFilter;
-(WFDrawerVelocityFilter *)heightAccelerationFilter;
-(unsigned long long)tapGestureIgnoringCount;
-(void)setTapGestureIgnoringCount:(unsigned long long)arg1 ;
-(CGPoint)previousPanTranslation;
-(void)setPreviousPanTranslation:(CGPoint)arg1 ;
-(double)minimumDrawerHeight;
-(void)setMinimumDrawerHeight:(double)arg1 ;
-(double)maximumDrawerHeight;
-(void)setMaximumDrawerHeight:(double)arg1 ;
-(double)topRubberBandRange;
-(void)setTopRubberBandRange:(double)arg1 ;
-(double)bottomRubberBandRange;
-(void)setBottomRubberBandRange:(double)arg1 ;
-(CGPoint)unmodifiedInitialContentOffset;
-(void)setUnmodifiedInitialContentOffset:(CGPoint)arg1 ;
-(BOOL)correctingContentOffset;
-(void)setCorrectingContentOffset:(BOOL)arg1 ;
@end

