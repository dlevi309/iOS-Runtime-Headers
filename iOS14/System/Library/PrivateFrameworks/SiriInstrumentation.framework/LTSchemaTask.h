/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface LTSchemaTask : PBCodable {

	NSString* _translationTask;
	NSString* _sourceLanguage;
	NSString* _targetLanguage;
	NSString* _deviceOS;
	NSString* _deviceType;
	NSString* _osVersion;
	NSString* _bundleIdentifier;
	BOOL _hasTranslationTask;
	BOOL _hasSourceLanguage;
	BOOL _hasTargetLanguage;
	BOOL _hasDeviceOS;
	BOOL _hasDeviceType;
	BOOL _hasOsVersion;
	BOOL _hasBundleIdentifier;

}

@property (nonatomic,copy) NSString * translationTask;               //@synthesize translationTask=_translationTask - In the implementation block
@property (assign,nonatomic) BOOL hasTranslationTask;                //@synthesize hasTranslationTask=_hasTranslationTask - In the implementation block
@property (nonatomic,copy) NSString * sourceLanguage;                //@synthesize sourceLanguage=_sourceLanguage - In the implementation block
@property (assign,nonatomic) BOOL hasSourceLanguage;                 //@synthesize hasSourceLanguage=_hasSourceLanguage - In the implementation block
@property (nonatomic,copy) NSString * targetLanguage;                //@synthesize targetLanguage=_targetLanguage - In the implementation block
@property (assign,nonatomic) BOOL hasTargetLanguage;                 //@synthesize hasTargetLanguage=_hasTargetLanguage - In the implementation block
@property (nonatomic,copy) NSString * deviceOS;                      //@synthesize deviceOS=_deviceOS - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceOS;                       //@synthesize hasDeviceOS=_hasDeviceOS - In the implementation block
@property (nonatomic,copy) NSString * deviceType;                    //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceType;                     //@synthesize hasDeviceType=_hasDeviceType - In the implementation block
@property (nonatomic,copy) NSString * osVersion;                     //@synthesize osVersion=_osVersion - In the implementation block
@property (assign,nonatomic) BOOL hasOsVersion;                      //@synthesize hasOsVersion=_hasOsVersion - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasBundleIdentifier;               //@synthesize hasBundleIdentifier=_hasBundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)hasDeviceType;
-(id)dictionaryRepresentation;
-(BOOL)hasOsVersion;
-(void)setOsVersion:(NSString *)arg1 ;
-(NSString *)deviceType;
-(void)setDeviceType:(NSString *)arg1 ;
-(NSData *)jsonData;
-(NSString *)bundleIdentifier;
-(NSString *)osVersion;
-(id)initWithDictionary:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setTranslationTask:(NSString *)arg1 ;
-(void)setTargetLanguage:(NSString *)arg1 ;
-(void)setDeviceOS:(NSString *)arg1 ;
-(NSString *)deviceOS;
-(void)writeTo:(id)arg1 ;
-(NSString *)sourceLanguage;
-(void)setSourceLanguage:(NSString *)arg1 ;
-(void)setHasDeviceType:(BOOL)arg1 ;
-(BOOL)hasBundleIdentifier;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)targetLanguage;
-(void)setHasBundleIdentifier:(BOOL)arg1 ;
-(NSString *)translationTask;
-(BOOL)hasTranslationTask;
-(BOOL)hasSourceLanguage;
-(BOOL)hasTargetLanguage;
-(BOOL)hasDeviceOS;
-(void)setHasTranslationTask:(BOOL)arg1 ;
-(void)setHasSourceLanguage:(BOOL)arg1 ;
-(void)setHasTargetLanguage:(BOOL)arg1 ;
-(void)setHasDeviceOS:(BOOL)arg1 ;
-(void)setHasOsVersion:(BOOL)arg1 ;
@end

