/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface _DKDataProtectionMaster : NSObject {

	NSMutableDictionary* _handlers;
	BOOL _deviceFormatedForContentProtection;
	NSMutableDictionary* _availableState;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	int _notifyToken;
	BOOL _notifyEnabled;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)isDataAvailableFor:(id)arg1 ;
-(BOOL)isDataAvailableForClassA;
-(BOOL)isDataAvailableForClassC;
-(void)handleKeyBagLockNotification;
-(BOOL)deviceHasBeenUnlockedSinceBoot;
-(BOOL)deviceIsPasswordConfigured;
-(BOOL)deviceIsLocked;
-(id)registerStateChangeHandler:(/*^block*/id)arg1 ;
-(void)deregisterStateChangeHandler:(id)arg1 ;
@end

