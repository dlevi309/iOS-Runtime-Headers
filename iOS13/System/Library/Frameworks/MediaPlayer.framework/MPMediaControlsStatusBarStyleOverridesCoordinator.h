/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/SBSStatusBarStyleOverridesCoordinatorDelegate.h>

@class SBSStatusBarStyleOverridesAssertion, SBSStatusBarStyleOverridesCoordinator, MPMediaControls, NSString;

@interface MPMediaControlsStatusBarStyleOverridesCoordinator : NSObject <SBSStatusBarStyleOverridesCoordinatorDelegate> {

	SBSStatusBarStyleOverridesAssertion* _statusBarStyleOverride;
	SBSStatusBarStyleOverridesCoordinator* _coordinator;
	MPMediaControls* _mediaControls;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)statusBarCoordinator:(id)arg1 receivedTapWithContext:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)statusBarCoordinator:(id)arg1 invalidatedRegistrationWithError:(id)arg2 ;
-(void)presentMediaControls;
@end

