/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@class NSString, NSUUID, NSNumber, NSData;

@interface HAPBLEPeripheral : HMFObject {

	NSString* _accessoryName;
	NSUUID* _peripheralUUID;
	NSNumber* _hkType;
	NSNumber* _advInterval;
	NSNumber* _pairingStatusFlag;
	NSString* _pairingIdentifier;
	NSNumber* _category;
	NSNumber* _stateNumber;
	NSNumber* _configNumber;
	NSNumber* _compatibleVersion;
	NSData* _setupHash;
	NSData* _encryptedPayload;
	double _lastSeen;
	NSNumber* _averageRSSI;

}

@property (nonatomic,retain) NSString * accessoryName;                  //@synthesize accessoryName=_accessoryName - In the implementation block
@property (nonatomic,retain) NSUUID * peripheralUUID;                   //@synthesize peripheralUUID=_peripheralUUID - In the implementation block
@property (nonatomic,retain) NSNumber * hkType;                         //@synthesize hkType=_hkType - In the implementation block
@property (nonatomic,retain) NSNumber * advInterval;                    //@synthesize advInterval=_advInterval - In the implementation block
@property (nonatomic,retain) NSNumber * pairingStatusFlag;              //@synthesize pairingStatusFlag=_pairingStatusFlag - In the implementation block
@property (nonatomic,retain) NSString * pairingIdentifier;              //@synthesize pairingIdentifier=_pairingIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * category;                       //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) NSNumber * stateNumber;                    //@synthesize stateNumber=_stateNumber - In the implementation block
@property (nonatomic,retain) NSNumber * configNumber;                   //@synthesize configNumber=_configNumber - In the implementation block
@property (nonatomic,retain) NSNumber * compatibleVersion;              //@synthesize compatibleVersion=_compatibleVersion - In the implementation block
@property (nonatomic,copy) NSData * encryptedPayload;                   //@synthesize encryptedPayload=_encryptedPayload - In the implementation block
@property (nonatomic,retain) NSNumber * averageRSSI;                    //@synthesize averageRSSI=_averageRSSI - In the implementation block
@property (nonatomic,readonly) NSData * setupHash;                      //@synthesize setupHash=_setupHash - In the implementation block
@property (assign,nonatomic) double lastSeen;                           //@synthesize lastSeen=_lastSeen - In the implementation block
-(NSString *)accessoryName;
-(NSString *)pairingIdentifier;
-(void)setPairingIdentifier:(NSString *)arg1 ;
-(void)setCategory:(NSNumber *)arg1 ;
-(double)lastSeen;
-(NSData *)encryptedPayload;
-(NSNumber *)category;
-(id)description;
-(NSNumber *)hkType;
-(void)setEncryptedPayload:(NSData *)arg1 ;
-(unsigned long long)hash;
-(void)setLastSeen:(double)arg1 ;
-(void)setAccessoryName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSUUID *)peripheralUUID;
-(NSData *)setupHash;
-(NSNumber *)stateNumber;
-(void)setStateNumber:(NSNumber *)arg1 ;
-(NSNumber *)configNumber;
-(void)setConfigNumber:(NSNumber *)arg1 ;
-(void)updateStateNumber:(id)arg1 ;
-(BOOL)updateWithPeripheral:(id)arg1 ;
-(NSNumber *)advInterval;
-(NSNumber *)pairingStatusFlag;
-(NSNumber *)compatibleVersion;
-(void)setPeripheralUUID:(NSUUID *)arg1 ;
-(void)setHkType:(NSNumber *)arg1 ;
-(void)setAdvInterval:(NSNumber *)arg1 ;
-(void)setCompatibleVersion:(NSNumber *)arg1 ;
-(void)setPairingStatusFlag:(NSNumber *)arg1 ;
-(void)setAverageRSSI:(NSNumber *)arg1 ;
-(id)initWithName:(id)arg1 peripheralUUID:(id)arg2 hkType:(id)arg3 advInterval:(id)arg4 pairingStatusFlag:(id)arg5 pairingIdentifier:(id)arg6 category:(id)arg7 stateNumber:(id)arg8 configNumber:(id)arg9 hapBLECompatibleVersion:(id)arg10 setupHash:(id)arg11 encryptedPayload:(id)arg12 ;
-(void)_resetAverageRSSI;
-(NSNumber *)averageRSSI;
@end

