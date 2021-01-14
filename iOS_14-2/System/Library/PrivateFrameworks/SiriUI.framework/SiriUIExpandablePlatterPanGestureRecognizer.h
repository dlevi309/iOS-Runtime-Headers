/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <UIKitCore/UIPanGestureRecognizer.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SiriUIExpandablePlatterPanGestureRecognizerDelegate;
@class NSString;

@interface SiriUIExpandablePlatterPanGestureRecognizer : UIPanGestureRecognizer <UIGestureRecognizerDelegate> {

	BOOL _allowExpandedState;
	double _collapsedHeight;
	double _initialHeight;
	double _scrollViewContentHeight;
	double _expandedHeight;
	id<SiriUIExpandablePlatterPanGestureRecognizerDelegate> _expansionDelegate;

}

@property (assign,nonatomic,__weak) id<SiriUIExpandablePlatterPanGestureRecognizerDelegate> expansionDelegate;              //@synthesize expansionDelegate=_expansionDelegate - In the implementation block
@property (assign,nonatomic) double collapsedHeight;                                                                        //@synthesize collapsedHeight=_collapsedHeight - In the implementation block
@property (assign,nonatomic) double initialHeight;                                                                          //@synthesize initialHeight=_initialHeight - In the implementation block
@property (assign,nonatomic) double scrollViewContentHeight;                                                                //@synthesize scrollViewContentHeight=_scrollViewContentHeight - In the implementation block
@property (assign,nonatomic) double expandedHeight;                                                                         //@synthesize expandedHeight=_expandedHeight - In the implementation block
@property (assign,nonatomic) BOOL allowExpandedState;                                                                       //@synthesize allowExpandedState=_allowExpandedState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(double)initialHeight;
-(double)expandedHeight;
-(double)collapsedHeight;
-(void)setExpandedHeight:(double)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)panGestureRecognizerDidPan:(id)arg1 ;
-(double)projectedTranslationWithVelocity:(double)arg1 decelerationRate:(double)arg2 ;
-(id<SiriUIExpandablePlatterPanGestureRecognizerDelegate>)expansionDelegate;
-(id)initWithExpansionDelegate:(id)arg1 ;
-(void)setCollapsedHeight:(double)arg1 ;
-(void)setInitialHeight:(double)arg1 ;
-(double)scrollViewContentHeight;
-(void)setScrollViewContentHeight:(double)arg1 ;
-(BOOL)allowExpandedState;
-(void)setAllowExpandedState:(BOOL)arg1 ;
-(void)setExpansionDelegate:(id<SiriUIExpandablePlatterPanGestureRecognizerDelegate>)arg1 ;
@end

