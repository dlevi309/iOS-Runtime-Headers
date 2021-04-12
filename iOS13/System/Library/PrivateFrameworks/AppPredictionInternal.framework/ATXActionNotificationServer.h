/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <libobjc.A.dylib/WFLWorkflowControllerDelegate.h>
#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>

@protocol ATXTVIntentHandler;
@class UNUserNotificationCenter, WFLWorkflowController, PETScalarEventTracker, NSString;

@interface ATXActionNotificationServer : NSObject <WFLWorkflowControllerDelegate, UNUserNotificationCenterDelegate> {

	UNUserNotificationCenter* _notificationCenter;
	WFLWorkflowController* _currentWorkflowController;
	id<ATXTVIntentHandler> _tvIntentHandler;
	PETScalarEventTracker* _removeTracker;
	PETScalarEventTracker* _notifyInitTracker;
	PETScalarEventTracker* _notifyErrorTracker;
	PETScalarEventTracker* _notifySuccessTracker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)_requestIdentifierForBundleId:(id)arg1 ;
+(id)localizedContentBodyStringWithString:(id)arg1 forAction:(id)arg2 ;
+(id)bundleIdFromRequestIdentifier:(id)arg1 ;
-(id)init;
-(BOOL)_isRTL;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)_attachmentForIdentifier:(id)arg1 ;
-(void)_setupNotifications;
-(void)workflowControllerWillRun:(id)arg1 ;
-(void)workflowController:(id)arg1 didRunAction:(id)arg2 ;
-(id)workflowController:(id)arg1 userInterfaceForRunningAction:(id)arg2 ;
-(void)workflowControllerDidFinishRunning:(id)arg1 withOutput:(id)arg2 ;
-(void)workflowControllerDidStop:(id)arg1 withError:(id)arg2 ;
-(void)_postTestNotification;
-(void)_postTestNotificationWithPredictionCount:(long long)arg1 ;
-(void)postNotificationForATXAction:(id)arg1 actionResponse:(id)arg2 ;
-(void)postNotificationForATXActionResponse:(id)arg1 ;
-(unsigned long long)deliveredNotificationCount;
-(BOOL)hasLockscreenPrediction;
-(void)_postNotificationForATXAction:(id)arg1 actionResponse:(id)arg2 ;
-(void)removeAllNotificationsAndTrackEvent:(BOOL)arg1 ;
-(id)_localizedStringForKey:(id)arg1 defaultValue:(id)arg2 languageCode:(id)arg3 ;
-(void)_handleIntent:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

