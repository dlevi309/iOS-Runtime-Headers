/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDAccessory.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDMediaAccessoryAdvertisement, HMDMediaProfile, NSString;

@interface HMDMediaAccessory : HMDAccessory <HMFLogging> {

	HMDMediaAccessoryAdvertisement* _advertisement;
	HMDMediaProfile* _mediaProfile;

}

@property (copy,readonly) HMDMediaAccessoryAdvertisement * advertisement;              //@synthesize advertisement=_advertisement - In the implementation block
@property (readonly) HMDMediaProfile * mediaProfile;                                   //@synthesize mediaProfile=_mediaProfile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMDMediaProfile *)mediaProfile;
-(id)urlString;
-(id)dumpState;
-(HMDMediaAccessoryAdvertisement *)advertisement;
-(void)setAdvertisement:(HMDMediaAccessoryAdvertisement *)arg1 ;
-(long long)reachableTransports;
-(void)_registerForMessages;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)configureWithHome:(id)arg1 msgDispatcher:(id)arg2 configurationTracker:(id)arg3 ;
-(void)setRemotelyReachable:(BOOL)arg1 ;
-(id)transactionWithObjectChangeType:(unsigned long long)arg1 ;
-(id)initWithTransaction:(id)arg1 home:(id)arg2 ;
-(void)addAdvertisement:(id)arg1 ;
-(void)handleUpdatedMinimumUserPrivilege:(long long)arg1 ;
-(void)handleUpdatedPassword:(id)arg1 ;
-(void)removeAdvertisement:(id)arg1 ;
-(id)assistantObject;
-(BOOL)_shouldFilterAccessoryProfile:(id)arg1 ;
-(BOOL)providesHashRouteID;
-(id)dumpSimpleState;
-(void)handleRoomChanged:(id)arg1 ;
-(void)handleRoomNameChanged:(id)arg1 ;
-(id)_createMediaProfile;
-(void)handleUpdatedAdvertisement:(id)arg1 ;
-(void)notifyConnectivityChangedWithReachabilityState:(BOOL)arg1 ;
@end

