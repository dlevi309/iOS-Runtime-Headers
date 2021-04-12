/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setLayoutStyle:(long long)arg1 ;
-(long long)layoutStyle;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setActive:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(void)_updateColorsAnimated:(BOOL)arg1 ;
-(UIEdgeInsets)tappableEdgeInsets;
-(void)setTappableEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setIntensityValue:(double)arg1 ;
-(double)intensityValue;
@end

