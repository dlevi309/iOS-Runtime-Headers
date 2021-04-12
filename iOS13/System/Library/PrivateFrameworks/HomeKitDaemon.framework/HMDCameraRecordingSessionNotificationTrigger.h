/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDCameraNotificationCharacteristicsAvailabilityListenerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDCameraRecordingSessionNotificationTriggerDelegate, OS_dispatch_queue;
@class NSObject, HMDHAPAccessory, HMDCameraNotificationCharacteristicsAvailabilityListener, NSNotificationCenter, NSSet, NSString;

@interface HMDCameraRecordingSessionNotificationTrigger : HMFObject <HMDCameraNotificationCharacteristicsAvailabilityListenerDelegate, HMFLogging> {

	id<HMDCameraRecordingSessionNotificationTriggerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDHAPAccessory* _cameraAccessory;
	HMDCameraNotificationCharacteristicsAvailabilityListener* _availabilityListener;
	NSNotificationCenter* _notificationCenter;
	NSSet* _availableCharacteristics;
	NSString* _clientIdentifier;

}

@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                                       //@synthesize workQueue=_workQueue - In the implementation block
@property (__weak,readonly) HMDHAPAccessory * cameraAccessory;                                                     //@synthesize cameraAccessory=_cameraAccessory - In the implementation block
@property (readonly) HMDCameraNotificationCharacteristicsAvailabilityListener * availabilityListener;              //@synthesize availabilityListener=_availabilityListener - In the implementation block
@property (readonly) NSNotificationCenter * notificationCenter;                                                    //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (retain) NSSet * availableCharacteristics;                                                               //@synthesize availableCharacteristics=_availableCharacteristics - In the implementation block
@property (copy,readonly) NSString * clientIdentifier;                                                             //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (__weak) id<HMDCameraRecordingSessionNotificationTriggerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(id<HMDCameraRecordingSessionNotificationTriggerDelegate>)delegate;
-(void)setDelegate:(id<HMDCameraRecordingSessionNotificationTriggerDelegate>)arg1 ;
-(void)start;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSNotificationCenter *)notificationCenter;
-(NSString *)clientIdentifier;
-(id)logIdentifier;
-(void)handleCharacteristicsValueUpdated:(id)arg1 ;
-(NSSet *)availableCharacteristics;
-(void)listener:(id)arg1 didUpdateAvailableCharacteristics:(id)arg2 ;
-(void)handleAccessoryConfigured:(id)arg1 ;
-(id)initWithCamera:(id)arg1 workQueue:(id)arg2 ;
-(id)initWithCamera:(id)arg1 workQueue:(id)arg2 availabilityListener:(id)arg3 notificationCenter:(id)arg4 ;
-(HMDHAPAccessory *)cameraAccessory;
-(HMDCameraNotificationCharacteristicsAvailabilityListener *)availabilityListener;
-(void)_handleObservedCharacteristicsValueUpdate:(id)arg1 ;
-(void)setAvailableCharacteristics:(NSSet *)arg1 ;
@end

