/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDUnassociatedAccessory.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol OS_dispatch_queue, HMDWACDevice, HMDWACAccessoryConfigurationDelegate;
@class NSObject, HMFTimer, HMDUnassociatedAccessory, NSString;

@interface HMDUnassociatedWACAccessory : HMDUnassociatedAccessory <HMFLogging, HMFTimerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	id<HMDWACDevice> _wacDevice;
	/*^block*/id _completionHandler;
	HMFTimer* _handoffExpirationTimer;
	long long _state;
	HMDUnassociatedAccessory* _postWACAccessory;
	id<HMDWACAccessoryConfigurationDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSString* wacDeviceID;

}

@property (setter=setWACDevice:,retain) id<HMDWACDevice> wacDevice; 
@property (__weak,readonly) id<HMDWACAccessoryConfigurationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> delegateQueue;                            //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (readonly) NSString * wacDeviceID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)timerDidFire:(id)arg1 ;
-(id<HMDWACAccessoryConfigurationDelegate>)delegate;
-(id)logIdentifier;
-(id<HMDWACDevice>)wacDevice;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)startConfigurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_abort:(/*^block*/id)arg1 ;
-(unsigned long long)transportTypes;
-(void)cancelConfigurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_postWACMatchingAccessoryFound:(id)arg1 ;
-(void)_userPermissionResponse:(BOOL)arg1 ;
-(void)_configureDeviceCompleted:(id)arg1 ;
-(void)setDelegate:(id)arg1 withQueue:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4 wacDevice:(id)arg5 ;
-(void)setWACDevice:(id)arg1 ;
-(NSString *)wacDeviceID;
-(void)updateWithMatchingUnassociatedAccessory:(id)arg1 ;
-(void)_requestUserPermission;
-(void)_configureDevice;
-(void)_waitForPostWACMatch;
-(void)_postWACMatchTimeout;
@end

