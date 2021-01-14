/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)_sendChangeNotification;
+(void)sendChangeNotification;
+(void)removeUserDefaultsForAccountIdentifier:(id)arg1 ;
+(void)endSuspendingSubscriptionStatusChangeNotifications;
+(id)copyStatusFromUserDefaults;
+(id)_existingSharedCoordinator;
+(id)sharedCoordinator;
+(void)updateUserDefaultsWithStatus:(id)arg1 ;
+(void)updateWithResponseDictionary:(id)arg1 accountIdentifier:(id)arg2 ;
+(void)beginSuspendingSubscriptionStatusChangeNotifications;
+(id)_changeNotificationSuspensionAccessQueue;
-(void)_fireStatusBlocksWithStatus:(id)arg1 isFinal:(BOOL)arg2 error:(id)arg3 ;
-(id)init;
-(void)modifyLastKnownStatusUsingBlock:(/*^block*/id)arg1 ;
-(id)_copyStatusDateFromUserDefaults;
-(void)_accountStoreChangedNotification;
-(id)_copyValidStatusForStatus:(id)arg1 ;
-(void)reset;
-(void)getStatusWithOptions:(id)arg1 statusBlock:(/*^block*/id)arg2 ;
-(SSVSubscriptionStatus *)lastKnownStatus;
-(id)_copyStatusFromUserDefaults;
-(void)_invalidateLastKnownStatus;
-(void)_handleRequestResponseWithStatus:(id)arg1 isFinal:(BOOL)arg2 error:(id)arg3 ;
-(void)_externalChangeNotification;
-(void)_validateLastKnownStatus;
-(void)_deviceStoreFrontChangedNotification;
-(void)dealloc;
-(void)_updateSubscriptionStatusAccessPolicyAllowingNotification:(BOOL)arg1 ;
@end

