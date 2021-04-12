/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class _HKReferenceRangeDotViewDot, UIColor;

@interface HKReferenceRangeDotView : UIView {

	_HKReferenceRangeDotViewDot* _dotView;

}

@property (nonatomic,retain) UIColor * dotColor; 
@property (assign,nonatomic,__weak) _HKReferenceRangeDotViewDot * dotView;              //@synthesize dotView=_dotView - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDotView:(_HKReferenceRangeDotViewDot *)arg1 ;
-(_HKReferenceRangeDotViewDot *)dotView;
-(void)setDotColor:(UIColor *)arg1 ;
-(UIColor *)dotColor;
-(CGRect)desiredDotViewFrame;
@end

