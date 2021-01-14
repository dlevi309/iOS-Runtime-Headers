/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_CO1 _has;

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
-(id)dictionaryRepresentation;
-(BOOL)hasSourceChannelId;
-(void)setResultType:(int)arg1 ;
-(NSString *)sourceChannelId;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)resultType;
-(void)setHasResultType:(BOOL)arg1 ;
-(NSString *)eventUdid;
-(void)setEventUdid:(NSString *)arg1 ;
-(void)setFailureReasonCode:(NSString *)arg1 ;
-(void)setContentViewedId:(NSString *)arg1 ;
-(BOOL)hasEventUdid;
-(BOOL)hasFailureReasonCode;
-(BOOL)hasContentViewedId;
-(NSString *)failureReasonCode;
-(NSString *)contentViewedId;
-(id)description;
-(unsigned long long)hash;
-(void)setExternalAnalyticsId:(NSString *)arg1 ;
-(int)externalAnalyticsEventType;
-(void)setExternalAnalyticsEventType:(int)arg1 ;
-(void)setHasExternalAnalyticsEventType:(BOOL)arg1 ;
-(BOOL)hasExternalAnalyticsEventType;
-(BOOL)hasExternalAnalyticsId;
-(NSString *)externalAnalyticsId;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasResultType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

