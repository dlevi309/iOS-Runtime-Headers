/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIInteraction.h>

@protocol _UIGestureStudyInteractionDelegate;
@class UIView, _UIGestureStudyClickInteraction, _UIGestureStudyMetricsGestureRecognizer, NSMutableDictionary, NSString;

@interface _UIGestureStudyInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction> {

	UIView* _view;
	id<_UIGestureStudyInteractionDelegate> _delegate;
	_UIGestureStudyClickInteraction* _forceClickInteraction;
	_UIGestureStudyClickInteraction* _longPressClickInteraction;
	_UIGestureStudyMetricsGestureRecognizer* _metricsGestureRecognizer;
	NSMutableDictionary* _eventMetadata;

}

@property (assign,nonatomic,__weak) id<_UIGestureStudyInteractionDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) _UIGestureStudyClickInteraction * forceClickInteraction;                         //@synthesize forceClickInteraction=_forceClickInteraction - In the implementation block
@property (nonatomic,retain) _UIGestureStudyClickInteraction * longPressClickInteraction;                     //@synthesize longPressClickInteraction=_longPressClickInteraction - In the implementation block
@property (nonatomic,retain) _UIGestureStudyMetricsGestureRecognizer * metricsGestureRecognizer;              //@synthesize metricsGestureRecognizer=_metricsGestureRecognizer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * eventMetadata;                                             //@synthesize eventMetadata=_eventMetadata - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) UIView * view;                                                          //@synthesize view=_view - In the implementation block
-(id<_UIGestureStudyInteractionDelegate>)delegate;
-(void)didMoveToView:(id)arg1 ;
-(NSMutableDictionary *)eventMetadata;
-(CGPoint)locationInCoordinateSpace:(id)arg1 ;
-(void)willMoveToView:(id)arg1 ;
-(void)setDelegate:(id<_UIGestureStudyInteractionDelegate>)arg1 ;
-(UIView *)view;
-(id)initWithDelegate:(id)arg1 ;
-(void)setEventMetadata:(NSMutableDictionary *)arg1 ;
-(_UIGestureStudyMetricsGestureRecognizer *)metricsGestureRecognizer;
-(_UIGestureStudyClickInteraction *)forceClickInteraction;
-(void)_handleMetricsEvent:(id)arg1 ;
-(_UIGestureStudyClickInteraction *)longPressClickInteraction;
-(void)_interactionDidTrigger:(id)arg1 ;
-(void)setForceClickInteraction:(_UIGestureStudyClickInteraction *)arg1 ;
-(void)setLongPressClickInteraction:(_UIGestureStudyClickInteraction *)arg1 ;
-(void)setMetricsGestureRecognizer:(_UIGestureStudyMetricsGestureRecognizer *)arg1 ;
-(void)_reportEventForTriggeredParticipant:(id)arg1 ;
-(id)_baseMetadataForTriggeredParticipant:(id)arg1 ;
-(id)_viewRegionForTriggeredParticipant:(id)arg1 ;
-(id)_numberOfActiveTouches;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
@end

