/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@class UNUserNotificationCenter, IMDefaults;

@interface IMDBadgeUtilities : NSObject {

	unsigned long long _unreadCount;
	long long _lastFailedMessageDate;
	BOOL _showingFailure;
	BOOL _isUnexpectedlyLogOut;
	BOOL _addedObserverForUnexpectedlyLoggedOut;
	UNUserNotificationCenter* _notificationCenter;
	IMDefaults* _sharedDefaultsInstance;

}

@property (nonatomic,retain) UNUserNotificationCenter * notificationCenter;              //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,retain) IMDefaults * sharedDefaultsInstance;                        //@synthesize sharedDefaultsInstance=_sharedDefaultsInstance - In the implementation block
+(id)sharedInstance;
+(BOOL)_iMessageEnabled;
+(BOOL)_isTryingToLogin;
+(BOOL)_iMessageFailedAccountIsIrreparable;
+(BOOL)_isUserIntentNotLoggedOut;
+(id)_accountsArrayForServiceIMessage;
+(BOOL)_isUsableSendingForAccount:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(UNUserNotificationCenter *)notificationCenter;
-(BOOL)isInAppleStoreDemoMode;
-(void)_clearFailureBadge;
-(void)setNotificationCenter:(UNUserNotificationCenter *)arg1 ;
-(void)updateBadgeForLastFailedMessageDateChangeIfNeeded:(long long)arg1 ;
-(void)updateBadgeForUnreadCountChangeIfNeeded:(long long)arg1 ;
-(id)initWithMessageStore:(id)arg1 ;
-(id)initWithMessageStore:(id)arg1 defaultsStore:(id)arg2 ;
-(long long)_savedFailureDate;
-(void)_saveFailureDate:(long long)arg1 ;
-(void)_updateBadgeAndCancelPreviousUpdate;
-(void)_cacheFailureDate:(long long)arg1 ;
-(void)_compareLastFailureDateAndUpdateBadge:(long long)arg1 ;
-(void)_stopSuppressingSound;
-(void)_updateBadge;
-(BOOL)_shouldShowFailureString;
-(void)_postBadgeString:(id)arg1 ;
-(void)_postBadgeNumber:(id)arg1 ;
-(BOOL)_isUnexpectedlyLoggedOut;
-(void)_checkIfUnexpectedlyLoggedOut;
-(IMDefaults *)sharedDefaultsInstance;
-(void)_handleUnexpectedLogout;
-(BOOL)_isUnexpectedlyLogOutValue;
-(void)setSharedDefaultsInstance:(IMDefaults *)arg1 ;
@end

