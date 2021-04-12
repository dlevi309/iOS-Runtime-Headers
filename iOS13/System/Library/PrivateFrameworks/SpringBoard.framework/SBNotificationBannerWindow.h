/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSecureMainScreenActiveInterfaceOrientationWindow.h>

@interface SBNotificationBannerWindow : SBSecureMainScreenActiveInterfaceOrientationWindow {

	BOOL _isShowingLongLook;

}

@property (assign,nonatomic) BOOL isShowingLongLook;              //@synthesize isShowingLongLook=_isShowingLongLook - In the implementation block
-(id)init;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)canResignFirstResponder;
-(BOOL)_canBecomeKeyWindow;
-(void)setIsShowingLongLook:(BOOL)arg1 ;
-(BOOL)isShowingLongLook;
@end

