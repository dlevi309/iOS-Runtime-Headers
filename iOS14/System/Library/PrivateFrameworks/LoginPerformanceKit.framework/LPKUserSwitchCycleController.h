/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoginPerformanceKit.framework/LoginPerformanceKit
*/


@protocol LPKUserSwitchCycleResponder;
@interface LPKUserSwitchCycleController : NSObject {

	id<LPKUserSwitchCycleResponder> _delegate;

}

@property (assign,nonatomic,__weak) id<LPKUserSwitchCycleResponder> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<LPKUserSwitchCycleResponder>)delegate;
-(void)setDelegate:(id<LPKUserSwitchCycleResponder>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)_isLoginSession;
-(void)interruptLocalUserSwitchTest;
-(BOOL)triggerTestUserSwitchIfNeeded;
-(BOOL)_validateUserSwitchExpectation;
-(void)_clearOutLocalPerfTestDefaults;
-(void)_triggerFullLogoutWithDelay:(double)arg1 ;
-(void)_updateLocalPerfTestCycleCount:(long long)arg1 ;
-(void)_loginAccount:(id)arg1 password:(id)arg2 localLoginOnly:(BOOL)arg3 delay:(double)arg4 ;
-(void)_triggerFastLogoutWithDelay:(double)arg1 ;
-(BOOL)_setUserSwitchDestinationExpectation:(unsigned long long)arg1 ;
-(BOOL)startUserSwitchWithType:(unsigned long long)arg1 count:(long long)arg2 username:(id)arg3 password:(id)arg4 ;
@end

