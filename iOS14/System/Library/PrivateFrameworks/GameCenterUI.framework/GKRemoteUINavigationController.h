/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKitCore/UINavigationController.h>

@class GKRemoteUIController;

@interface GKRemoteUINavigationController : UINavigationController {

	GKRemoteUIController* _remoteUIController;

}

@property (nonatomic,readonly) GKRemoteUIController * remoteUIController;              //@synthesize remoteUIController=_remoteUIController - In the implementation block
-(unsigned long long)supportedInterfaceOrientations;
-(GKRemoteUIController *)remoteUIController;
-(void)loadView;
-(id)initWithRemoteUIController:(id)arg1 ;
@end

