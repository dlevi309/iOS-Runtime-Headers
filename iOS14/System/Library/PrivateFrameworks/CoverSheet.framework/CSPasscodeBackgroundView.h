/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, MTMaterialView, UIView;

@interface CSPasscodeBackgroundView : UIView {

	UIColor* _reduceTransparencyBackingColor;
	MTMaterialView* _materialView;
	UIView* _lightenSourceOverView;
	UIView* _plusDView;
	UIView* _reduceTransparencyTintingView;
	UIView* _reduceTransparencyBackingView;

}

@property (nonatomic,retain) MTMaterialView * materialView;                         //@synthesize materialView=_materialView - In the implementation block
@property (nonatomic,retain) UIView * lightenSourceOverView;                        //@synthesize lightenSourceOverView=_lightenSourceOverView - In the implementation block
@property (nonatomic,retain) UIView * plusDView;                                    //@synthesize plusDView=_plusDView - In the implementation block
@property (nonatomic,retain) UIView * reduceTransparencyTintingView;                //@synthesize reduceTransparencyTintingView=_reduceTransparencyTintingView - In the implementation block
@property (nonatomic,retain) UIView * reduceTransparencyBackingView;                //@synthesize reduceTransparencyBackingView=_reduceTransparencyBackingView - In the implementation block
@property (nonatomic,retain) UIColor * reduceTransparencyBackingColor;              //@synthesize reduceTransparencyBackingColor=_reduceTransparencyBackingColor - In the implementation block
-(void)setWeighting:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setReduceTransparencyBackingColor:(UIColor *)arg1 ;
-(void)setPlusDView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(MTMaterialView *)materialView;
-(UIView *)plusDView;
-(void)setMaterialView:(MTMaterialView *)arg1 ;
-(UIColor *)reduceTransparencyBackingColor;
-(void)_setPlusDBackgroundColorWithWeighting:(double)arg1 ;
-(UIView *)lightenSourceOverView;
-(void)setLightenSourceOverView:(UIView *)arg1 ;
-(UIView *)reduceTransparencyTintingView;
-(void)setReduceTransparencyTintingView:(UIView *)arg1 ;
-(UIView *)reduceTransparencyBackingView;
-(void)setReduceTransparencyBackingView:(UIView *)arg1 ;
@end

