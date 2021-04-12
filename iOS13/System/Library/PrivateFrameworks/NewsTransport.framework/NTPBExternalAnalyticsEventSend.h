/*
* Generated on Monday, March 1, 2021 at 2:32:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBExternalAnalyticsEventSend : PBCodable <NSCopying> {

	NSString* _contentViewedId;
	NSString* _eventUdid;
	int _externalAnalyticsEventType;
	NSString* _externalAnalyticsId;
	NSString* _failureReasonCode;
	int _resultType;
	NSString* _sourceChannelId;
	SCD_Struct_NT2 _has;

}

@property (assign,nonatomic) BOOL hasExternalAnalyticsEventType; 
@property (assign,nonatomic) int externalAnalyticsEventType;                  //@synthesize externalAnalyticsEventType=_externalAnalyticsEventType - In the implementation block
@property (assign,nonatomic) BOOL hasResultType; 
@property (assign,nonatomic) int resultType;                                  //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,readonly) BOOL hasEventUdid; 
@property (nonatomic,retain) NSString * eventUdid;                            //@synthesize eventUdid=_eventUdid - In the implementation block
@property (nonatomic,readonly) BOOL hasFailureReasonCode; 
@property (nonatomic,retain) NSString * failureReasonCode;                    //@synthesize failureReasonCode=_failureReasonCode - In the implementation block
@property (nonatomic,readonly) BOOL hasContentViewedId; 
@property (nonatomic,retain) NSString * contentViewedId;                      //@synthesize contentViewedId=_contentViewedId - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                      //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (nonatomic,readonly) BOOL hasExternalAnalyticsId; 
@property (nonatomic,retain) NSString * externalAnalyticsId;                  //@synthesize externalAnalyticsId=_externalAnalyticsId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)resultType;
-(void)writeTo:(id)arg1 ;
-(void)setResultType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasResultType:(BOOL)arg1 ;
-(BOOL)hasResultType;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(BOOL)hasSourceChannelId;
-(NSString *)sourceChannelId;
-(void)setEventUdid:(NSString *)arg1 ;
-(void)setFailureReasonCode:(NSString *)arg1 ;
-(void)setContentViewedId:(NSString *)arg1 ;
-(BOOL)hasEventUdid;
-(BOOL)hasFailureReasonCode;
-(BOOL)hasContentViewedId;
-(NSString *)eventUdid;
-(NSString *)failureReasonCode;
-(NSString *)contentViewedId;
-(void)setExternalAnalyticsId:(NSString *)arg1 ;
-(int)externalAnalyticsEventType;
-(void)setExternalAnalyticsEventType:(int)arg1 ;
-(void)setHasExternalAnalyticsEventType:(BOOL)arg1 ;
-(BOOL)hasExternalAnalyticsEventType;
-(BOOL)hasExternalAnalyticsId;
-(NSString *)externalAnalyticsId;
@end

