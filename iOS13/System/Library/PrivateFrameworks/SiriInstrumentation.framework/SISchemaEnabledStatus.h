/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaEnabledStatus : PBCodable {

	BOOL _assistantEnabled;
	BOOL _dictationEnabled;
	BOOL _hardwareButtonEnabled;
	BOOL _heySiriEnabled;
	BOOL _assistantOnLockscreen;
	BOOL _raiseToSpeakEnabled;
	BOOL _spokenNotificationsEnabled;
	BOOL _hasHomekitHome;
	int _shortcutsAvailable;
	int _dataSharingOptInStatus;

}

@property (assign,nonatomic) BOOL assistantEnabled;                        //@synthesize assistantEnabled=_assistantEnabled - In the implementation block
@property (assign,nonatomic) BOOL dictationEnabled;                        //@synthesize dictationEnabled=_dictationEnabled - In the implementation block
@property (assign,nonatomic) BOOL hardwareButtonEnabled;                   //@synthesize hardwareButtonEnabled=_hardwareButtonEnabled - In the implementation block
@property (assign,nonatomic) BOOL heySiriEnabled;                          //@synthesize heySiriEnabled=_heySiriEnabled - In the implementation block
@property (assign,nonatomic) BOOL assistantOnLockscreen;                   //@synthesize assistantOnLockscreen=_assistantOnLockscreen - In the implementation block
@property (assign,nonatomic) BOOL raiseToSpeakEnabled;                     //@synthesize raiseToSpeakEnabled=_raiseToSpeakEnabled - In the implementation block
@property (assign,nonatomic) BOOL spokenNotificationsEnabled;              //@synthesize spokenNotificationsEnabled=_spokenNotificationsEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasHomekitHome;                          //@synthesize hasHomekitHome=_hasHomekitHome - In the implementation block
@property (assign,nonatomic) int shortcutsAvailable;                       //@synthesize shortcutsAvailable=_shortcutsAvailable - In the implementation block
@property (assign,nonatomic) int dataSharingOptInStatus;                   //@synthesize dataSharingOptInStatus=_dataSharingOptInStatus - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)dictationEnabled;
-(int)dataSharingOptInStatus;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)heySiriEnabled;
-(void)setAssistantEnabled:(BOOL)arg1 ;
-(void)setDictationEnabled:(BOOL)arg1 ;
-(void)setDataSharingOptInStatus:(int)arg1 ;
-(BOOL)assistantEnabled;
-(void)setHardwareButtonEnabled:(BOOL)arg1 ;
-(void)setHeySiriEnabled:(BOOL)arg1 ;
-(void)setAssistantOnLockscreen:(BOOL)arg1 ;
-(void)setRaiseToSpeakEnabled:(BOOL)arg1 ;
-(void)setSpokenNotificationsEnabled:(BOOL)arg1 ;
-(void)setHasHomekitHome:(BOOL)arg1 ;
-(void)setShortcutsAvailable:(int)arg1 ;
-(BOOL)hardwareButtonEnabled;
-(BOOL)assistantOnLockscreen;
-(BOOL)raiseToSpeakEnabled;
-(BOOL)spokenNotificationsEnabled;
-(BOOL)hasHomekitHome;
-(int)shortcutsAvailable;
@end

