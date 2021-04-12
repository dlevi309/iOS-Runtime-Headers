/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSString* _messageGroup;
	NSString* _platform;
	NSString* _pseudoDeviceId;
	BOOL _isConfigEnabled;
	BOOL _isGm;
	BOOL _isInternal;
	BOOL _isInternalCarry;
	BOOL _isSeed;
	BOOL _isTestingData;
	BOOL _isTrialUpload;
	SCD_Struct_PE6 _has;

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
@property (nonatomic,readonly) BOOL hasPseudoDeviceId; 
@property (nonatomic,retain) NSString * pseudoDeviceId;                  //@synthesize pseudoDeviceId=_pseudoDeviceId - In the implementation block
@property (assign,nonatomic) BOOL hasIsInternalCarry; 
@property (assign,nonatomic) BOOL isInternalCarry;                       //@synthesize isInternalCarry=_isInternalCarry - In the implementation block
@property (assign,nonatomic) BOOL hasIsConfigEnabled; 
@property (assign,nonatomic) BOOL isConfigEnabled;                       //@synthesize isConfigEnabled=_isConfigEnabled - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageGroup; 
@property (nonatomic,retain) NSString * messageGroup;                    //@synthesize messageGroup=_messageGroup - In the implementation block
@property (assign,nonatomic) BOOL hasIsTestingData; 
@property (assign,nonatomic) BOOL isTestingData;                         //@synthesize isTestingData=_isTestingData - In the implementation block
@property (assign,nonatomic) BOOL hasIsTrialUpload; 
@property (assign,nonatomic) BOOL isTrialUpload;                         //@synthesize isTrialUpload=_isTrialUpload - In the implementation block
-(BOOL)isInternal;
-(id)dictionaryRepresentation;
-(NSString *)platform;
-(BOOL)isGm;
-(NSString *)country;
-(NSString *)build;
-(BOOL)hasLanguage;
-(void)setPlatform:(NSString *)arg1 ;
-(BOOL)isSeed;
-(BOOL)hasConfigVersion;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setBuild:(NSString *)arg1 ;
-(void)setIsInternal:(BOOL)arg1 ;
-(unsigned)configVersion;
-(void)setCountry:(NSString *)arg1 ;
-(BOOL)hasIsGm;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasCountry;
-(NSString *)device;
-(void)setIsGm:(BOOL)arg1 ;
-(BOOL)hasBuild;
-(id)description;
-(BOOL)hasPlatform;
-(void)setUploadTime:(unsigned long long)arg1 ;
-(BOOL)hasUploadTime;
-(void)setHasUploadTime:(BOOL)arg1 ;
-(void)setHasIsInternal:(BOOL)arg1 ;
-(BOOL)hasIsInternal;
-(void)setIsSeed:(BOOL)arg1 ;
-(void)setHasIsSeed:(BOOL)arg1 ;
-(void)setHasIsGm:(BOOL)arg1 ;
-(void)setHasConfigVersion:(BOOL)arg1 ;
-(BOOL)hasPseudoDeviceId;
-(void)setIsInternalCarry:(BOOL)arg1 ;
-(void)setHasIsInternalCarry:(BOOL)arg1 ;
-(BOOL)hasIsInternalCarry;
-(void)setIsConfigEnabled:(BOOL)arg1 ;
-(unsigned long long)uploadTime;
-(void)setHasIsConfigEnabled:(BOOL)arg1 ;
-(BOOL)hasIsConfigEnabled;
-(BOOL)hasMessageGroup;
-(void)setIsTestingData:(BOOL)arg1 ;
-(void)setHasIsTestingData:(BOOL)arg1 ;
-(NSString *)pseudoDeviceId;
-(BOOL)hasIsTestingData;
-(void)setIsTrialUpload:(BOOL)arg1 ;
-(void)setHasIsTrialUpload:(BOOL)arg1 ;
-(BOOL)hasIsTrialUpload;
-(void)setPseudoDeviceId:(NSString *)arg1 ;
-(BOOL)isInternalCarry;
-(BOOL)isConfigEnabled;
-(NSString *)messageGroup;
-(void)setMessageGroup:(NSString *)arg1 ;
-(BOOL)isTestingData;
-(BOOL)isTrialUpload;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDevice:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasDevice;
-(BOOL)hasIsSeed;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
-(BOOL)isEqual:(id)arg1 ;
-(void)setConfigVersion:(unsigned)arg1 ;
@end

