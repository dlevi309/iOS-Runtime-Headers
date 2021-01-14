/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGSize)intrinsicContentSize;
-(id)init;
-(UIColor *)dotColor;
-(void)setDotColor:(UIColor *)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)setInnerDotColor:(UIColor *)arg1 ;
-(UIColor *)innerDotColor;
-(void)setInnerDotLayer:(CALayer *)arg1 ;
-(CALayer *)innerDotLayer;
@end

