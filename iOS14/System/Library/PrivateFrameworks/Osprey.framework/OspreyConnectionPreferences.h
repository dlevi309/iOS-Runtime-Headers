/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
*/


@class OspreyKeychain, NSData, NSString, NSNumber, NSDate;

@interface OspreyConnectionPreferences : NSObject {

	OspreyKeychain* _keychain;
	BOOL _certificateDataFetched;
	NSData* _certificateData;
	NSData* _deviceAttestationData;
	NSString* _connectionHost;
	NSNumber* _deviceAuthenticationVersion;
	NSNumber* _deviceAttestionVersion;
	NSDate* _deviceAttestionExpireOn;

}

@property (nonatomic,copy) NSString * connectionHost;                           //@synthesize connectionHost=_connectionHost - In the implementation block
@property (nonatomic,copy) NSNumber * deviceAuthenticationVersion;              //@synthesize deviceAuthenticationVersion=_deviceAuthenticationVersion - In the implementation block
@property (nonatomic,copy) NSNumber * deviceAttestionVersion;                   //@synthesize deviceAttestionVersion=_deviceAttestionVersion - In the implementation block
@property (nonatomic,retain) NSData * certificateData; 
@property (nonatomic,copy) NSDate * deviceAttestionExpireOn;                    //@synthesize deviceAttestionExpireOn=_deviceAttestionExpireOn - In the implementation block
@property (nonatomic,readonly) BOOL isDeviceAttestionExpired; 
-(id)dictionaryRepresentation;
-(NSData *)certificateData;
-(void)deleteAll;
-(void)setCertificateData:(NSData *)arg1 ;
-(void)deleteCertificateData;
-(id)initWithDictionary:(id)arg1 keychain:(id)arg2 ;
-(id)initWithConnectionHost:(id)arg1 keychain:(id)arg2 ;
-(NSString *)connectionHost;
-(void)deleteDeviceAttestationData;
-(id)_certificateDataKey;
-(id)_deviceAttestationDataKey;
-(BOOL)isDeviceAttestionExpired;
-(void)resetCachedDeviceAttestation;
-(BOOL)setDeviceAttestationData:(id)arg1 withExpiration:(id)arg2 ;
-(id)deviceAttestationData;
-(void)setConnectionHost:(NSString *)arg1 ;
-(NSNumber *)deviceAuthenticationVersion;
-(void)setDeviceAuthenticationVersion:(NSNumber *)arg1 ;
-(NSNumber *)deviceAttestionVersion;
-(void)setDeviceAttestionVersion:(NSNumber *)arg1 ;
-(NSDate *)deviceAttestionExpireOn;
-(void)setDeviceAttestionExpireOn:(NSDate *)arg1 ;
@end

