/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <UIKitCore/UIWindow.h>

@class _SBFKeyWindowStack, NSNumber;

@interface SBFWindow : UIWindow {

	_SBFKeyWindowStack* _keyWindowStack;
	NSNumber* _isHiddenOverride;

}

@property (setter=_setKeyWindowStack:,nonatomic,retain) _SBFKeyWindowStack * _keyWindowStack;              //@synthesize keyWindowStack=_keyWindowStack - In the implementation block
-(BOOL)_canBecomeKeyWindow;
-(_SBFKeyWindowStack *)_keyWindowStack;
-(void)resignAsKeyWindow;
-(BOOL)_isEffectivelyHiddenForKeyWindowStack;
-(void)_makeKeyFromKeyWindowStack;
-(void)_resignKeyFromKeyWindowStack;
-(void)_setKeyWindowStack:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)makeKeyWindow;
-(void)dealloc;
@end

