/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, CALayer;

@interface _HKLegendDot : UIView {

	UIColor* _dotColor;
	UIColor* _innerDotColor;
	CALayer* _innerDotLayer;

}

@property (nonatomic,retain) UIColor * dotColor;                   //@synthesize dotColor=_dotColor - In the implementation block
@property (nonatomic,retain) UIColor * innerDotColor;              //@synthesize innerDotColor=_innerDotColor - In the implementation block
@property (nonatomic,retain) CALayer * innerDotLayer;              //@synthesize innerDotLayer=_innerDotLayer - In the implementation block
-(id)init;
-(CGSize)intrinsicContentSize;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)setDotColor:(UIColor *)arg1 ;
-(UIColor *)dotColor;
-(void)setInnerDotColor:(UIColor *)arg1 ;
-(UIColor *)innerDotColor;
-(void)setInnerDotLayer:(CALayer *)arg1 ;
-(CALayer *)innerDotLayer;
@end

