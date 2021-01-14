/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <NewsUI/IMCustomSlider.h>

@interface AEScrubberSlider : IMCustomSlider {

	double _trackRectHorizontalInset;
	UIEdgeInsets _touchInsets;

}

@property (assign,nonatomic) double trackRectHorizontalInset;              //@synthesize trackRectHorizontalInset=_trackRectHorizontalInset - In the implementation block
@property (assign,nonatomic) UIEdgeInsets touchInsets;                     //@synthesize touchInsets=_touchInsets - In the implementation block
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIEdgeInsets)touchInsets;
-(void)setTouchInsets:(UIEdgeInsets)arg1 ;
-(double)trackRectHorizontalInset;
-(void)setTrackRectHorizontalInset:(double)arg1 ;
@end

