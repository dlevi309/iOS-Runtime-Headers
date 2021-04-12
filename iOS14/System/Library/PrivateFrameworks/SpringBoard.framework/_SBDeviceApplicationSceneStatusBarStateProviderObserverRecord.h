/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBDeviceApplicationSceneStatusBarStateObserver;
#import <SpringBoard/SpringBoard-Structs.h>
@interface _SBDeviceApplicationSceneStatusBarStateProviderObserverRecord : NSObject {

	struct {
		unsigned wantsDidChangeStatusBarStyleTo : 1;
		unsigned wantsDidChangeStatusBarPartStylesTo : 1;
		unsigned wantsDidChangeStatusBarAlphaTo : 1;
		unsigned wantsDidChangeStatusBarHiddenTo_withAnimation : 1;
		unsigned wantsDidChangeStatusBarOrientationTo : 1;
		unsigned wantsDidInvalidateStatusBarDescriptionForSceneWithIdentifier : 1;
		unsigned wantsDidChangeStatusBarStyleOverridesToSuppressTo : 1;
		unsigned wantsDidChangeStatusBarAvoidanceFrameTo : 1;
		unsigned wantsDidChangeSceneInterfaceOrientationTo : 1;
	}  _flags;
	id<SBDeviceApplicationSceneStatusBarStateObserver> _observer;

}
@end

