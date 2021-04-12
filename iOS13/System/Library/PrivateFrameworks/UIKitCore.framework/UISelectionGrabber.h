/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UISelectionGrabberDot, UITextRangeView;

@interface UISelectionGrabber : UIView {

	double m_screenScale;
	UISelectionGrabberDot* m_dotView;
	BOOL m_isDotted;
	BOOL m_activeFlattened;
	BOOL m_alertFlattened;
	BOOL m_navigationTransitionFlattened;
	BOOL m_animating;
	long long m_orientation;
	int _applicationDeactivationReason;

}

@property (nonatomic,readonly) UITextRangeView * hostView; 
@property (assign,nonatomic) BOOL isDotted; 
@property (assign,nonatomic) BOOL activeFlattened; 
@property (assign,nonatomic) BOOL alertFlattened; 
@property (assign,nonatomic) BOOL navigationTransitionFlattened; 
@property (assign,nonatomic) BOOL animating; 
@property (assign,nonatomic) long long orientation; 
+(id)_grabberDot;
-(void)dealloc;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(BOOL)isVertical;
-(BOOL)isScrolling;
-(void)setHidden:(BOOL)arg1 ;
-(void)removeFromSuperview;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToSuperview;
-(void)willMoveToWindow:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)isRotating;
-(void)setAnimating:(BOOL)arg1 ;
-(BOOL)autoscrolled;
-(BOOL)animating;
-(UITextRangeView *)hostView;
-(id)_dotView;
-(BOOL)isPointedDown;
-(BOOL)isPointedUp;
-(BOOL)isPointedRight;
-(BOOL)isPointedLeft;
-(void)setIsDotted:(BOOL)arg1 ;
-(void)mustFlattenForAlert:(id)arg1 ;
-(void)canExpandAfterAlert:(id)arg1 ;
-(void)saveDeactivationReason:(id)arg1 ;
-(void)mustFlattenForResignActive:(id)arg1 ;
-(void)canExpandAfterBecomeActive:(id)arg1 ;
-(void)mustFlattenForNavigationTransition:(id)arg1 ;
-(void)canExpandAfterNavigationTransition:(id)arg1 ;
-(void)setAlertFlattened:(BOOL)arg1 ;
-(void)updateDot;
-(void)setActiveFlattened:(BOOL)arg1 ;
-(void)setNavigationTransitionFlattened:(BOOL)arg1 ;
-(BOOL)inputViewIsChanging;
-(BOOL)isDotted;
-(BOOL)alertFlattened;
-(BOOL)activeFlattened;
-(BOOL)navigationTransitionFlattened;
-(BOOL)dotIsVisibleInDocument:(CGRect)arg1 ;
-(BOOL)clipDot:(CGRect)arg1 ;
-(BOOL)isScaling;
-(BOOL)scroller:(id)arg1 fullyContainSelectionRect:(CGRect)arg2 ;
-(void)animateGrabberInWithCompletion:(/*^block*/id)arg1 ;
-(void)animateGrabberOutWithCompletion:(/*^block*/id)arg1 ;
-(void)redrawDotForScale:(double)arg1 ;
-(void)transitionDot:(long long)arg1 completion:(/*^block*/id)arg2 ;
@end

