/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIImageView.h>
#import <UIKitCore/_UIStatusBarDisplayable.h>

@class UIImage, NSString, UIAccessibilityHUDItem;

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL wantsCrossfade; 
@property (nonatomic,readonly) BOOL prefersBaselineAlignment; 
@property (nonatomic,readonly) long long overriddenVerticalAlignment; 
@property (nonatomic,readonly) UIAccessibilityHUDItem * accessibilityHUDRepresentation; 
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)applyStyleAttributes:(id)arg1 ;
-(BOOL)prefersBaselineAlignment;
-(UIAccessibilityHUDItem *)accessibilityHUDRepresentation;
-(void)setFontStyle:(long long)arg1 ;
-(double)iconScale;
-(void)setAccessibilityHUDImage:(UIImage *)arg1 ;
-(void)setUseDisabledAppearanceForAccessibilityHUD:(BOOL)arg1 ;
-(long long)fontStyle;
-(void)setIconScale:(double)arg1 ;
-(UIImage *)accessibilityHUDImage;
-(BOOL)useDisabledAppearanceForAccessibilityHUD;
@end

