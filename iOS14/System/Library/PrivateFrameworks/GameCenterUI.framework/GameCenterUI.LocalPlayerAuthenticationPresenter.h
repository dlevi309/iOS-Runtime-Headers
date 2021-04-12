/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <libobjc.A.dylib/GKLocalPlayerAuthenticationUIPersonality.h>

@interface GameCenterUI.LocalPlayerAuthenticationPresenter : NSObject <GKLocalPlayerAuthenticationUIPersonality> {

	 localPlayer;
	 isUpdating;
	 onUpdatePhaseChange;
	 onAuthenticatedPlayerDidChange;
	 onUIRequired;

}
-(id)init;
-(void)authenticationShowGreenBuddyUIForLocalPlayer:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)authenticationShowSignInUIForLocalPlayer:(id)arg1 dismiss:(/*^block*/id)arg2 ;
@end

