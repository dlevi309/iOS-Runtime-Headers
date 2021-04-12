/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
*/


@class UIViewController;

@interface FLNetworkStatePrompter : NSObject {

	UIViewController* _presenter;

}
-(void)dealloc;
-(id)initWithPresenter:(id)arg1 ;
-(void)_mainQueue_promptToDisableAirplaneModeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_mainQueue_verificationFailedAlert;
-(id)_disableAirplaneActionWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_cancelActionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)preflightNetworkStateWithCompletionHandler:(/*^block*/id)arg1 ;
@end

