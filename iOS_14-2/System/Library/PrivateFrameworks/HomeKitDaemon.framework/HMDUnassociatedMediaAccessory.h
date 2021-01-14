/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDUnassociatedAccessory.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDAccessoryAdvertisement, NSString;

@interface HMDUnassociatedMediaAccessory : HMDUnassociatedAccessory <HMFLogging> {

	HMDAccessoryAdvertisement* _advertisement;

}

@property (retain) HMDAccessoryAdvertisement * advertisement;              //@synthesize advertisement=_advertisement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)modelForChangeType:(unsigned long long)arg1 uuid:(id)arg2 parentUUID:(id)arg3 ;
-(id)logIdentifier;
-(HMDAccessoryAdvertisement *)advertisement;
-(void)setAdvertisement:(HMDAccessoryAdvertisement *)arg1 ;
-(long long)associationOptions;
-(unsigned long long)hash;
-(unsigned long long)transportTypes;
-(BOOL)isEqual:(id)arg1 ;
-(id)addTransactionForHome:(id)arg1 configurationAppIdentifier:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4 ;
-(id)dumpDescription;
-(id)initWithAdvertisement:(id)arg1 messageDispatcher:(id)arg2 ;
-(void)updateAdvertisementData:(id)arg1 ;
-(BOOL)isHAPAirPlay2Accessory;
@end

