/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIView.h>

@class HULegibilityLabel, _UILegibilitySettings, UIVisualEffectView, NSArray, NSString;

@interface HUCameraBadgeView : UIView {

	unsigned long long _size;
	HULegibilityLabel* _label;
	_UILegibilitySettings* _legibilitySettings;
	UIVisualEffectView* _blurEffectView;
	UIVisualEffectView* _vibrancyEffectView;
	NSArray* _staticConstraints;
	NSArray* _labelConstraints;

}

@property (nonatomic,readonly) unsigned long long size;                                 //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) HULegibilityLabel * label;                               //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * blurEffectView;                     //@synthesize blurEffectView=_blurEffectView - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * vibrancyEffectView;                 //@synthesize vibrancyEffectView=_vibrancyEffectView - In the implementation block
@property (nonatomic,retain) NSArray * staticConstraints;                               //@synthesize staticConstraints=_staticConstraints - In the implementation block
@property (nonatomic,retain) NSArray * labelConstraints;                                //@synthesize labelConstraints=_labelConstraints - In the implementation block
@property (nonatomic,copy) NSString * labelText; 
+(BOOL)requiresConstraintBasedLayout;
-(id)initWithSize:(unsigned long long)arg1 ;
-(unsigned long long)size;
-(UIVisualEffectView *)blurEffectView;
-(void)updateConstraints;
-(NSString *)labelText;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLabelText:(NSString *)arg1 ;
-(NSArray *)labelConstraints;
-(void)setLabelConstraints:(NSArray *)arg1 ;
-(HULegibilityLabel *)label;
-(NSArray *)staticConstraints;
-(void)setStaticConstraints:(NSArray *)arg1 ;
-(UIVisualEffectView *)vibrancyEffectView;
@end

