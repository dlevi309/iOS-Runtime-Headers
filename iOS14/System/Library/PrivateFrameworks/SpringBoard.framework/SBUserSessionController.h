/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBLogoutProgressDataSource.h>
#import <libobjc.A.dylib/SBLogoutProgressDelegate.h>
#import <libobjc.A.dylib/UMCriticalUserSwitchStakeholder.h>

@class UMUserManager, UMUser, SBMainDisplayPolicyAggregator, SBLogoutProgressTransientOverlayViewController, NSMutableArray, NSMutableSet, UMUserSwitchBlockingTask, NSDate, NSDictionary, LKLogoutSupport, NSString;

@interface SBUserSessionController : NSObject <SBLogoutProgressDataSource, SBLogoutProgressDelegate, UMCriticalUserSwitchStakeholder> {

	UMUserManager* _userManager;
	UMUser* _lazy_user;
	SBMainDisplayPolicyAggregator* _lazy_policyAggregator;
	SBLogoutProgressTransientOverlayViewController* _progressTransientOverlayViewController;
	NSMutableArray* _displayApplications;
	NSMutableSet* _terminatingApplications;
	UMUserSwitchBlockingTask* _terminateApplicationsTask;
	NSDate* _terminateApplicationsStartDate;
	NSDictionary* _debugBlockingTasks;
	LKLogoutSupport* _logoutSupport;
	BOOL _loginSession;
	BOOL _loggingOut;

}

@property (assign,getter=isLoggingOut,nonatomic) BOOL loggingOut;                                                                                 //@synthesize loggingOut=_loggingOut - In the implementation block
@property (setter=_setPolicyAggregator:,getter=_policyAggregator,nonatomic,retain) SBMainDisplayPolicyAggregator * policyAggregator;              //@synthesize lazy_policyAggregator=_lazy_policyAggregator - In the implementation block
@property (nonatomic,retain,readonly) UMUser * user; 
@property (getter=isLoginSession,nonatomic,readonly) BOOL loginSession;                                                                           //@synthesize loginSession=_loginSession - In the implementation block
@property (nonatomic,readonly) BOOL isMultiUserSupported; 
@property (nonatomic,readonly) BOOL canLogout; 
@property (nonatomic,readonly) long long sessionType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)logout;
-(id)succinctDescription;
-(BOOL)canLogout;
-(void)willSwitchToUser:(id)arg1 ;
-(SBMainDisplayPolicyAggregator *)policyAggregator;
-(id)init;
-(void)setLoggingOut:(BOOL)arg1 ;
-(id)_policyAggregator;
-(id)_massageApplicationListForDisplay:(id)arg1 ;
-(void)_readyToSwitchToUser:(id)arg1 ;
-(void)logoutWithLogoutSupport:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)sessionType;
-(NSString *)description;
-(void)userSwitchBlockingTasksDidUpdate:(id)arg1 ;
-(CGPoint)_portraitOrientedProgressLocationForOrientation:(long long)arg1 ;
-(BOOL)isMultiUserSupported;
-(UMUser *)user;
-(id)pendingApplicationsForLogoutProgressTransientOverlayViewController:(id)arg1 ;
-(void)_evaluateRunningApplications;
-(BOOL)isLoggingOut;
-(id)debugBlockingTasksForLogoutProgressTransientOverlayViewController:(id)arg1 ;
-(void)readyToSwitchToUser:(id)arg1 ;
-(void)logoutProgressTransientOverlayViewControllerDidDisappear:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)_noteApplicationDidExit:(id)arg1 ;
-(void)_displayProgressTransientOverlayIfNeeded;
-(void)_setPolicyAggregator:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)_initWithUserManager:(id)arg1 ;
-(void)_noteApplicationDidExitFromNotification:(id)arg1 ;
-(void)disableCurrentUser;
-(void)dealloc;
-(void)readyToSwitchToLoginSession:(id)arg1 ;
-(BOOL)isLoginSession;
@end

