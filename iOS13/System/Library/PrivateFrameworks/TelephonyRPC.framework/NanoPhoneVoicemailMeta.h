/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
*/

#import <TelephonyRPC/TelephonyRPC-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/SYObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NanoPhoneVoicemailBody, NanoPhoneVoicemailTranscript;

@interface NanoPhoneVoicemailMeta : PBCodable <SYObject, NSCopying> {

	double _date;
	long long _identifier;
	long long _remoteUID;
	long long _voicemailNumber;
	NSString* _callbackNumber;
	NSString* _dataPath;
	int _duration;
	int _flags;
	NSString* _receiverDestinationID;
	NSString* _sender;
	NanoPhoneVoicemailBody* _voicemailBody;
	NanoPhoneVoicemailTranscript* _voicemailTranscript;
	SCD_Struct_Na1 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long voicemailNumber;                                       //@synthesize voicemailNumber=_voicemailNumber - In the implementation block
@property (assign,nonatomic) BOOL hasIdentifier; 
@property (assign,nonatomic) long long identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteUID; 
@property (assign,nonatomic) long long remoteUID;                                             //@synthesize remoteUID=_remoteUID - In the implementation block
@property (assign,nonatomic) BOOL hasDate; 
@property (assign,nonatomic) double date;                                                     //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) BOOL hasSender; 
@property (nonatomic,retain) NSString * sender;                                               //@synthesize sender=_sender - In the implementation block
@property (nonatomic,readonly) BOOL hasCallbackNumber; 
@property (nonatomic,retain) NSString * callbackNumber;                                       //@synthesize callbackNumber=_callbackNumber - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) int duration;                                                    //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL hasDataPath; 
@property (nonatomic,retain) NSString * dataPath;                                             //@synthesize dataPath=_dataPath - In the implementation block
@property (assign,nonatomic) BOOL hasFlags; 
@property (assign,nonatomic) int flags;                                                       //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) BOOL hasVoicemailBody; 
@property (nonatomic,retain) NanoPhoneVoicemailBody * voicemailBody;                          //@synthesize voicemailBody=_voicemailBody - In the implementation block
@property (nonatomic,readonly) BOOL hasVoicemailTranscript; 
@property (nonatomic,retain) NanoPhoneVoicemailTranscript * voicemailTranscript;              //@synthesize voicemailTranscript=_voicemailTranscript - In the implementation block
@property (nonatomic,readonly) BOOL hasReceiverDestinationID; 
@property (nonatomic,retain) NSString * receiverDestinationID;                                //@synthesize receiverDestinationID=_receiverDestinationID - In the implementation block
+(id)voicemailWithSYContext:(id)arg1 ;
+(id)voicemailWithMessage:(id)arg1 ;
+(id)xpcObjectAsArray:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)date;
-(long long)identifier;
-(int)flags;
-(void)setIdentifier:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(id)dictionaryRepresentation;
-(int)duration;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasDate;
-(NSString *)dataPath;
-(void)setDate:(double)arg1 ;
-(NSString *)sender;
-(void)setSender:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setFlags:(int)arg1 ;
-(void)setDuration:(int)arg1 ;
-(BOOL)hasDuration;
-(BOOL)hasIdentifier;
-(void)setHasIdentifier:(BOOL)arg1 ;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)hasSender;
-(void)setHasDate:(BOOL)arg1 ;
-(int)syncOperation;
-(id)syncId;
-(void)setHasFlags:(BOOL)arg1 ;
-(BOOL)hasFlags;
-(void)setReceiverDestinationID:(NSString *)arg1 ;
-(void)setRemoteUID:(long long)arg1 ;
-(void)setHasRemoteUID:(BOOL)arg1 ;
-(BOOL)hasRemoteUID;
-(BOOL)hasReceiverDestinationID;
-(long long)remoteUID;
-(NSString *)receiverDestinationID;
-(id)contactUsingContactStore:(id)arg1 withKeysToFetch:(id)arg2 ;
-(BOOL)hasCallbackNumber;
-(NSString *)callbackNumber;
-(void)setCallbackNumber:(NSString *)arg1 ;
-(void)setDataPath:(NSString *)arg1 ;
-(void)setVoicemailBody:(NanoPhoneVoicemailBody *)arg1 ;
-(void)setVoicemailTranscript:(NanoPhoneVoicemailTranscript *)arg1 ;
-(BOOL)hasDataPath;
-(BOOL)hasVoicemailBody;
-(BOOL)hasVoicemailTranscript;
-(long long)voicemailNumber;
-(void)setVoicemailNumber:(long long)arg1 ;
-(NanoPhoneVoicemailBody *)voicemailBody;
-(NanoPhoneVoicemailTranscript *)voicemailTranscript;
-(void)loadVoicemailBodyIfNeeded;
-(id)initWithVoicemail:(id)arg1 ;
-(id)contextWithSyncOperation:(int)arg1 ;
-(id)asXpcObject;
-(void)attachToXpcObject:(id)arg1 ;
-(id)displayNameFromContactStore:(id)arg1 ;
-(void)displayLabelFromContactStore:(id)arg1 withUpdateBlock:(/*^block*/id)arg2 ;
-(id)callbackNumberOrSender;
-(id)voicemailDescription;
@end

