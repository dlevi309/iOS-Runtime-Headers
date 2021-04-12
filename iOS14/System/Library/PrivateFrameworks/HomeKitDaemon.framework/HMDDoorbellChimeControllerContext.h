/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMDDoorbellChimeControllerContext.h>
@class HMDHAPAccessory, NSNotificationCenter, HMDCharacteristicsAvailabilityListener;


@protocol HMDDoorbellChimeControllerContext <NSObject>
@property (__weak,readonly) HMDHAPAccessory * accessory; 
@property (readonly) NSObject*<OS_dispatch_queue> workQueue; 
@property (readonly) NSNotificationCenter * notificationCenter; 
@property (readonly) HMDCharacteristicsAvailabilityListener * listener; 
@property (getter=isFeatureEnabled,readonly) BOOL featureEnabled; 
@property (getter=isCurrentDevicePrimaryResident,readonly) BOOL currentDevicePrimaryResident; 
@property (readonly) Class doorbellBulletinUtilitiesClass; 
@property (readonly) double doorbellChimeMaximumAnnounceDelay; 
@required
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSNotificationCenter *)notificationCenter;
-(BOOL)isFeatureEnabled;
-(HMDHAPAccessory *)accessory;
-(HMDCharacteristicsAvailabilityListener *)listener;
-(BOOL)isCurrentDevicePrimaryResident;
-(Class)doorbellBulletinUtilitiesClass;
-(id)postCULiveAction:(id)arg1;
-(double)doorbellChimeMaximumAnnounceDelay;

@end


@protocol OS_dispatch_queue;
@class HMDHAPAccessory, NSNotificationCenter, HMDCharacteristicsAvailabilityListener, NSObject, NSString;

@interface HMDDoorbellChimeControllerContext : NSObject <HMDDoorbellChimeControllerContext> {

	HMDHAPAccessory* _accessory;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDCharacteristicsAvailabilityListener* _listener;

}

@property (__weak,readonly) HMDHAPAccessory * accessory;                                                   //@synthesize accessory=_accessory - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                               //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) NSNotificationCenter * notificationCenter; 
@property (readonly) HMDCharacteristicsAvailabilityListener * listener;                                    //@synthesize listener=_listener - In the implementation block
@property (getter=isFeatureEnabled,readonly) BOOL featureEnabled; 
@property (getter=isCurrentDevicePrimaryResident,readonly) BOOL currentDevicePrimaryResident; 
@property (readonly) Class doorbellBulletinUtilitiesClass; 
@property (readonly) double doorbellChimeMaximumAnnounceDelay; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSNotificationCenter *)notificationCenter;
-(BOOL)isFeatureEnabled;
-(HMDHAPAccessory *)accessory;
-(HMDCharacteristicsAvailabilityListener *)listener;
-(BOOL)isCurrentDevicePrimaryResident;
-(Class)doorbellBulletinUtilitiesClass;
-(id)postCULiveAction:(id)arg1 ;
-(double)doorbellChimeMaximumAnnounceDelay;
-(id)initWithWorkQueue:(id)arg1 accessory:(id)arg2 ;
@end

