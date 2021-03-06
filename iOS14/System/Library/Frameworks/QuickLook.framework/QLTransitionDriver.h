/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


@protocol QLDismissGestureTracking;
#import <QuickLook/QuickLook-Structs.h>
@class QLItem, UIView;

@interface QLTransitionDriver : NSObject {

	BOOL _transitionContainerMasksToBounds;
	BOOL _presenting;
	QLItem* _transitionPreviewItem;
	UIView* _transitionContainer;
	UIView* _destinationView;
	UIView* _sourceView;
	id<QLDismissGestureTracking> _gestureTracker;
	double _duration;
	double _topNavigationOffset;
	double _hostNavigationOffset;
	CGSize _transitionPreviewSize;
	CGRect _sourceViewFrame;
	CGRect _uncroppedFrame;
	CGRect _transitionContainerOriginalFrame;

}

@property (assign) CGSize transitionPreviewSize;                             //@synthesize transitionPreviewSize=_transitionPreviewSize - In the implementation block
@property (retain) QLItem * transitionPreviewItem;                           //@synthesize transitionPreviewItem=_transitionPreviewItem - In the implementation block
@property (retain) UIView * transitionContainer;                             //@synthesize transitionContainer=_transitionContainer - In the implementation block
@property (retain) UIView * destinationView;                                 //@synthesize destinationView=_destinationView - In the implementation block
@property (retain) UIView * sourceView;                                      //@synthesize sourceView=_sourceView - In the implementation block
@property (assign) CGRect sourceViewFrame;                                   //@synthesize sourceViewFrame=_sourceViewFrame - In the implementation block
@property (assign) CGRect uncroppedFrame;                                    //@synthesize uncroppedFrame=_uncroppedFrame - In the implementation block
@property (assign) CGRect transitionContainerOriginalFrame;                  //@synthesize transitionContainerOriginalFrame=_transitionContainerOriginalFrame - In the implementation block
@property (assign) BOOL transitionContainerMasksToBounds;                    //@synthesize transitionContainerMasksToBounds=_transitionContainerMasksToBounds - In the implementation block
@property (retain) id<QLDismissGestureTracking> gestureTracker;              //@synthesize gestureTracker=_gestureTracker - In the implementation block
@property (assign) BOOL presenting;                                          //@synthesize presenting=_presenting - In the implementation block
@property (assign) double duration;                                          //@synthesize duration=_duration - In the implementation block
@property (assign) double topNavigationOffset;                               //@synthesize topNavigationOffset=_topNavigationOffset - In the implementation block
@property (assign) double hostNavigationOffset;                              //@synthesize hostNavigationOffset=_hostNavigationOffset - In the implementation block
-(void)tearDown;
-(void)setDuration:(double)arg1 ;
-(void)setSourceView:(UIView *)arg1 ;
-(void)setTransitionPreviewSize:(CGSize)arg1 ;
-(UIView *)sourceView;
-(void)animateFinishTransition;
-(CGSize)transitionPreviewSize;
-(QLItem *)transitionPreviewItem;
-(UIView *)transitionContainer;
-(UIView *)destinationView;
-(CGRect)sourceViewFrame;
-(CGRect)transitionContainerOriginalFrame;
-(void)setTransitionContainerOriginalFrame:(CGRect)arg1 ;
-(BOOL)transitionContainerMasksToBounds;
-(void)setTransitionContainerMasksToBounds:(BOOL)arg1 ;
-(BOOL)presenting;
-(void)setPresenting:(BOOL)arg1 ;
-(void)animateTransition;
-(void)setTransitionContainer:(UIView *)arg1 ;
-(void)setGestureTracker:(id<QLDismissGestureTracking>)arg1 ;
-(void)setDestinationView:(UIView *)arg1 ;
-(void)setSourceViewFrame:(CGRect)arg1 ;
-(CGRect)uncroppedFrame;
-(void)setUncroppedFrame:(CGRect)arg1 ;
-(double)topNavigationOffset;
-(void)setTopNavigationOffset:(double)arg1 ;
-(double)hostNavigationOffset;
-(void)setHostNavigationOffset:(double)arg1 ;
-(void)setTransitionPreviewItem:(QLItem *)arg1 ;
-(double)duration;
-(id<QLDismissGestureTracking>)gestureTracker;
@end

