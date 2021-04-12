/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDCameraNotificationCharacteristicsAvailabilityListenerDelegate, OS_dispatch_queue;
@class NSSet, HMDHAPAccessory, NSObject, HMDNotificationRegistration, NSString;

@interface HMDCameraNotificationCharacteristicsAvailabilityListener : HMFObject <HMFLogging> {

	NSSet* _availableCharacteristics;
	id<HMDCameraNotificationCharacteristicsAvailabilityListenerDelegate> _delegate;
	HMDHAPAccessory* _accessory;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDNotificationRegistration* _notificationRegistration;

}

@property (__weak,readonly) HMDHAPAccessory * accessory;                                                       //@synthesize accessory=_accessory - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                                   //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) HMDNotificationRegistration * notificationRegistration;                                   //@synthesize notificationRegistration=_notificationRegistration - In the implementation block
@property (retain) NSSet * availableCharacteristics;                                                           //@synthesize availableCharacteristics=_availableCharacteristics - In the implementation block
@property (__weak) id<HMDCameraNotificationCharacteristicsAvailabilityListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id<HMDCameraNotificationCharacteristicsAvailabilityListenerDelegate>)delegate;
-(void)setDelegate:(id<HMDCameraNotificationCharacteristicsAvailabilityListenerDelegate>)arg1 ;
-(void)start;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)_registerForNotifications;
-(HMDHAPAccessory *)accessory;
-(void)_notifyDelegate;
-(HMDNotificationRegistration *)notificationRegistration;
-(id)initWithAccessory:(id)arg1 workQueue:(id)arg2 ;
-(NSSet *)availableCharacteristics;
-(void)handleCharacteristicsUpdated:(id)arg1 ;
-(void)setAvailableCharacteristics:(NSSet *)arg1 ;
-(void)handleServicesUpdated:(id)arg1 ;
-(id)_recordingTriggerCharacteristicTypeForServiceType:(id)arg1 ;
-(id)_accessoryCharacteristicsToObserve;
@end

