/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface SISchemaDeviceFixedContext : PBCodable {

	NSString* _deviceType;
	NSString* _systemBuild;
	NSString* _siriInputLanguage;
	NSString* _siriVoiceLanguage;
	NSString* _systemLocale;
	NSString* _siriDeviceID;
	NSString* _speechID;

}

@property (nonatomic,copy) NSString * deviceType;                     //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,copy) NSString * systemBuild;                    //@synthesize systemBuild=_systemBuild - In the implementation block
@property (nonatomic,copy) NSString * siriInputLanguage;              //@synthesize siriInputLanguage=_siriInputLanguage - In the implementation block
@property (nonatomic,copy) NSString * siriVoiceLanguage;              //@synthesize siriVoiceLanguage=_siriVoiceLanguage - In the implementation block
@property (nonatomic,copy) NSString * systemLocale;                   //@synthesize systemLocale=_systemLocale - In the implementation block
@property (nonatomic,copy) NSString * siriDeviceID;                   //@synthesize siriDeviceID=_siriDeviceID - In the implementation block
@property (nonatomic,copy) NSString * speechID;                       //@synthesize speechID=_speechID - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)systemLocale;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSString *)deviceType;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDeviceType:(NSString *)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)systemBuild;
-(void)setSystemBuild:(NSString *)arg1 ;
-(void)setSiriDeviceID:(NSString *)arg1 ;
-(NSString *)siriDeviceID;
-(void)setSiriInputLanguage:(NSString *)arg1 ;
-(void)setSiriVoiceLanguage:(NSString *)arg1 ;
-(void)setSystemLocale:(NSString *)arg1 ;
-(void)setSpeechID:(NSString *)arg1 ;
-(NSString *)siriInputLanguage;
-(NSString *)siriVoiceLanguage;
-(NSString *)speechID;
@end

