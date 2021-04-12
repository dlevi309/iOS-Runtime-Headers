/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <UIKitCore/UIWindow.h>

@class _SBFKeyWindowStack, NSNumber;

@interface SBFWindow : UIWindow {

	_SBFKeyWindowStack* _keyWindowStack;
	NSNumber* _isHiddenOverride;

}

@property (setter=_setKeyWindowStack:,nonatomic,retain) _SBFKeyWindowStack * _keyWindowStack;              //@synthesize keyWindowStack=_keyWindowStack - In the implementation block
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(void)makeKeyWindow;
-(BOOL)_canBecomeKeyWindow;
-(_SBFKeyWindowStack *)_keyWindowStack;
-(void)resignAsKeyWindow;
-(BOOL)_isEffectivelyHiddenForKeyWindowStack;
-(void)_makeKeyFromKeyWindowStack;
-(void)_resignKeyFromKeyWindowStack;
-(void)_setKeyWindowStack:(id)arg1 ;
@end

