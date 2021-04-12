/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@protocol HMSoftwareUpdateControllerDelegate;
@class HMFUnfairLock, HMSoftwareUpdate, HMAccessory, NSUUID, _HMContext, NSString;

@interface HMSoftwareUpdateController : NSObject <HMFMessageReceiver, HMObjectMerge> {

	HMFUnfairLock* _lock;
	HMSoftwareUpdate* _availableUpdate;
	HMAccessory* _accessory;
	id<HMSoftwareUpdateControllerDelegate> _delegate;
	NSUUID* _uniqueIdentifier;
	_HMContext* _context;

}

@property (nonatomic,retain) _HMContext * context;                                            //@synthesize context=_context - In the implementation block
@property (__weak) HMAccessory * accessory;                                                   //@synthesize accessory=_accessory - In the implementation block
@property (retain) HMSoftwareUpdate * availableUpdate;                                        //@synthesize availableUpdate=_availableUpdate - In the implementation block
@property (getter=isControllable,readonly) BOOL controllable; 
@property (__weak) id<HMSoftwareUpdateControllerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
+(id)namespace;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id<HMSoftwareUpdateControllerDelegate>)delegate;
-(void)setDelegate:(id<HMSoftwareUpdateControllerDelegate>)arg1 ;
-(_HMContext *)context;
-(NSUUID *)uniqueIdentifier;
-(void)setContext:(_HMContext *)arg1 ;
-(HMAccessory *)accessory;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(id)logIdentifier;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(id)messageDestination;
-(void)configureWithContext:(id)arg1 ;
-(HMSoftwareUpdate *)availableUpdate;
-(BOOL)isControllable;
-(void)setAvailableUpdate:(HMSoftwareUpdate *)arg1 ;
-(id)initWithAccessory:(id)arg1 ;
-(void)fetchAvailableUpdateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startUpdate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

