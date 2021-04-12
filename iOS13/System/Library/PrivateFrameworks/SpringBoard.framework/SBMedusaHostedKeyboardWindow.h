/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWindow.h>

@protocol UIScenePresenter;
@interface SBMedusaHostedKeyboardWindow : SBWindow {

	id<UIScenePresenter> _remoteHostedKeyboardScenePresenter;

}
+(BOOL)autorotates;
+(BOOL)_isSecure;
-(void)dealloc;
-(BOOL)isActive;
-(void)setHidden:(BOOL)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)initWithKeyboardScene:(id)arg1 ;
@end

