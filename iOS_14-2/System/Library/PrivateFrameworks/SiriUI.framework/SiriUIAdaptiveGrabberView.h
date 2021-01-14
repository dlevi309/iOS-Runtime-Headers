/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIControl.h>

@interface SiriUIAdaptiveGrabberView : UIControl {

	long long _style;

}

@property (assign,nonatomic) long long style;              //@synthesize style=_style - In the implementation block
+(Class)layerClass;
-(void)setStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(id)shapeLayer;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_commonInit;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(void)_setupWithStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(id)_bezierPathForStyle:(long long)arg1 ;
@end

