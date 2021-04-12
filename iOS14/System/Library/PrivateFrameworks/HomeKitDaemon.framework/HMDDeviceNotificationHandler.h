/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol HMFLocking;
@class HMDHome, NSMutableDictionary, NSString, NSMutableSet, HMFTimer, NSUUID;

@interface HMDDeviceNotificationHandler : HMFObject <HMFTimerDelegate> {

	id<HMFLocking> _lock;
	BOOL _delaySupported;
	HMDHome* _home;
	NSMutableDictionary* _updatedMediaPropertiesByMediaProfile;
	NSString* _destination;
	NSString* _requestIdentifier;
	NSMutableSet* _updatedCharacteristics;
	HMFTimer* _coalesceTimer;
	HMFTimer* _delayTimer;
	NSUUID* _notificationUpdateIdentifier;

}

@property (nonatomic,retain) NSString * destination;                                                  //@synthesize destination=_destination - In the implementation block
@property (nonatomic,retain) NSString * requestIdentifier;                                            //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                                   //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSMutableSet * updatedCharacteristics;                                   //@synthesize updatedCharacteristics=_updatedCharacteristics - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * updatedMediaPropertiesByMediaProfile;              //@synthesize updatedMediaPropertiesByMediaProfile=_updatedMediaPropertiesByMediaProfile - In the implementation block
@property (nonatomic,retain) HMFTimer * coalesceTimer;                                                //@synthesize coalesceTimer=_coalesceTimer - In the implementation block
@property (nonatomic,retain) HMFTimer * delayTimer;                                                   //@synthesize delayTimer=_delayTimer - In the implementation block
@property (assign,nonatomic) BOOL delaySupported;                                                     //@synthesize delaySupported=_delaySupported - In the implementation block
@property (nonatomic,retain) NSUUID * notificationUpdateIdentifier;                                   //@synthesize notificationUpdateIdentifier=_notificationUpdateIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(NSString *)requestIdentifier;
-(void)setDestination:(NSString *)arg1 ;
-(void)setDelayTimer:(HMFTimer *)arg1 ;
-(void)setHome:(HMDHome *)arg1 ;
-(NSString *)destination;
-(HMFTimer *)delayTimer;
-(HMDHome *)home;
-(id)initWithDestination:(id)arg1 watchDevice:(BOOL)arg2 withRequestIdentifier:(id)arg3 home:(id)arg4 ;
-(id)sendNotificationForCharacteristicChanges:(id)arg1 withRequestIdentifier:(id)arg2 ;
-(id)sendNotificationForMediaProperties:(id)arg1 withRequestIdentifier:(id)arg2 ;
-(NSMutableSet *)updatedCharacteristics;
-(id)_beginCoalesce:(BOOL)arg1 ;
-(id)_dispatchNotification;
-(HMFTimer *)coalesceTimer;
-(void)setCoalesceTimer:(HMFTimer *)arg1 ;
-(BOOL)delaySupported;
-(NSUUID *)notificationUpdateIdentifier;
-(void)setNotificationUpdateIdentifier:(NSUUID *)arg1 ;
-(void)setUpdatedCharacteristics:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)updatedMediaPropertiesByMediaProfile;
-(void)setUpdatedMediaPropertiesByMediaProfile:(NSMutableDictionary *)arg1 ;
-(void)setDelaySupported:(BOOL)arg1 ;
@end

