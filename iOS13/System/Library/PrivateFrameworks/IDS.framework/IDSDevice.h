/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


#import <IDS/IDS-Structs.h>
@class _IDSDevice, NSArray, NSUUID, NSData, NSDate, NSString, IDSDestination;

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
@property (nonatomic,readonly) unsigned long long pairingProtocolVersion; 
@property (nonatomic,readonly) unsigned long long minCompatibilityVersion; 
@property (nonatomic,readonly) unsigned long long maxCompatibilityVersion; 
@property (nonatomic,readonly) unsigned long long serviceMinCompatibilityVersion; 
@property (getter=isNearby,nonatomic,readonly) BOOL nearby; 
@property (getter=isConnected,nonatomic,readonly) BOOL connected; 
@property (nonatomic,readonly) IDSDestination * destination; 
@property (nonatomic,readonly) BOOL locallyPresent; 
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isActive;
-(id)_internal;
-(SCD_Struct_ID4)operatingSystemVersion;
-(NSString *)uniqueID;
-(NSArray *)identities;
-(IDSDestination *)destination;
-(NSString *)productVersion;
-(NSString *)modelIdentifier;
-(NSString *)service;
-(NSData *)pushToken;
-(NSString *)productBuildVersion;
-(id)fullDescription;
-(id)_initWithDictionary:(id)arg1 ;
-(NSString *)productName;
-(BOOL)isConnected;
-(NSString *)deviceColor;
-(BOOL)isDefaultPairedDevice;
-(BOOL)isCloudConnected;
-(NSString *)uniqueIDOverride;
-(unsigned long long)pairingProtocolVersion;
-(NSUUID *)nsuuid;
-(BOOL)isLocallyPaired;
-(void)_setAccount:(id)arg1 ;
-(BOOL)supportsiCloudPairing;
-(BOOL)isNearby;
-(void)_addIdentity:(id)arg1 ;
-(NSArray *)linkedUserURIs;
-(BOOL)supportsSMSRelay;
-(BOOL)supportsMMSRelay;
-(BOOL)supportsPhoneCalls;
-(NSString *)enclosureColor;
-(BOOL)locallyPresent;
-(unsigned long long)minCompatibilityVersion;
-(unsigned long long)maxCompatibilityVersion;
-(BOOL)isHSATrusted;
-(BOOL)supportsHandoff;
-(BOOL)supportsTethering;
-(NSDate *)lastActivityDate;
-(unsigned long long)serviceMinCompatibilityVersion;
-(void)setNSUUID:(id)arg1 ;
-(BOOL)supportsApplePay;
-(void)_setService:(id)arg1 ;
@end

