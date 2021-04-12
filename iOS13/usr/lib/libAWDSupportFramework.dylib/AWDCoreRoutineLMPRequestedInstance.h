/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/RTMetricManagerMetricIdProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCoreRoutineLMPRequestedInstance : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {

	unsigned long long _timestamp;
	int _confidence;
	NSString* _eventId;
	int _occurrences;
	int _reason;
	BOOL _suggested;
	SCD_Struct_AW2 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasEventId; 
@property (nonatomic,retain) NSString * eventId;                        //@synthesize eventId=_eventId - In the implementation block
@property (assign,nonatomic) BOOL hasSuggested; 
@property (assign,nonatomic) BOOL suggested;                            //@synthesize suggested=_suggested - In the implementation block
@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) int confidence;                            //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) BOOL hasOccurrences; 
@property (assign,nonatomic) int occurrences;                           //@synthesize occurrences=_occurrences - In the implementation block
@property (assign,nonatomic) BOOL hasReason; 
@property (assign,nonatomic) int reason;                                //@synthesize reason=_reason - In the implementation block
-(NSString *)description;
-(id)_init;
-(long long)metricId;
-(BOOL)valid:(id*)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)reason;
-(id)dictionaryRepresentation;
-(int)confidence;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setConfidence:(int)arg1 ;
-(void)setReason:(int)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(BOOL)hasEventId;
-(NSString *)eventId;
-(void)setEventId:(NSString *)arg1 ;
-(BOOL)hasReason;
-(void)setHasReason:(BOOL)arg1 ;
-(void)setOccurrences:(int)arg1 ;
-(void)setSuggested:(BOOL)arg1 ;
-(int)occurrences;
-(BOOL)suggested;
-(void)setHasSuggested:(BOOL)arg1 ;
-(BOOL)hasSuggested;
-(void)setHasOccurrences:(BOOL)arg1 ;
-(BOOL)hasOccurrences;
@end

