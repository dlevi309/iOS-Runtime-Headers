/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isVertical;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAnimating:(BOOL)arg1 ;
-(void)removeFromSuperview;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)animating;
-(void)didMoveToSuperview;
-(id)_dotView;
-(BOOL)isDotted;
-(BOOL)clipDot:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)updateDot;
-(BOOL)isScaling;
-(void)willMoveToWindow:(id)arg1 ;
-(long long)orientation;
-(BOOL)isScrolling;
-(UITextRangeView *)hostView;
-(BOOL)autoscrolled;
-(void)setIsDotted:(BOOL)arg1 ;
-(BOOL)isRotating;
-(BOOL)isPointedUp;
-(BOOL)isPointedDown;
-(BOOL)isPointedLeft;
-(BOOL)isPointedRight;
-(void)mustFlattenForAlert:(id)arg1 ;
-(void)canExpandAfterAlert:(id)arg1 ;
-(void)saveDeactivationReason:(id)arg1 ;
-(void)mustFlattenForResignActive:(id)arg1 ;
-(void)setAlertFlattened:(BOOL)arg1 ;
-(void)canExpandAfterBecomeActive:(id)arg1 ;
-(void)mustFlattenForNavigationTransition:(id)arg1 ;
-(void)canExpandAfterNavigationTransition:(id)arg1 ;
-(void)setActiveFlattened:(BOOL)arg1 ;
-(BOOL)alertFlattened;
-(void)setNavigationTransitionFlattened:(BOOL)arg1 ;
-(BOOL)inputViewIsChanging;
-(BOOL)activeFlattened;
-(BOOL)navigationTransitionFlattened;
-(BOOL)dotIsVisibleInDocument:(CGRect)arg1 ;
-(BOOL)scroller:(id)arg1 fullyContainSelectionRect:(CGRect)arg2 ;
-(void)animateGrabberInWithCompletion:(/*^block*/id)arg1 ;
-(void)animateGrabberOutWithCompletion:(/*^block*/id)arg1 ;
-(void)redrawDotForScale:(double)arg1 ;
-(void)transitionDot:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)setOrientation:(long long)arg1 ;
@end

