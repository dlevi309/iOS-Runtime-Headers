/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarPersistentAnimationView.h>
#import <UIKitCore/_UIStatusBarDisplayable.h>

@class UIColor, UIAccessibilityHUDItem, NSString;

@interface _UIStatusBarSignalView : _UIStatusBarPersistentAnimationView <_UIStatusBarDisplayable> {

	BOOL _smallSize;
	long long _numberOfBars;
	long long _numberOfActiveBars;
	long long _signalMode;
	UIColor* _inactiveColor;
	UIColor* _activeColor;
	long long _iconSize;

}

@property (assign,nonatomic) long long iconSize;                                                     //@synthesize iconSize=_iconSize - In the implementation block
@property (assign,nonatomic) long long numberOfBars;                                                 //@synthesize numberOfBars=_numberOfBars - In the implementation block
@property (assign,nonatomic) long long numberOfActiveBars;                                           //@synthesize numberOfActiveBars=_numberOfActiveBars - In the implementation block
@property (assign,nonatomic) long long signalMode;                                                   //@synthesize signalMode=_signalMode - In the implementation block
@property (nonatomic,copy) UIColor * inactiveColor;                                                  //@synthesize inactiveColor=_inactiveColor - In the implementation block
@property (nonatomic,copy) UIColor * activeColor;                                                    //@synthesize activeColor=_activeColor - In the implementation block
@property (assign,nonatomic) BOOL smallSize;                                                         //@synthesize smallSize=_smallSize - In the implementation block
@property (nonatomic,readonly) BOOL wantsCrossfade; 
@property (nonatomic,readonly) BOOL prefersBaselineAlignment; 
@property (nonatomic,readonly) long long overriddenVerticalAlignment; 
@property (nonatomic,readonly) UIAccessibilityHUDItem * accessibilityHUDRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)_intrinsicContentSizeForNumberOfBars:(long long)arg1 iconSize:(long long)arg2 ;
-(void)setNumberOfBars:(long long)arg1 ;
-(BOOL)smallSize;
-(void)setSignalMode:(long long)arg1 ;
-(void)applyStyleAttributes:(id)arg1 ;
-(void)_iconSizeDidChange;
-(void)_updateFromMode:(long long)arg1 ;
-(void)_updateBars;
-(long long)iconSize;
-(long long)numberOfBars;
-(void)_colorsDidChange;
-(void)_updateActiveBars;
-(void)setActiveColor:(UIColor *)arg1 ;
-(void)setSmallSize:(BOOL)arg1 ;
-(UIColor *)activeColor;
-(void)setInactiveColor:(UIColor *)arg1 ;
-(long long)signalMode;
-(void)setIconSize:(long long)arg1 ;
-(UIColor *)inactiveColor;
-(void)setNumberOfActiveBars:(long long)arg1 ;
-(long long)numberOfActiveBars;
@end

