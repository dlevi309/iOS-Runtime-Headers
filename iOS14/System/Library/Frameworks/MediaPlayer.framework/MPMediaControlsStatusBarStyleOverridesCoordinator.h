/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)presentMediaControls;
-(void)statusBarCoordinator:(id)arg1 invalidatedRegistrationWithError:(id)arg2 ;
@end

