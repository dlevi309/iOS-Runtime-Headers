/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBarStyleAttributes.h>

@class UIColor;

@interface UIStatusBarNewUIStyleAttributes : UIStatusBarStyleAttributes {

	UIColor* _backgroundColor;
	UIColor* _foregroundColor;
	BOOL _hasBusyBackground;

}
-(BOOL)isTranslucent;
-(id)foregroundColor;
-(BOOL)shouldUseVisualAltitude;
-(id)initWithRequest:(id)arg1 ;
-(BOOL)isTransparent;
-(id)initWithRequest:(id)arg1 backgroundColor:(id)arg2 foregroundColor:(id)arg3 ;
-(Class)foregroundStyleClass;
-(id)newForegroundStyleWithHeight:(double)arg1 ;
-(id)initWithRequest:(id)arg1 backgroundColor:(id)arg2 foregroundColor:(id)arg3 hasBusyBackground:(BOOL)arg4 ;
-(long long)legibilityStyle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)backgroundColorWithTintColor:(id)arg1 ;
@end

