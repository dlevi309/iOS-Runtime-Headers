/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(_HKReferenceRangeDotViewDot *)dotView;
-(void)setFrame:(CGRect)arg1 ;
-(UIColor *)dotColor;
-(void)setDotColor:(UIColor *)arg1 ;
-(void)setDotView:(_HKReferenceRangeDotViewDot *)arg1 ;
-(CGRect)desiredDotViewFrame;
@end

