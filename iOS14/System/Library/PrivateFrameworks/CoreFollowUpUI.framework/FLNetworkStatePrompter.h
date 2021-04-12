/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
*/


@class UIViewController;

@interface FLNetworkStatePrompter : NSObject {

	UIViewController* _presenter;

}
-(id)initWithPresenter:(id)arg1 ;
-(void)dealloc;
-(void)_mainQueue_promptToDisableAirplaneModeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_mainQueue_verificationFailedAlert;
-(id)_disableAirplaneActionWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_cancelActionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)preflightNetworkStateWithCompletionHandler:(/*^block*/id)arg1 ;
@end

