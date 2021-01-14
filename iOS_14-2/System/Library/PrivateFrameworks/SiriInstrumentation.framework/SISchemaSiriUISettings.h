/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaSiriUISettings : PBCodable {

	BOOL _alwaysShowUserSpeechTranscript;
	BOOL _alwaysBlurBackground;
	BOOL _alwaysShowSiriDialog;
	SCD_Struct_LT0 _has;

}

@property (assign,nonatomic) BOOL alwaysShowUserSpeechTranscript;                 //@synthesize alwaysShowUserSpeechTranscript=_alwaysShowUserSpeechTranscript - In the implementation block
@property (assign,nonatomic) BOOL hasAlwaysShowUserSpeechTranscript; 
@property (assign,nonatomic) BOOL alwaysBlurBackground;                           //@synthesize alwaysBlurBackground=_alwaysBlurBackground - In the implementation block
@property (assign,nonatomic) BOOL hasAlwaysBlurBackground; 
@property (assign,nonatomic) BOOL alwaysShowSiriDialog;                           //@synthesize alwaysShowSiriDialog=_alwaysShowSiriDialog - In the implementation block
@property (assign,nonatomic) BOOL hasAlwaysShowSiriDialog; 
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAlwaysShowUserSpeechTranscript:(BOOL)arg1 ;
-(void)setAlwaysBlurBackground:(BOOL)arg1 ;
-(void)setAlwaysShowSiriDialog:(BOOL)arg1 ;
-(BOOL)alwaysShowUserSpeechTranscript;
-(BOOL)alwaysBlurBackground;
-(BOOL)alwaysShowSiriDialog;
-(BOOL)hasAlwaysShowUserSpeechTranscript;
-(void)setHasAlwaysShowUserSpeechTranscript:(BOOL)arg1 ;
-(BOOL)hasAlwaysBlurBackground;
-(void)setHasAlwaysBlurBackground:(BOOL)arg1 ;
-(BOOL)hasAlwaysShowSiriDialog;
-(void)setHasAlwaysShowSiriDialog:(BOOL)arg1 ;
@end

