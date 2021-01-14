/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)foregroundAlpha;
-(BOOL)isDoubleHeight;
-(BOOL)isTranslucent;
-(id)init;
-(void)setForegroundAlpha:(double)arg1 ;
-(BOOL)shouldProduceReturnEvent;
-(BOOL)shouldUseVisualAltitude;
-(id)backgroundImageName;
-(long long)idiom;
-(id)initWithRequest:(id)arg1 ;
-(double)glowAnimationDuration;
-(long long)tapButtonType;
-(void)setPulsingAnimationEnabled:(BOOL)arg1 ;
-(BOOL)supportsRasterization;
-(BOOL)isPulsingAnimationEnabled;
-(BOOL)isTransparent;
-(id)newForegroundStyleWithHeight:(double)arg1 ;
-(double)heightForMetrics:(long long)arg1 ;
-(double)heightForOrientation:(long long)arg1 ;
-(BOOL)usesVerticalLayout;
-(long long)legibilityStyle;
-(id)foregroundStyle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)shouldShowInternalItemType:(int)arg1 withScreenCapabilities:(id)arg2 ;
-(BOOL)isLockScreen;
-(long long)style;
-(id)backgroundColorWithTintColor:(id)arg1 ;
@end

