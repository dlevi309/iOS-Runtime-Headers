/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
*/

#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PETMetadata : PBCodable <NSCopying> {

	unsigned long long _uploadTime;
	NSString* _build;
	unsigned _configVersion;
	NSString* _country;
	NSString* _device;
	NSString* _language;
	NSString* _platform;
	NSString* _pseudoDeviceId;
	BOOL _isGm;
	BOOL _isInternal;
	BOOL _isInternalCarry;
	BOOL _isSeed;
	BOOL _isTestingData;
	BOOL _isTrialUpload;
	SCD_Struct_PE5 _has;

}

@property (assign,nonatomic) BOOL hasUploadTime; 
@property (assign,nonatomic) unsigned long long uploadTime;              //@synthesize uploadTime=_uploadTime - In the implementation block
@property (nonatomic,readonly) BOOL hasPlatform; 
@property (nonatomic,retain) NSString * platform;                        //@synthesize platform=_platform - In the implementation block
@property (nonatomic,readonly) BOOL hasDevice; 
@property (nonatomic,retain) NSString * device;                          //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) BOOL hasBuild; 
@property (nonatomic,retain) NSString * build;                           //@synthesize build=_build - In the implementation block
@property (assign,nonatomic) BOOL hasIsInternal; 
@property (assign,nonatomic) BOOL isInternal;                            //@synthesize isInternal=_isInternal - In the implementation block
@property (assign,nonatomic) BOOL hasIsSeed; 
@property (assign,nonatomic) BOOL isSeed;                                //@synthesize isSeed=_isSeed - In the implementation block
@property (assign,nonatomic) BOOL hasIsGm; 
@property (assign,nonatomic) BOOL isGm;                                  //@synthesize isGm=_isGm - In the implementation block
@property (nonatomic,readonly) BOOL hasCountry; 
@property (nonatomic,retain) NSString * country;                         //@synthesize country=_country - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language;                        //@synthesize language=_language - In the implementation block
@property (assign,nonatomic) BOOL hasConfigVersion; 
@property (assign,nonatomic) unsigned configVersion;                     //@synthesize configVersion=_configVersion - In the implementation block
@property (assign,nonatomic) BOOL hasIsTestingData; 
@property (assign,nonatomic) BOOL isTestingData;                         //@synthesize isTestingData=_isTestingData - In the implementation block
@property (nonatomic,readonly) BOOL hasPseudoDeviceId; 
@property (nonatomic,retain) NSString * pseudoDeviceId;                  //@synthesize pseudoDeviceId=_pseudoDeviceId - In the implementation block
@property (assign,nonatomic) BOOL hasIsTrialUpload; 
@property (assign,nonatomic) BOOL isTrialUpload;                         //@synthesize isTrialUpload=_isTrialUpload - In the implementation block
@property (assign,nonatomic) BOOL hasIsInternalCarry; 
@property (assign,nonatomic) BOOL isInternalCarry;                       //@synthesize isInternalCarry=_isInternalCarry - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)platform;
-(void)writeTo:(id)arg1 ;
-(NSString *)device;
-(NSString *)country;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setPlatform:(NSString *)arg1 ;
-(NSString *)build;
-(BOOL)isInternal;
-(BOOL)hasLanguage;
-(void)setCountry:(NSString *)arg1 ;
-(BOOL)hasBuild;
-(BOOL)hasCountry;
-(void)setBuild:(NSString *)arg1 ;
-(void)setDevice:(NSString *)arg1 ;
-(void)setUploadTime:(unsigned long long)arg1 ;
-(void)setHasUploadTime:(BOOL)arg1 ;
-(BOOL)hasUploadTime;
-(BOOL)hasPlatform;
-(BOOL)hasDevice;
-(void)setIsInternal:(BOOL)arg1 ;
-(void)setHasIsInternal:(BOOL)arg1 ;
-(BOOL)hasIsInternal;
-(void)setIsSeed:(BOOL)arg1 ;
-(void)setHasIsSeed:(BOOL)arg1 ;
-(BOOL)hasIsSeed;
-(void)setIsGm:(BOOL)arg1 ;
-(void)setHasIsGm:(BOOL)arg1 ;
-(BOOL)hasIsGm;
-(void)setConfigVersion:(unsigned)arg1 ;
-(void)setHasConfigVersion:(BOOL)arg1 ;
-(BOOL)hasConfigVersion;
-(void)setIsTestingData:(BOOL)arg1 ;
-(void)setHasIsTestingData:(BOOL)arg1 ;
-(BOOL)hasIsTestingData;
-(BOOL)hasPseudoDeviceId;
-(void)setIsTrialUpload:(BOOL)arg1 ;
-(void)setHasIsTrialUpload:(BOOL)arg1 ;
-(BOOL)hasIsTrialUpload;
-(void)setIsInternalCarry:(BOOL)arg1 ;
-(void)setHasIsInternalCarry:(BOOL)arg1 ;
-(BOOL)hasIsInternalCarry;
-(unsigned long long)uploadTime;
-(BOOL)isSeed;
-(BOOL)isGm;
-(unsigned)configVersion;
-(BOOL)isTestingData;
-(NSString *)pseudoDeviceId;
-(void)setPseudoDeviceId:(NSString *)arg1 ;
-(BOOL)isTrialUpload;
-(BOOL)isInternalCarry;
@end

