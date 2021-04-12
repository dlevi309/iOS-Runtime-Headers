/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)size;
-(HULegibilityLabel *)label;
-(id)initWithSize:(unsigned long long)arg1 ;
-(void)updateConstraints;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLabelText:(NSString *)arg1 ;
-(NSString *)labelText;
-(NSArray *)labelConstraints;
-(void)setLabelConstraints:(NSArray *)arg1 ;
-(UIVisualEffectView *)blurEffectView;
-(UIVisualEffectView *)vibrancyEffectView;
-(NSArray *)staticConstraints;
-(void)setStaticConstraints:(NSArray *)arg1 ;
@end

