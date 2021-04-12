/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@interface MCUserNotificationManager : NSObject

@property (nonatomic,readonly) BOOL hasOutstandingNotifications; 
+(id)sharedManager;
-(void)displayUserNotificationWithTitle:(id)arg1 message:(id)arg2 defaultButtonText:(id)arg3 alternateButtonText:(id)arg4 otherButtonText:(id)arg5 displayOnLockScreen:(BOOL)arg6 dismissOnLock:(BOOL)arg7 displayInAppWhitelistModes:(BOOL)arg8 dismissAfterTimeInterval:(double)arg9 assertion:(id)arg10 completionBlock:(/*^block*/id)arg11 ;
-(void)displayUserNotificationWithIdentifier:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButtonText:(id)arg4 alternateButtonText:(id)arg5 otherButtonText:(id)arg6 displayOnLockScreen:(BOOL)arg7 dismissOnLock:(BOOL)arg8 displayInAppWhitelistModes:(BOOL)arg9 dismissAfterTimeInterval:(double)arg10 assertion:(id)arg11 completionBlock:(/*^block*/id)arg12 ;
-(id)init;
-(BOOL)displayQueueProfileAlertForError:(id)arg1 targetDevice:(unsigned long long)arg2 ;
-(void)mainQueueDidReceiveAppWhitelistChangedNotification;
-(void)cancelAllNotificationsCompletionBlock:(/*^block*/id)arg1 ;
-(id)_purgatoryMessageForDevice:(unsigned long long)arg1 ;
-(BOOL)hasOutstandingNotifications;
-(void)_updateTitle:(id*)arg1 andMessage:(id*)arg2 withTargetFailureInfoForDevice:(unsigned long long)arg3 fromError:(id)arg4 ;
-(void)cancelNotificationEntriesMatchingPredicate:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_invalidTargetMessageForDevice:(unsigned long long)arg1 ;
-(void)_updateTitle:(id*)arg1 andMessage:(id*)arg2 withUnavailableTargetInfoForDevice:(unsigned long long)arg3 ;
-(void)promptUserToLogIntoiTunesWithTitle:(id)arg1 message:(id)arg2 assertion:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)inviteUserToVPPWithTitle:(id)arg1 message:(id)arg2 assertion:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)cancelNotificationsWithIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

