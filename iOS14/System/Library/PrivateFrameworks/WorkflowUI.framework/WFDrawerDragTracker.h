/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <libobjc.A.dylib/WFDrawerDragTracking.h>

@class WFDrawerGestureCoordinator, NSString;

@interface WFDrawerDragTracker : NSObject <WFDrawerDragTracking> {

	BOOL _tracking;
	double _minTranslationY;
	double _maxTranslationY;
	WFDrawerGestureCoordinator* _gestureCoordinator;
	double _initialHeight;

}

@property (nonatomic,__weak,readonly) WFDrawerGestureCoordinator * gestureCoordinator;              //@synthesize gestureCoordinator=_gestureCoordinator - In the implementation block
@property (nonatomic,readonly) double initialHeight;                                                //@synthesize initialHeight=_initialHeight - In the implementation block
@property (assign,nonatomic) BOOL tracking;                                                         //@synthesize tracking=_tracking - In the implementation block
@property (readonly) double minTranslationY;                                                        //@synthesize minTranslationY=_minTranslationY - In the implementation block
@property (readonly) double maxTranslationY;                                                        //@synthesize maxTranslationY=_maxTranslationY - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTracking:(BOOL)arg1 ;
-(BOOL)tracking;
-(double)initialHeight;
-(double)currentHeight;
-(void)beginDragging;
-(void)endDraggingWithAnimation:(id)arg1 ;
-(void)endDragging;
-(void)updateDragForVerticalTranslation:(double)arg1 ;
-(double)minTranslationY;
-(double)maxTranslationY;
-(id)initWithGestureCoordinator:(id)arg1 ;
-(WFDrawerGestureCoordinator *)gestureCoordinator;
@end

