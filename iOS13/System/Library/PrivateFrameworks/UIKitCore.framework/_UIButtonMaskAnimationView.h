/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class UIView, UIButton, UIColor, NSString;

@interface _UIButtonMaskAnimationView : UIView <CAAnimationDelegate> {

	unsigned long long _hardEdge;
	UIView* _hardEdgeLine;
	UIButton* _delegate;

}

@property (assign,nonatomic) UIButton * delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign) double borderWidth; 
@property (assign,nonatomic) UIColor * borderColor; 
@property (assign) unsigned long long hardEdge; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(UIButton *)delegate;
-(void)setDelegate:(UIButton *)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(double)borderWidth;
-(void)setBorderWidth:(double)arg1 ;
-(UIColor *)borderColor;
-(void)setHardEdge:(unsigned long long)arg1 ;
-(unsigned long long)hardEdge;
-(CGRect)_frameForLine;
@end

