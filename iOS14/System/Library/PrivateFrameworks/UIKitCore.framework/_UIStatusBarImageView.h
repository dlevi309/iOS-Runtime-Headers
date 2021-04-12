/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIImageView.h>
#import <UIKitCore/_UIStatusBarDisplayable.h>

@class UIImage, UIAccessibilityHUDItem, NSString;

@interface _UIStatusBarImageView : UIImageView <_UIStatusBarDisplayable> {

	BOOL _useDisabledAppearanceForAccessibilityHUD;
	long long _fontStyle;
	UIImage* _accessibilityHUDImage;
	double _iconScale;

}

@property (assign,nonatomic) double iconScale;                                                       //@synthesize iconScale=_iconScale - In the implementation block
@property (assign,nonatomic) long long fontStyle;                                                    //@synthesize fontStyle=_fontStyle - In the implementation block
@property (assign,nonatomic) BOOL useDisabledAppearanceForAccessibilityHUD;                          //@synthesize useDisabledAppearanceForAccessibilityHUD=_useDisabledAppearanceForAccessibilityHUD - In the implementation block
@property (nonatomic,retain) UIImage * accessibilityHUDImage;                                        //@synthesize accessibilityHUDImage=_accessibilityHUDImage - In the implementation block
@property (nonatomic,readonly) BOOL wantsCrossfade; 
@property (nonatomic,readonly) BOOL prefersBaselineAlignment; 
@property (nonatomic,readonly) long long overriddenVerticalAlignment; 
@property (nonatomic,readonly) UIAccessibilityHUDItem * accessibilityHUDRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)applyStyleAttributes:(id)arg1 ;
-(void)setFontStyle:(long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(double)iconScale;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImage *)accessibilityHUDImage;
-(BOOL)prefersBaselineAlignment;
-(long long)fontStyle;
-(BOOL)useDisabledAppearanceForAccessibilityHUD;
-(void)setIconScale:(double)arg1 ;
-(void)setAccessibilityHUDImage:(UIImage *)arg1 ;
-(void)setUseDisabledAppearanceForAccessibilityHUD:(BOOL)arg1 ;
-(UIAccessibilityHUDItem *)accessibilityHUDRepresentation;
@end

