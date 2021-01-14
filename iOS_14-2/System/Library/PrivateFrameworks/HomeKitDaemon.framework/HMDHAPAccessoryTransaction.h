/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDAccessoryTransaction.h>

@class HAPAccessory, NSString, NSNumber, NSData, NSDate, NSArray, HMFConnectivityInfo, NSSet;

@interface HMDHAPAccessoryTransaction : HMDAccessoryTransaction {

	HAPAccessory* _hapAccessoryLocal;

}

@property (nonatomic,retain) NSString * uniqueIdentifier; 
@property (nonatomic,retain) NSString * bridgeUUID; 
@property (nonatomic,retain) NSNumber * supportsRelay; 
@property (nonatomic,retain) NSNumber * accessoryFlags; 
@property (nonatomic,retain) NSNumber * certificationStatus; 
@property (nonatomic,retain) NSData * broadcastKey; 
@property (nonatomic,retain) NSNumber * keyUpdatedStateNumber; 
@property (nonatomic,retain) NSDate * keyUpdatedTime; 
@property (nonatomic,retain) NSString * pairingUsername; 
@property (nonatomic,retain) NSData * publicKey; 
@property (nonatomic,retain) NSNumber * relayState; 
@property (nonatomic,retain) NSString * relayIdentifier; 
@property (nonatomic,retain) NSData * relayAccessToken; 
@property (nonatomic,retain) NSArray * transportInformation; 
@property (nonatomic,retain) NSData * accessorySetupHash; 
@property (nonatomic,retain) NSNumber * wiFiTransportCapabilities; 
@property (nonatomic,retain) NSArray * targetUUIDs; 
@property (nonatomic,retain) NSNumber * hardwareSupport; 
@property (nonatomic,retain) HMFConnectivityInfo * connectivityInfo; 
@property (nonatomic,retain) HAPAccessory * hapAccessoryLocal;                       //@synthesize hapAccessoryLocal=_hapAccessoryLocal - In the implementation block
@property (nonatomic,retain) NSNumber * sleepInterval; 
@property (nonatomic,retain) NSNumber * hasOnboardedForNaturalLighting; 
@property (nonatomic,retain) NSSet * initialServiceTypeUUIDs; 
+(id)properties;
-(id)dependentUUIDs;
-(void)setHapAccessoryLocal:(HAPAccessory *)arg1 ;
-(HAPAccessory *)hapAccessoryLocal;
@end

