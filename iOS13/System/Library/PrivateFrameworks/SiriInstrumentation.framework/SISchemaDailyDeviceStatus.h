/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, SISchemaEnabledStatus, SISchemaActiveStatus, SISchemaPersonalization, SISchemaMultiUserState, NSData;

@interface SISchemaDailyDeviceStatus : PBCodable {

	BOOL _spokenNotificationsproxCardSeen;
	BOOL _spokenNotificationsControlCenterModuleEnabled;
	int _spokenNotificationsWhitelistSettings;
	NSString* _siriDeviceID;
	NSString* _siriSpeechID;
	NSString* _sharedUserId;
	long long _clientDeviceSamplingTimestampMs;
	long long _assistantRecordPublishTimestampMs;
	NSString* _locale;
	NSString* _deviceType;
	NSString* _deviceOs;
	NSString* _deviceBuild;
	SISchemaEnabledStatus* _enabledStatus;
	SISchemaActiveStatus* _activeStatus;
	SISchemaPersonalization* _personalization;
	SISchemaMultiUserState* _multiUserState;

}

@property (nonatomic,copy) NSString * siriDeviceID;                                           //@synthesize siriDeviceID=_siriDeviceID - In the implementation block
@property (nonatomic,copy) NSString * siriSpeechID;                                           //@synthesize siriSpeechID=_siriSpeechID - In the implementation block
@property (nonatomic,copy) NSString * sharedUserId;                                           //@synthesize sharedUserId=_sharedUserId - In the implementation block
@property (assign,nonatomic) long long clientDeviceSamplingTimestampMs;                       //@synthesize clientDeviceSamplingTimestampMs=_clientDeviceSamplingTimestampMs - In the implementation block
@property (assign,nonatomic) long long assistantRecordPublishTimestampMs;                     //@synthesize assistantRecordPublishTimestampMs=_assistantRecordPublishTimestampMs - In the implementation block
@property (nonatomic,copy) NSString * locale;                                                 //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy) NSString * deviceType;                                             //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,copy) NSString * deviceOs;                                               //@synthesize deviceOs=_deviceOs - In the implementation block
@property (nonatomic,copy) NSString * deviceBuild;                                            //@synthesize deviceBuild=_deviceBuild - In the implementation block
@property (nonatomic,retain) SISchemaEnabledStatus * enabledStatus;                           //@synthesize enabledStatus=_enabledStatus - In the implementation block
@property (nonatomic,retain) SISchemaActiveStatus * activeStatus;                             //@synthesize activeStatus=_activeStatus - In the implementation block
@property (nonatomic,retain) SISchemaPersonalization * personalization;                       //@synthesize personalization=_personalization - In the implementation block
@property (nonatomic,retain) SISchemaMultiUserState * multiUserState;                         //@synthesize multiUserState=_multiUserState - In the implementation block
@property (assign,nonatomic) BOOL spokenNotificationsproxCardSeen;                            //@synthesize spokenNotificationsproxCardSeen=_spokenNotificationsproxCardSeen - In the implementation block
@property (assign,nonatomic) BOOL spokenNotificationsControlCenterModuleEnabled;              //@synthesize spokenNotificationsControlCenterModuleEnabled=_spokenNotificationsControlCenterModuleEnabled - In the implementation block
@property (assign,nonatomic) int spokenNotificationsWhitelistSettings;                        //@synthesize spokenNotificationsWhitelistSettings=_spokenNotificationsWhitelistSettings - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setLocale:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)locale;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSString *)deviceType;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDeviceType:(NSString *)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(SISchemaPersonalization *)personalization;
-(void)setPersonalization:(SISchemaPersonalization *)arg1 ;
-(NSString *)sharedUserId;
-(void)setSharedUserId:(NSString *)arg1 ;
-(SISchemaEnabledStatus *)enabledStatus;
-(int)getAnyEventType;
-(void)setSiriDeviceID:(NSString *)arg1 ;
-(NSString *)siriDeviceID;
-(void)setSiriSpeechID:(NSString *)arg1 ;
-(void)setClientDeviceSamplingTimestampMs:(long long)arg1 ;
-(void)setAssistantRecordPublishTimestampMs:(long long)arg1 ;
-(void)setDeviceOs:(NSString *)arg1 ;
-(void)setDeviceBuild:(NSString *)arg1 ;
-(void)setEnabledStatus:(SISchemaEnabledStatus *)arg1 ;
-(void)setActiveStatus:(SISchemaActiveStatus *)arg1 ;
-(void)setMultiUserState:(SISchemaMultiUserState *)arg1 ;
-(void)setSpokenNotificationsproxCardSeen:(BOOL)arg1 ;
-(void)setSpokenNotificationsControlCenterModuleEnabled:(BOOL)arg1 ;
-(void)setSpokenNotificationsWhitelistSettings:(int)arg1 ;
-(NSString *)siriSpeechID;
-(long long)clientDeviceSamplingTimestampMs;
-(long long)assistantRecordPublishTimestampMs;
-(NSString *)deviceOs;
-(NSString *)deviceBuild;
-(SISchemaActiveStatus *)activeStatus;
-(SISchemaMultiUserState *)multiUserState;
-(BOOL)spokenNotificationsproxCardSeen;
-(BOOL)spokenNotificationsControlCenterModuleEnabled;
-(int)spokenNotificationsWhitelistSettings;
@end

