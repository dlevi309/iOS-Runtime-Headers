/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIUCBBarButtonVisualProviderIOS.h>

@class _UIUCBKBSelectionBackground;

@interface _UIUCBGroupBarButtonVisualProviderIOS : _UIUCBBarButtonVisualProviderIOS {

	_UIUCBKBSelectionBackground* _selectionBackgroundView;
	BOOL _lightKeyboard;

}

@property (assign,nonatomic) BOOL lightKeyboard;              //@synthesize lightKeyboard=_lightKeyboard - In the implementation block
+(id)lightKeyboardProvider;
+(id)darkKeyboardProvider;
-(void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3 ;
-(BOOL)shouldLift;
-(BOOL)lightKeyboard;
-(void)updateButton:(id)arg1 forSelectedState:(BOOL)arg2 ;
-(void)setLightKeyboard:(BOOL)arg1 ;
-(void)updateButton:(id)arg1 toUseButtonShapes:(BOOL)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

