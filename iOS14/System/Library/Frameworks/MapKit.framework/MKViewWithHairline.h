/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class MKVibrantView, UIColor;

@interface MKViewWithHairline : UIView {

	MKVibrantView* _bottomHairline;
	MKVibrantView* _topHairline;
	UIColor* _hairlineColor;
	double _leftHairlineInset;
	double _rightHairlineInset;

}

@property (nonatomic,retain) UIColor * hairlineColor;                                              //@synthesize hairlineColor=_hairlineColor - In the implementation block
@property (assign,nonatomic) double leftHairlineInset;                                             //@synthesize leftHairlineInset=_leftHairlineInset - In the implementation block
@property (assign,nonatomic) double rightHairlineInset;                                            //@synthesize rightHairlineInset=_rightHairlineInset - In the implementation block
@property (assign,getter=isTopHairlineHidden,nonatomic) BOOL topHairlineHidden; 
@property (assign,getter=isBottomHairlineHidden,nonatomic) BOOL bottomHairlineHidden; 
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isBottomHairlineHidden;
-(void)setHairlineColor:(UIColor *)arg1 ;
-(UIColor *)hairlineColor;
-(double)leftHairlineInset;
-(double)rightHairlineInset;
-(void)setLeftHairlineInset:(double)arg1 ;
-(void)setRightHairlineInset:(double)arg1 ;
-(BOOL)isTopHairlineHidden;
-(void)layoutSubviews;
-(void)setTopHairlineHidden:(BOOL)arg1 ;
-(void)setBottomHairlineHidden:(BOOL)arg1 ;
@end

