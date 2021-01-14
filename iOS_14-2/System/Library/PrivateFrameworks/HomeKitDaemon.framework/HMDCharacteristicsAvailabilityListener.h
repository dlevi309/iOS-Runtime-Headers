/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDCharacteristicsAvailabilityListenerDelegate, OS_dispatch_queue;
@class NSSet, NSDictionary, HMDHAPAccessory, NSObject, HMDNotificationRegistration, NSString;

@interface HMDCharacteristicsAvailabilityListener : HMFObject <HMFLogging> {

	NSSet* _availableCharacteristics;
	NSDictionary* _interestedCharacteristicTypesByServiceType;
	id<HMDCharacteristicsAvailabilityListenerDelegate> _delegate;
	HMDHAPAccessory* _accessory;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDNotificationRegistration* _notificationRegistration;
	NSString* _logIdentifier;

}

@property (__weak,readonly) HMDHAPAccessory * accessory;                                          //@synthesize accessory=_accessory - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                      //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) HMDNotificationRegistration * notificationRegistration;                      //@synthesize notificationRegistration=_notificationRegistration - In the implementation block
@property (copy) NSSet * availableCharacteristics;                                                //@synthesize availableCharacteristics=_availableCharacteristics - In the implementation block
@property (copy,readonly) NSString * logIdentifier;                                               //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (copy,readonly) NSDictionary * interestedCharacteristicTypesByServiceType;              //@synthesize interestedCharacteristicTypesByServiceType=_interestedCharacteristicTypesByServiceType - In the implementation block
@property (__weak) id<HMDCharacteristicsAvailabilityListenerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)_registerForNotifications;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id<HMDCharacteristicsAvailabilityListenerDelegate>)delegate;
-(void)start;
-(HMDHAPAccessory *)accessory;
-(NSString *)logIdentifier;
-(void)setDelegate:(id<HMDCharacteristicsAvailabilityListenerDelegate>)arg1 ;
-(void)_notifyDelegate;
-(id)initWithAccessory:(id)arg1 workQueue:(id)arg2 interestedCharacteristicTypesByServiceType:(id)arg3 ;
-(HMDNotificationRegistration *)notificationRegistration;
-(void)setAvailableCharacteristics:(NSSet *)arg1 ;
-(NSSet *)availableCharacteristics;
-(void)handleCharacteristicsUpdated:(id)arg1 ;
-(void)handleServicesUpdated:(id)arg1 ;
-(NSDictionary *)interestedCharacteristicTypesByServiceType;
-(id)_accessoryCharacteristicsToObserve;
@end

