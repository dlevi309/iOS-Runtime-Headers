/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)urlString;
-(id)init;
-(id)dumpState;
-(void)_registerForMessages;
-(void)encodeWithCoder:(id)arg1 ;
-(HMDMediaProfile *)mediaProfile;
-(id)name;
-(HMDMediaAccessoryAdvertisement *)advertisement;
-(void)setAdvertisement:(HMDMediaAccessoryAdvertisement *)arg1 ;
-(long long)reachableTransports;
-(id)initWithCoder:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)configureWithHome:(id)arg1 msgDispatcher:(id)arg2 configurationTracker:(id)arg3 initialConfiguration:(BOOL)arg4 ;
-(unsigned long long)supportedTransports;
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

