/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class HMFUnfairLock, NSMutableDictionary;

@interface HMDCharacteristicReadWriteLogEventManager : NSObject {

	HMFUnfairLock* _lock;
	NSMutableDictionary* _consecutiveFailureCountByHMDAccessoryUUID;
	NSMutableDictionary* _timeOfFirstFailureByHMDAccessoryUUID;

}

@property (nonatomic,readonly) HMFUnfairLock * lock;                                                         //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * consecutiveFailureCountByHMDAccessoryUUID;              //@synthesize consecutiveFailureCountByHMDAccessoryUUID=_consecutiveFailureCountByHMDAccessoryUUID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * timeOfFirstFailureByHMDAccessoryUUID;                   //@synthesize timeOfFirstFailureByHMDAccessoryUUID=_timeOfFirstFailureByHMDAccessoryUUID - In the implementation block
+(id)sharedInstance;
-(id)init;
-(HMFUnfairLock *)lock;
-(NSMutableDictionary *)timeOfFirstFailureByHMDAccessoryUUID;
-(NSMutableDictionary *)consecutiveFailureCountByHMDAccessoryUUID;
-(void)handleSubmittedErrorCode:(long long)arg1 forAccessory:(id)arg2 ;
-(unsigned long long)consecutiveFailureCountForAccessory:(id)arg1 ;
-(double)timeIntervalSinceFirstFailureForAccessory:(id)arg1 ;
@end

