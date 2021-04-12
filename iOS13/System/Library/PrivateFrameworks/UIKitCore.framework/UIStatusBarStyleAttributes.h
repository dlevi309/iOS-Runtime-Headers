/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIStatusBarStyleRequest, UIStatusBarForegroundStyleAttributes;

@interface UIStatusBarStyleAttributes : NSObject <NSCopying> {

	UIStatusBarStyleRequest* _request;
	UIStatusBarForegroundStyleAttributes* _foregroundStyle;
	BOOL _pulsingAnimationEnabled;

}

@property (assign,nonatomic) double foregroundAlpha; 
@property (assign,getter=isPulsingAnimationEnabled,nonatomic) BOOL pulsingAnimationEnabled;              //@synthesize pulsingAnimationEnabled=_pulsingAnimationEnabled - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
-(long long)idiom;
-(BOOL)isTranslucent;
-(id)initWithRequest:(id)arg1 ;
-(double)heightForOrientation:(long long)arg1 ;
-(BOOL)usesVerticalLayout;
-(long long)legibilityStyle;
-(id)foregroundStyle;
-(double)glowAnimationDuration;
-(BOOL)shouldShowInternalItemType:(int)arg1 withScreenCapabilities:(id)arg2 ;
-(long long)tapButtonType;
-(double)heightForMetrics:(long long)arg1 ;
-(id)backgroundImageName;
-(BOOL)isLockScreen;
-(BOOL)shouldProduceReturnEvent;
-(BOOL)isTransparent;
-(BOOL)shouldUseVisualAltitude;
-(id)backgroundColorWithTintColor:(id)arg1 ;
-(id)newForegroundStyleWithHeight:(double)arg1 ;
-(void)setPulsingAnimationEnabled:(BOOL)arg1 ;
-(BOOL)isDoubleHeight;
-(double)foregroundAlpha;
-(void)setForegroundAlpha:(double)arg1 ;
-(BOOL)supportsRasterization;
-(BOOL)isPulsingAnimationEnabled;
@end

