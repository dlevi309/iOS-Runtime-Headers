/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_dispatch_queue;
@class SSVSubscriptionStatusRequest, NSObject, SSVSubscriptionStatus, NSDate, NSMutableArray;

@interface SSVSubscriptionStatusCoordinator : NSObject {

	SSVSubscriptionStatusRequest* _activeRequest;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	BOOL _didReset;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SSVSubscriptionStatus* _lastKnownStatus;
	NSDate* _lastStatusDate;
	int _notificationToken;
	long long _subscriptionStatusAccessPolicy;
	NSMutableArray* _statusBlocks;

}

@property (copy,readonly) SSVSubscriptionStatus * lastKnownStatus; 
+(id)sharedCoordinator;
+(id)copyStatusFromUserDefaults;
+(void)updateUserDefaultsWithStatus:(id)arg1 ;
+(id)_existingSharedCoordinator;
+(id)_changeNotificationSuspensionAccessQueue;
+(void)_sendChangeNotification;
+(void)sendChangeNotification;
+(void)beginSuspendingSubscriptionStatusChangeNotifications;
+(void)endSuspendingSubscriptionStatusChangeNotifications;
+(void)removeUserDefaultsForAccountIdentifier:(id)arg1 ;
+(void)updateWithResponseDictionary:(id)arg1 accountIdentifier:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)reset;
-(SSVSubscriptionStatus *)lastKnownStatus;
-(void)_externalChangeNotification;
-(void)_updateSubscriptionStatusAccessPolicyAllowingNotification:(BOOL)arg1 ;
-(void)_accountStoreChangedNotification;
-(void)_deviceStoreFrontChangedNotification;
-(id)_copyValidStatusForStatus:(id)arg1 ;
-(id)_copyStatusDateFromUserDefaults;
-(id)_copyStatusFromUserDefaults;
-(void)_handleRequestResponseWithStatus:(id)arg1 isFinal:(BOOL)arg2 error:(id)arg3 ;
-(void)_validateLastKnownStatus;
-(void)_fireStatusBlocksWithStatus:(id)arg1 isFinal:(BOOL)arg2 error:(id)arg3 ;
-(void)getStatusWithOptions:(id)arg1 statusBlock:(/*^block*/id)arg2 ;
-(void)modifyLastKnownStatusUsingBlock:(/*^block*/id)arg1 ;
-(void)_invalidateLastKnownStatus;
@end

