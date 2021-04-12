/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/


#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
@class UIColor, _UILegibilitySettings;

@interface _SBFVibrantSettings : NSObject {

	long long _style;
	UIColor* _referenceColor;
	_UILegibilitySettings* _legibilitySettings;
	double _referenceContrast;
	UIColor* _highlightLimitingColor;
	UIColor* _shimmerColor;
	UIColor* _chevronShimmerColor;
	UIColor* _highlightColor;
	UIColor* _tintColor;

}

@property (nonatomic,retain) UIColor * highlightLimitingColor;                          //@synthesize highlightLimitingColor=_highlightLimitingColor - In the implementation block
@property (nonatomic,retain) UIColor * shimmerColor;                                    //@synthesize shimmerColor=_shimmerColor - In the implementation block
@property (nonatomic,retain) UIColor * chevronShimmerColor;                             //@synthesize chevronShimmerColor=_chevronShimmerColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightColor;                                  //@synthesize highlightColor=_highlightColor - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                       //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,readonly) UIColor * referenceColor;                                //@synthesize referenceColor=_referenceColor - In the implementation block
@property (nonatomic,readonly) double referenceContrast;                                //@synthesize referenceContrast=_referenceContrast - In the implementation block
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,readonly) long long style;                                         //@synthesize style=_style - In the implementation block
+(id)vibrantSettingsWithReferenceColor:(id)arg1 referenceContrast:(double)arg2 legibilitySettings:(id)arg3 ;
-(long long)_style;
-(void)setTintColor:(UIColor *)arg1 ;
-(id)initWithReferenceColor:(id)arg1 referenceContrast:(double)arg2 legibilitySettings:(id)arg3 ;
-(id)_computeSourceColorDodgeColorForDestinationColor:(id)arg1 producingLuminanceChange:(double)arg2 ;
-(UIColor *)highlightLimitingColor;
-(UIColor *)chevronShimmerColor;
-(id)tintViewWithFrame:(CGRect)arg1 ;
-(id)highlightLimitingViewWithFrame:(CGRect)arg1 ;
-(UIColor *)referenceColor;
-(double)referenceContrast;
-(void)setHighlightLimitingColor:(UIColor *)arg1 ;
-(void)setShimmerColor:(UIColor *)arg1 ;
-(void)setChevronShimmerColor:(UIColor *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(unsigned long long)hash;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(UIColor *)tintColor;
-(long long)style;
-(BOOL)isEqual:(id)arg1 ;
-(UIColor *)highlightColor;
-(UIColor *)shimmerColor;
@end

