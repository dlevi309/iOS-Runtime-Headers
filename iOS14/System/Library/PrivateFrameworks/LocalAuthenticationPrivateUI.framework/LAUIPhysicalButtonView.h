/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
*/

#import <LocalAuthenticationPrivateUI/LocalAuthenticationPrivateUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol UICoordinateSpace;
@class UIView, UILabel, LAUIPhysicalButtonViewAnimation, NSString;

@interface LAUIPhysicalButtonView : UIView {

	id<UICoordinateSpace> _fixedCoordinateSpace;
	id<UICoordinateSpace> _coordinateSpace;
	unsigned _edge;
	BOOL _onScreen;
	UIView* _containerView;
	UILabel* _instructionLabel;
	UIView* _buttonView;
	BOOL _animating;
	LAUIPhysicalButtonViewAnimation* _animation;
	long long _style;
	long long _animationStyle;
	NSString* _instruction;

}

@property (assign,nonatomic) long long style;                                //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long animationStyle;                       //@synthesize animationStyle=_animationStyle - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;              //@synthesize animating=_animating - In the implementation block
@property (nonatomic,readonly) unsigned edge;                                //@synthesize edge=_edge - In the implementation block
@property (nonatomic,copy) NSString * instruction;                           //@synthesize instruction=_instruction - In the implementation block
-(unsigned)edge;
-(void)setAnimationStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAnimating:(BOOL)arg1 ;
-(id)init;
-(void)updateFrame;
-(id)initWithStyle:(long long)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_colorForStyle:(long long)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(NSString *)instruction;
-(void)setInstruction:(NSString *)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(BOOL)isAnimating;
-(long long)style;
-(long long)animationStyle;
-(void)_setOnScreen:(BOOL)arg1 ;
-(CGRect)_physicalButtonNormalizedFrame;
@end

