/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
*/

#import <CoreCDP/CoreCDP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/CDPDeviceProtocol.h>

@class NSString, NSData, NSDate, NSDictionary, NSNumber;

@interface CDPDevice : NSObject <NSCopying, NSSecureCoding, CDPDeviceProtocol> {

	NSString* _localizedName;
	NSString* _model;
	NSString* _modelVersion;
	NSString* _modelClass;
	unsigned long long _platform;
	NSString* _recordID;
	NSString* _machineID;
	NSData* _simplePublicKey;
	NSDate* _recordDate;
	NSDictionary* _recordInfo;
	BOOL _hasRandomSecret;
	BOOL _hasNumericSecret;
	NSNumber* _numericSecretLength;
	BOOL _isUsingMultipleiCSC;
	unsigned long long _remainingAttempts;
	NSString* _deviceColor;
	NSString* _enclosureColor;
	NSString* _serialNumber;
	BOOL _isCurrentDevice;
	NSString* _localizedDescription;
	unsigned long long _recoveryStatus;
	NSNumber* _coolOffPeriod;

}

@property (nonatomic,copy) NSString * localizedName;                            //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy) NSString * model;                                    //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * modelVersion;                             //@synthesize modelVersion=_modelVersion - In the implementation block
@property (nonatomic,copy) NSString * modelClass;                               //@synthesize modelClass=_modelClass - In the implementation block
@property (assign,nonatomic) unsigned long long platform;                       //@synthesize platform=_platform - In the implementation block
@property (nonatomic,copy) NSString * recordID;                                 //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,copy) NSString * machineID;                                //@synthesize machineID=_machineID - In the implementation block
@property (nonatomic,copy) NSDate * recordDate;                                 //@synthesize recordDate=_recordDate - In the implementation block
@property (assign,nonatomic) BOOL hasRandomSecret;                              //@synthesize hasRandomSecret=_hasRandomSecret - In the implementation block
@property (assign,nonatomic) BOOL hasNumericSecret;                             //@synthesize hasNumericSecret=_hasNumericSecret - In the implementation block
@property (nonatomic,copy) NSNumber * numericSecretLength;                      //@synthesize numericSecretLength=_numericSecretLength - In the implementation block
@property (assign,nonatomic) BOOL isUsingMultipleiCSC;                          //@synthesize isUsingMultipleiCSC=_isUsingMultipleiCSC - In the implementation block
@property (assign,nonatomic) unsigned long long remainingAttempts;              //@synthesize remainingAttempts=_remainingAttempts - In the implementation block
@property (nonatomic,copy) NSString * serialNumber;                             //@synthesize serialNumber=_serialNumber - In the implementation block
@property (assign,nonatomic) BOOL isCurrentDevice;                              //@synthesize isCurrentDevice=_isCurrentDevice - In the implementation block
@property (assign,nonatomic) unsigned long long recoveryStatus;                 //@synthesize recoveryStatus=_recoveryStatus - In the implementation block
@property (nonatomic,retain) NSNumber * coolOffPeriod;                          //@synthesize coolOffPeriod=_coolOffPeriod - In the implementation block
@property (nonatomic,copy) NSString * deviceColor;                              //@synthesize deviceColor=_deviceColor - In the implementation block
@property (nonatomic,copy) NSString * enclosureColor;                           //@synthesize enclosureColor=_enclosureColor - In the implementation block
@property (nonatomic,copy) NSDictionary * recordInfo;                           //@synthesize recordInfo=_recordInfo - In the implementation block
@property (nonatomic,copy) NSData * simplePublicKey;                            //@synthesize simplePublicKey=_simplePublicKey - In the implementation block
@property (nonatomic,readonly) unsigned long long localSecretType; 
@property (nonatomic,copy) NSString * localizedDescription;                     //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithSecureBackupMetadataInfo:(id)arg1 ;
-(id)initWithSecureBackupRecordInfo:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)localizedName;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(unsigned long long)platform;
-(NSString *)model;
-(void)setModel:(NSString *)arg1 ;
-(NSString *)recordID;
-(NSString *)serialNumber;
-(void)setPlatform:(unsigned long long)arg1 ;
-(void)setRecordID:(NSString *)arg1 ;
-(void)setModelVersion:(NSString *)arg1 ;
-(NSString *)modelVersion;
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSString *)deviceColor;
-(NSString *)enclosureColor;
-(void)setDeviceColor:(NSString *)arg1 ;
-(void)setEnclosureColor:(NSString *)arg1 ;
-(void)setSerialNumber:(NSString *)arg1 ;
-(NSString *)machineID;
-(void)setMachineID:(NSString *)arg1 ;
-(NSDate *)recordDate;
-(void)setRecordDate:(NSDate *)arg1 ;
-(NSString *)modelClass;
-(void)setModelClass:(NSString *)arg1 ;
-(BOOL)isCurrentDevice;
-(unsigned long long)localSecretType;
-(BOOL)hasRandomSecret;
-(void)setHasRandomSecret:(BOOL)arg1 ;
-(BOOL)hasNumericSecret;
-(void)setHasNumericSecret:(BOOL)arg1 ;
-(NSNumber *)numericSecretLength;
-(void)setNumericSecretLength:(NSNumber *)arg1 ;
-(BOOL)isUsingMultipleiCSC;
-(void)setIsUsingMultipleiCSC:(BOOL)arg1 ;
-(unsigned long long)remainingAttempts;
-(void)setRemainingAttempts:(unsigned long long)arg1 ;
-(void)setIsCurrentDevice:(BOOL)arg1 ;
-(unsigned long long)recoveryStatus;
-(void)setRecoveryStatus:(unsigned long long)arg1 ;
-(NSNumber *)coolOffPeriod;
-(void)setCoolOffPeriod:(NSNumber *)arg1 ;
-(NSDictionary *)recordInfo;
-(void)setRecordInfo:(NSDictionary *)arg1 ;
-(NSData *)simplePublicKey;
-(void)setSimplePublicKey:(NSData *)arg1 ;
@end

