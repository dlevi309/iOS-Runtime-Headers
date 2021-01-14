/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(id)init;
-(UIButton *)delegate;
-(UIColor *)borderColor;
-(unsigned long long)hardEdge;
-(CGRect)_frameForLine;
-(void)setDelegate:(UIButton *)arg1 ;
-(void)layoutSubviews;
-(double)borderWidth;
-(void)setHardEdge:(unsigned long long)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
@end

