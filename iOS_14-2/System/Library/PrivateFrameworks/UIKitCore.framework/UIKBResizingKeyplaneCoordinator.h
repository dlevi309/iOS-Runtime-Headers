/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol UIKBResizingKeyplaneCoordinatorCoordinatorDelegate;
@class _UIDynamicAnimationGroup, UIView, UIColor, UIPanGestureRecognizer, NSString;

@interface UIKBResizingKeyplaneCoordinator : NSObject <UIGestureRecognizerDelegate> {

	double _prevResizingOffset;
	double _resizingOffset;
	double _foregroundOpacity;
	_UIDynamicAnimationGroup* _resizingAnimationGroup;
	UIView* _grabber;
	UIColor* _grabberColor;
	BOOL _isResizing;
	id<UIKBResizingKeyplaneCoordinatorCoordinatorDelegate> _delegate;
	UIPanGestureRecognizer* _gestureRecognizer;

}

@property (assign,nonatomic,__weak) id<UIKBResizingKeyplaneCoordinatorCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double resizingOffset;                                                             //@synthesize resizingOffset=_resizingOffset - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * gestureRecognizer;                                        //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,readonly) BOOL isResizing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)savedResizingOffset;
-(void)dimKeys:(id)arg1 ;
-(UIPanGestureRecognizer *)gestureRecognizer;
-(void)uninstallGestureRecognizers;
-(id)init;
-(id<UIKBResizingKeyplaneCoordinatorCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<UIKBResizingKeyplaneCoordinatorCoordinatorDelegate>)arg1 ;
-(void)reloadResizingOffset;
-(void)handleResizeGesture:(id)arg1 ;
-(void)updateGrabber;
-(void)resizeKeyplaneWithOffset:(double)arg1 andRedraw:(BOOL)arg2 ;
-(BOOL)isResizing;
-(void)updateGestureRecognizers;
-(void)setRenderConfig:(id)arg1 ;
-(void)saveResizingStopIndex:(unsigned long long)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(double)resizingOffset;
-(void)stopResizing;
@end

