/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)_iMessageFailedAccountIsIrreparable;
+(id)sharedInstance;
+(BOOL)_iMessageEnabled;
+(BOOL)_isUserIntentNotLoggedOut;
+(id)_accountsArrayForServiceIMessage;
+(BOOL)_isUsableSendingForAccount:(id)arg1 ;
+(BOOL)_isTryingToLogin;
-(void)setNotificationCenter:(UNUserNotificationCenter *)arg1 ;
-(void)_updateBadgeAndCancelPreviousUpdate;
-(void)_cacheFailureDate:(long long)arg1 ;
-(id)init;
-(UNUserNotificationCenter *)notificationCenter;
-(void)_handleUnexpectedLogout;
-(BOOL)isInAppleStoreDemoMode;
-(void)_postBadgeString:(id)arg1 ;
-(void)_clearFailureBadge;
-(void)_compareLastFailureDateAndUpdateBadge:(long long)arg1 ;
-(id)initWithMessageStore:(id)arg1 defaultsStore:(id)arg2 ;
-(void)_updateBadge;
-(IMDefaults *)sharedDefaultsInstance;
-(void)_saveFailureDate:(long long)arg1 ;
-(id)initWithMessageStore:(id)arg1 ;
-(long long)_savedFailureDate;
-(void)setSharedDefaultsInstance:(IMDefaults *)arg1 ;
-(BOOL)_shouldShowFailureString;
-(BOOL)_isUnexpectedlyLogOutValue;
-(void)updateBadgeForLastFailedMessageDateChangeIfNeeded:(long long)arg1 ;
-(BOOL)_isUnexpectedlyLoggedOut;
-(void)_postBadgeNumber:(id)arg1 ;
-(void)updateBadgeForUnreadCountChangeIfNeeded:(long long)arg1 ;
-(void)_checkIfUnexpectedlyLoggedOut;
-(void)_stopSuppressingSound;
-(void)dealloc;
@end

