/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIView, UIColor;

@interface UIKeyboardFloatingTransitionState : NSObject {

	UIView* _inputView;
	double _borderWidth;
	UIColor* _borderColor;
	double _cornerRadius;
	CGPoint _scale;
	CGRect _inputViewFrame;
	CGRect _platterViewFrame;
	UIEdgeInsets _platterInsets;
	CGAffineTransform _initialInputViewTransform;
	CGAffineTransform _finalInputViewTransform;

}

@property (nonatomic,retain) UIView * inputView;                                       //@synthesize inputView=_inputView - In the implementation block
@property (assign,nonatomic) CGRect inputViewFrame;                                    //@synthesize inputViewFrame=_inputViewFrame - In the implementation block
@property (assign,nonatomic) CGRect platterViewFrame;                                  //@synthesize platterViewFrame=_platterViewFrame - In the implementation block
@property (assign,nonatomic) UIEdgeInsets platterInsets;                               //@synthesize platterInsets=_platterInsets - In the implementation block
@property (assign,nonatomic) CGPoint scale;                                            //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) CGAffineTransform initialInputViewTransform;              //@synthesize initialInputViewTransform=_initialInputViewTransform - In the implementation block
@property (assign,nonatomic) CGAffineTransform finalInputViewTransform;                //@synthesize finalInputViewTransform=_finalInputViewTransform - In the implementation block
@property (assign,nonatomic) double borderWidth;                                       //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,copy) UIColor * borderColor;                                      //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                      //@synthesize cornerRadius=_cornerRadius - In the implementation block
-(void)setInputView:(UIView *)arg1 ;
-(UIColor *)borderColor;
-(CGPoint)scale;
-(CGRect)inputViewFrame;
-(void)setInputViewFrame:(CGRect)arg1 ;
-(CGRect)platterViewFrame;
-(void)setPlatterViewFrame:(CGRect)arg1 ;
-(UIEdgeInsets)platterInsets;
-(void)setPlatterInsets:(UIEdgeInsets)arg1 ;
-(CGAffineTransform)initialInputViewTransform;
-(void)setInitialInputViewTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)finalInputViewTransform;
-(void)setFinalInputViewTransform:(CGAffineTransform)arg1 ;
-(UIView *)inputView;
-(double)cornerRadius;
-(void)setScale:(CGPoint)arg1 ;
-(double)borderWidth;
-(void)setCornerRadius:(double)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
@end

