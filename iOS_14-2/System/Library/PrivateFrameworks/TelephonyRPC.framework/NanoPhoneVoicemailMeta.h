/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(id)dictionaryRepresentation;
-(BOOL)hasDate;
-(NSString *)sender;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(int)arg1 ;
-(BOOL)hasCallbackNumber;
-(void)setSender:(NSString *)arg1 ;
-(NSString *)callbackNumber;
-(NSString *)dataPath;
-(BOOL)hasIdentifier;
-(int)syncOperation;
-(int)flags;
-(id)contactUsingContactStore:(id)arg1 withKeysToFetch:(id)arg2 ;
-(id)syncId;
-(void)mergeFrom:(id)arg1 ;
-(void)setDate:(double)arg1 ;
-(long long)remoteUID;
-(NSString *)receiverDestinationID;
-(void)setHasIdentifier:(BOOL)arg1 ;
-(NSString *)description;
-(id)initWithVoicemailMessage:(id)arg1 ;
-(void)setHasDate:(BOOL)arg1 ;
-(void)setRemoteUID:(long long)arg1 ;
-(void)setReceiverDestinationID:(NSString *)arg1 ;
-(void)setFlags:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasSender;
-(BOOL)hasFlags;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(long long)arg1 ;
-(double)date;
-(long long)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasFlags:(BOOL)arg1 ;
-(void)setCallbackNumber:(NSString *)arg1 ;
-(void)setDataPath:(NSString *)arg1 ;
-(void)setVoicemailBody:(NanoPhoneVoicemailBody *)arg1 ;
-(void)setVoicemailTranscript:(NanoPhoneVoicemailTranscript *)arg1 ;
-(void)setHasRemoteUID:(BOOL)arg1 ;
-(BOOL)hasRemoteUID;
-(BOOL)hasDataPath;
-(BOOL)hasVoicemailBody;
-(BOOL)hasVoicemailTranscript;
-(BOOL)hasReceiverDestinationID;
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
-(void)writeVoicemailBody;
-(id)voicemailDescription;
@end

