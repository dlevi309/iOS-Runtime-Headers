/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface IMSharedUtilitiesProtoCloudKitEncryptedMessage : PBCodable <NSCopying> {

	long long _associatedMessageType;
	unsigned long long _expireState;
	unsigned long long _timeDelivered;
	unsigned long long _timeExpressiveSentPlayed;
	unsigned long long _timePlayed;
	unsigned long long _timeRead;
	NSString* _associatedMessageGuid;
	unsigned _associatedMessageRangeLength;
	unsigned _associatedMessageRangeLocation;
	NSString* _baloonBundleId;
	NSString* _expressiveSendId;
	NSString* _messageBody;
	NSData* _messageBodyData;
	NSString* _messageSubject;
	NSData* _messageSummaryInfo;
	NSData* _padding;
	NSData* _payloadData;
	unsigned _version;
	SCD_Struct_IM4 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                                         //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageSubject; 
@property (nonatomic,retain) NSString * messageSubject;                                //@synthesize messageSubject=_messageSubject - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageBody; 
@property (nonatomic,retain) NSString * messageBody;                                   //@synthesize messageBody=_messageBody - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageBodyData; 
@property (nonatomic,retain) NSData * messageBodyData;                                 //@synthesize messageBodyData=_messageBodyData - In the implementation block
@property (nonatomic,readonly) BOOL hasBaloonBundleId; 
@property (nonatomic,retain) NSString * baloonBundleId;                                //@synthesize baloonBundleId=_baloonBundleId - In the implementation block
@property (nonatomic,readonly) BOOL hasPayloadData; 
@property (nonatomic,retain) NSData * payloadData;                                     //@synthesize payloadData=_payloadData - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageSummaryInfo; 
@property (nonatomic,retain) NSData * messageSummaryInfo;                              //@synthesize messageSummaryInfo=_messageSummaryInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasExpressiveSendId; 
@property (nonatomic,retain) NSString * expressiveSendId;                              //@synthesize expressiveSendId=_expressiveSendId - In the implementation block
@property (assign,nonatomic) BOOL hasTimeRead; 
@property (assign,nonatomic) unsigned long long timeRead;                              //@synthesize timeRead=_timeRead - In the implementation block
@property (assign,nonatomic) BOOL hasTimePlayed; 
@property (assign,nonatomic) unsigned long long timePlayed;                            //@synthesize timePlayed=_timePlayed - In the implementation block
@property (assign,nonatomic) BOOL hasTimeExpressiveSentPlayed; 
@property (assign,nonatomic) unsigned long long timeExpressiveSentPlayed;              //@synthesize timeExpressiveSentPlayed=_timeExpressiveSentPlayed - In the implementation block
@property (nonatomic,readonly) BOOL hasPadding; 
@property (nonatomic,retain) NSData * padding;                                         //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) BOOL hasTimeDelivered; 
@property (assign,nonatomic) unsigned long long timeDelivered;                         //@synthesize timeDelivered=_timeDelivered - In the implementation block
@property (assign,nonatomic) BOOL hasExpireState; 
@property (assign,nonatomic) unsigned long long expireState;                           //@synthesize expireState=_expireState - In the implementation block
@property (assign,nonatomic) BOOL hasAssociatedMessageType; 
@property (assign,nonatomic) long long associatedMessageType;                          //@synthesize associatedMessageType=_associatedMessageType - In the implementation block
@property (nonatomic,readonly) BOOL hasAssociatedMessageGuid; 
@property (nonatomic,retain) NSString * associatedMessageGuid;                         //@synthesize associatedMessageGuid=_associatedMessageGuid - In the implementation block
@property (assign,nonatomic) BOOL hasAssociatedMessageRangeLocation; 
@property (assign,nonatomic) unsigned associatedMessageRangeLocation;                  //@synthesize associatedMessageRangeLocation=_associatedMessageRangeLocation - In the implementation block
@property (assign,nonatomic) BOOL hasAssociatedMessageRangeLength; 
@property (assign,nonatomic) unsigned associatedMessageRangeLength;                    //@synthesize associatedMessageRangeLength=_associatedMessageRangeLength - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)hasVersion;
-(BOOL)hasTimeRead;
-(void)setMessageSubject:(NSString *)arg1 ;
-(void)setMessageBody:(NSString *)arg1 ;
-(void)setMessageBodyData:(NSData *)arg1 ;
-(void)setBaloonBundleId:(NSString *)arg1 ;
-(void)setMessageSummaryInfo:(NSData *)arg1 ;
-(void)setExpressiveSendId:(NSString *)arg1 ;
-(BOOL)hasMessageSubject;
-(void)setAssociatedMessageGuid:(NSString *)arg1 ;
-(BOOL)hasMessageBody;
-(BOOL)hasMessageBodyData;
-(BOOL)hasBaloonBundleId;
-(BOOL)hasPayloadData;
-(BOOL)hasMessageSummaryInfo;
-(BOOL)hasExpressiveSendId;
-(void)setTimeRead:(unsigned long long)arg1 ;
-(void)setHasTimeRead:(BOOL)arg1 ;
-(NSData *)payloadData;
-(void)setTimePlayed:(unsigned long long)arg1 ;
-(void)setHasTimePlayed:(BOOL)arg1 ;
-(BOOL)hasTimePlayed;
-(void)setTimeExpressiveSentPlayed:(unsigned long long)arg1 ;
-(void)setHasTimeExpressiveSentPlayed:(BOOL)arg1 ;
-(BOOL)hasTimeExpressiveSentPlayed;
-(void)setTimeDelivered:(unsigned long long)arg1 ;
-(void)setHasTimeDelivered:(BOOL)arg1 ;
-(BOOL)hasTimeDelivered;
-(void)setExpireState:(unsigned long long)arg1 ;
-(void)setHasExpireState:(BOOL)arg1 ;
-(BOOL)hasExpireState;
-(void)setHasAssociatedMessageType:(BOOL)arg1 ;
-(BOOL)hasAssociatedMessageType;
-(NSData *)messageBodyData;
-(BOOL)hasAssociatedMessageGuid;
-(void)setAssociatedMessageRangeLocation:(unsigned)arg1 ;
-(void)setHasAssociatedMessageRangeLocation:(BOOL)arg1 ;
-(BOOL)hasAssociatedMessageRangeLocation;
-(BOOL)hasAssociatedMessageRangeLength;
-(void)setAssociatedMessageRangeLength:(unsigned)arg1 ;
-(void)setHasAssociatedMessageRangeLength:(BOOL)arg1 ;
-(NSString *)baloonBundleId;
-(NSString *)expressiveSendId;
-(unsigned long long)timePlayed;
-(unsigned long long)timeExpressiveSentPlayed;
-(unsigned long long)timeDelivered;
-(NSString *)associatedMessageGuid;
-(unsigned)associatedMessageRangeLocation;
-(unsigned)associatedMessageRangeLength;
-(void)mergeFrom:(id)arg1 ;
-(long long)associatedMessageType;
-(id)description;
-(void)setAssociatedMessageType:(long long)arg1 ;
-(void)setPayloadData:(NSData *)arg1 ;
-(unsigned long long)expireState;
-(NSData *)messageSummaryInfo;
-(NSString *)messageSubject;
-(unsigned long long)timeRead;
-(BOOL)hasPadding;
-(unsigned long long)hash;
-(NSData *)padding;
-(BOOL)readFrom:(id)arg1 ;
-(void)setPadding:(NSData *)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSString *)messageBody;
@end

