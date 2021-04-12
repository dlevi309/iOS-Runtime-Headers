/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


#import <IDS/IDS-Structs.h>
@class _IDSDevice, NSArray, NSUUID, NSData, NSDate, IDSEndpointCapabilities, NSString, IDSDestination;

@interface IDSDevice : NSObject {

	_IDSDevice* _internal;

}

@property (nonatomic,readonly) NSArray * linkedUserURIs; 
@property (setter=setNSUUID:,nonatomic,retain) NSUUID * nsuuid; 
@property (nonatomic,readonly) BOOL supportsApplePay; 
@property (nonatomic,readonly) BOOL supportsTethering; 
@property (nonatomic,readonly) BOOL supportsHandoff; 
@property (nonatomic,readonly) BOOL supportsiCloudPairing; 
@property (nonatomic,readonly) BOOL supportsSMSRelay; 
@property (nonatomic,readonly) BOOL supportsMMSRelay; 
@property (nonatomic,readonly) BOOL supportsPhoneCalls; 
@property (nonatomic,readonly) NSArray * identities; 
@property (nonatomic,readonly) NSData * pushToken; 
@property (nonatomic,readonly) NSDate * lastActivityDate; 
@property (nonatomic,readonly) BOOL isCloudConnected; 
@property (nonatomic,readonly) IDSEndpointCapabilities * capabilities; 
@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) NSString * uniqueIDOverride; 
@property (nonatomic,readonly) NSString * modelIdentifier; 
@property (nonatomic,readonly) NSString * productName; 
@property (nonatomic,readonly) NSString * productVersion; 
@property (nonatomic,readonly) SCD_Struct_ID4 operatingSystemVersion; 
@property (nonatomic,readonly) NSString * productBuildVersion; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * service; 
@property (nonatomic,readonly) NSString * deviceColor; 
@property (nonatomic,readonly) NSString * enclosureColor; 
@property (nonatomic,readonly) BOOL isHSATrusted; 
@property (nonatomic,readonly) BOOL isDefaultPairedDevice; 
@property (nonatomic,readonly) BOOL isLocallyPaired; 
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,readonly) long long relationship; 
@property (nonatomic,readonly) unsigned long long pairingProtocolVersion; 
@property (nonatomic,readonly) unsigned long long minCompatibilityVersion; 
@property (nonatomic,readonly) unsigned long long maxCompatibilityVersion; 
@property (nonatomic,readonly) unsigned long long serviceMinCompatibilityVersion; 
@property (getter=isNearby,nonatomic,readonly) BOOL nearby; 
@property (getter=isConnected,nonatomic,readonly) BOOL connected; 
@property (nonatomic,readonly) IDSDestination * destination; 
@property (nonatomic,readonly) BOOL locallyPresent; 
-(BOOL)isConnected;
-(NSString *)productName;
-(id)compactDescription;
-(IDSEndpointCapabilities *)capabilities;
-(id)_internal;
-(NSString *)uniqueID;
-(BOOL)isLocallyPaired;
-(BOOL)isNearby;
-(NSData *)pushToken;
-(BOOL)supportsiCloudPairing;
-(BOOL)supportsTethering;
-(long long)relationship;
-(void)setNSUUID:(id)arg1 ;
-(void)_addIdentity:(id)arg1 ;
-(void)_setService:(id)arg1 ;
-(BOOL)isHSATrusted;
-(NSString *)productVersion;
-(NSArray *)linkedUserURIs;
-(BOOL)supportsSMSRelay;
-(BOOL)supportsMMSRelay;
-(BOOL)supportsPhoneCalls;
-(BOOL)locallyPresent;
-(unsigned long long)maxCompatibilityVersion;
-(unsigned long long)serviceMinCompatibilityVersion;
-(NSUUID *)nsuuid;
-(SCD_Struct_ID4)operatingSystemVersion;
-(NSString *)productBuildVersion;
-(BOOL)isActive;
-(id)fullDescription;
-(NSDate *)lastActivityDate;
-(unsigned long long)minCompatibilityVersion;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(NSString *)deviceColor;
-(BOOL)supportsHandoff;
-(NSString *)modelIdentifier;
-(id)_initWithDictionary:(id)arg1 ;
-(NSArray *)identities;
-(NSString *)enclosureColor;
-(BOOL)isDefaultPairedDevice;
-(BOOL)supportsApplePay;
-(IDSDestination *)destination;
-(BOOL)isCloudConnected;
-(NSString *)service;
-(void)dealloc;
-(NSString *)uniqueIDOverride;
-(unsigned long long)pairingProtocolVersion;
-(void)_setAccount:(id)arg1 ;
@end

