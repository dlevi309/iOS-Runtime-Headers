/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)namespace;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)init;
-(id<HMSoftwareUpdateControllerDelegate>)delegate;
-(NSUUID *)uniqueIdentifier;
-(HMAccessory *)accessory;
-(id)logIdentifier;
-(_HMContext *)context;
-(void)setDelegate:(id<HMSoftwareUpdateControllerDelegate>)arg1 ;
-(id)messageDestination;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(unsigned long long)hash;
-(void)configureWithContext:(id)arg1 ;
-(HMSoftwareUpdate *)availableUpdate;
-(BOOL)isControllable;
-(void)setAvailableUpdate:(HMSoftwareUpdate *)arg1 ;
-(id)initWithAccessory:(id)arg1 ;
-(void)fetchAvailableUpdateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startUpdate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setContext:(_HMContext *)arg1 ;
@end

