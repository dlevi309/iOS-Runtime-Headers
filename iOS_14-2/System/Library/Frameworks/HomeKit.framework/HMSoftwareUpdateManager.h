/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol HMSoftwareUpdateManagerDelegate;
@class HMFUnfairLock, HMSoftwareUpdate, _HMContext, NSUUID, NSString;

@interface HMSoftwareUpdateManager : NSObject <HMFMessageReceiver> {

	HMFUnfairLock* _lock;
	BOOL _started;
	HMSoftwareUpdate* _availableUpdate;
	id<HMSoftwareUpdateManagerDelegate> _delegate;
	_HMContext* _context;
	NSUUID* _identifier;

}

@property (nonatomic,readonly) _HMContext * context;                                          //@synthesize context=_context - In the implementation block
@property (readonly) NSUUID * identifier;                                                     //@synthesize identifier=_identifier - In the implementation block
@property (assign,getter=isStarted,nonatomic) BOOL started;                                   //@synthesize started=_started - In the implementation block
@property (__weak) id<HMSoftwareUpdateManagerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) HMSoftwareUpdate * availableUpdate;                                      //@synthesize availableUpdate=_availableUpdate - In the implementation block
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSUUID *)messageTargetUUID;
-(void)reconnect;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)_handleUpdatedAvailableUpdate:(id)arg1 ;
-(void)_handleFetch:(id)arg1 ;
-(void)_handleStartUpdate:(id)arg1 ;
-(id)init;
-(void)_reallyStartWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateAvailableUpdate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)__registerForMessages;
-(BOOL)isStarted;
-(id<HMSoftwareUpdateManagerDelegate>)delegate;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(_HMContext *)context;
-(void)stop;
-(void)setDelegate:(id<HMSoftwareUpdateManagerDelegate>)arg1 ;
-(id)messageDestination;
-(NSUUID *)identifier;
-(void)setStarted:(BOOL)arg1 ;
-(HMSoftwareUpdate *)availableUpdate;
-(void)setAvailableUpdate:(HMSoftwareUpdate *)arg1 ;
-(void)dealloc;
@end

