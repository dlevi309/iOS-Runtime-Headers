/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIButton.h>

@interface CAMIntensityButton : UIButton {

	double _intensityValue;
	long long _layoutStyle;
	long long _orientation;
	UIEdgeInsets _tappableEdgeInsets;

}

@property (assign,nonatomic) double intensityValue;                        //@synthesize intensityValue=_intensityValue - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,nonatomic) UIEdgeInsets tappableEdgeInsets;              //@synthesize tappableEdgeInsets=_tappableEdgeInsets - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                        //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) long long orientation;                        //@synthesize orientation=_orientation - In the implementation block
-(void)setTappableEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setLayoutStyle:(long long)arg1 ;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(UIEdgeInsets)tappableEdgeInsets;
-(void)setActive:(BOOL)arg1 ;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(UIEdgeInsets)alignmentRectInsets;
-(long long)layoutStyle;
-(BOOL)isActive;
-(long long)orientation;
-(void)setActive:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setOrientation:(long long)arg1 ;
-(void)_updateColorsAnimated:(BOOL)arg1 ;
-(void)setIntensityValue:(double)arg1 ;
-(double)intensityValue;
@end

