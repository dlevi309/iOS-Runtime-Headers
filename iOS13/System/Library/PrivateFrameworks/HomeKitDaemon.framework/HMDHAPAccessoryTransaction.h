/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDAccessoryTransaction.h>

@class NSDictionary, HAPAccessory, NSString, NSNumber, NSData, NSDate, NSArray, HMFConnectivityInfo;

@interface HMDHAPAccessoryTransaction : HMDAccessoryTransaction {

	NSDictionary* _cameraClipCloudZoneUUIDByRecordingServiceUUID;
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
@property (nonatomic,retain) NSArray * targetUUIDs; 
@property (nonatomic,retain) NSNumber * hardwareSupport; 
@property (nonatomic,retain) NSDictionary * cameraClipCloudZoneUUIDByRecordingServiceUUID;              //@synthesize cameraClipCloudZoneUUIDByRecordingServiceUUID=_cameraClipCloudZoneUUIDByRecordingServiceUUID - In the implementation block
@property (nonatomic,retain) HMFConnectivityInfo * connectivityInfo; 
@property (nonatomic,retain) HAPAccessory * hapAccessoryLocal;                                          //@synthesize hapAccessoryLocal=_hapAccessoryLocal - In the implementation block
+(id)properties;
-(id)dependentUUIDs;
-(void)setHapAccessoryLocal:(HAPAccessory *)arg1 ;
-(HAPAccessory *)hapAccessoryLocal;
-(NSDictionary *)cameraClipCloudZoneUUIDByRecordingServiceUUID;
-(void)setCameraClipCloudZoneUUIDByRecordingServiceUUID:(NSDictionary *)arg1 ;
@end

