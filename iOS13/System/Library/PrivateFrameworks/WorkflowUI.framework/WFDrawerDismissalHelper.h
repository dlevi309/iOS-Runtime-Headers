/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@protocol WFDrawerDismissalHelperDelegate;
@class UIScrollView, NSHashTable, WFDrawerDismissalPanMediator;

@interface WFDrawerDismissalHelper : NSObject {

	BOOL _didDismiss;
	id<WFDrawerDismissalHelperDelegate> _delegate;
	UIScrollView* _scrollView;
	NSHashTable* _activeGestureRecognizers;
	WFDrawerDismissalPanMediator* _panMediator;
	double _dismissalRectTopEdge;
	double _currentInsideness;

}

@property (nonatomic,readonly) UIScrollView * scrollView;                                      //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) NSHashTable * activeGestureRecognizers;                           //@synthesize activeGestureRecognizers=_activeGestureRecognizers - In the implementation block
@property (nonatomic,retain) WFDrawerDismissalPanMediator * panMediator;                       //@synthesize panMediator=_panMediator - In the implementation block
@property (assign,nonatomic) BOOL didDismiss;                                                  //@synthesize didDismiss=_didDismiss - In the implementation block
@property (assign,nonatomic) double dismissalRectTopEdge;                                      //@synthesize dismissalRectTopEdge=_dismissalRectTopEdge - In the implementation block
@property (assign,nonatomic) double currentInsideness;                                         //@synthesize currentInsideness=_currentInsideness - In the implementation block
@property (assign,nonatomic,__weak) id<WFDrawerDismissalHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<WFDrawerDismissalHelperDelegate>)delegate;
-(void)setDelegate:(id<WFDrawerDismissalHelperDelegate>)arg1 ;
-(UIScrollView *)scrollView;
-(id)initWithScrollView:(id)arg1 ;
-(void)handlePanGesture:(id)arg1 ;
-(BOOL)didDismiss;
-(void)panGestureRecognizerDidBegin:(id)arg1 ;
-(void)panGestureRecognizerDidEnd:(id)arg1 ;
-(void)panGestureDidChange:(id)arg1 ;
-(double)insidenessForGestureRecognizer:(id)arg1 ;
-(void)dismissCardWithVelocity:(double)arg1 ;
-(void)dismissCardWithPanGestureRecognizer:(id)arg1 ;
-(NSHashTable *)activeGestureRecognizers;
-(void)setActiveGestureRecognizers:(NSHashTable *)arg1 ;
-(WFDrawerDismissalPanMediator *)panMediator;
-(void)setPanMediator:(WFDrawerDismissalPanMediator *)arg1 ;
-(void)setDidDismiss:(BOOL)arg1 ;
-(double)dismissalRectTopEdge;
-(void)setDismissalRectTopEdge:(double)arg1 ;
-(double)currentInsideness;
-(void)setCurrentInsideness:(double)arg1 ;
@end

