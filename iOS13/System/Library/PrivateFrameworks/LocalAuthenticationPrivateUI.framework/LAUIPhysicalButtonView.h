/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
*/

#import <LocalAuthenticationPrivateUI/LocalAuthenticationPrivateUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol UICoordinateSpace;
@class UIView, UILabel, NSString;

@interface LAUIPhysicalButtonView : UIView {

	id<UICoordinateSpace> _fixedCoordinateSpace;
	id<UICoordinateSpace> _coordinateSpace;
	unsigned _edge;
	BOOL _onScreen;
	UIView* _containerView;
	UILabel* _instructionLabel;
	UIView* _buttonView;
	BOOL _animating;
	double _animationLength;
	NSString* _periodicAnimationKey;
	long long _style;
	NSString* _instruction;

}

@property (nonatomic,readonly) long long style;                              //@synthesize style=_style - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;              //@synthesize animating=_animating - In the implementation block
@property (nonatomic,copy) NSString * instruction;                           //@synthesize instruction=_instruction - In the implementation block
-(id)init;
-(long long)style;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)isAnimating;
-(void)didMoveToWindow;
-(void)setAnimating:(BOOL)arg1 ;
-(NSString *)instruction;
-(void)setInstruction:(NSString *)arg1 ;
-(void)updateFrame;
-(void)_setOnScreen:(BOOL)arg1 ;
-(void)_beginAnimationIfNecessary;
-(void)_animateWithLength:(double)arg1 ;
-(void)_beginAnimationIfNecessaryWithDelay:(double)arg1 ;
-(void)_animateWithLength:(double)arg1 delay:(double)arg2 ;
-(void)_removePeriodicAnimationForKey:(id)arg1 fromLayer:(id)arg2 ;
-(void)_endAnimationIfNecessary;
@end

