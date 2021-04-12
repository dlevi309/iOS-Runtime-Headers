/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TrialProto-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TRILogContext, TRIDenormalizedEvent, NSString;

@interface TRILogEvent : PBCodable <NSCopying> {

	TRILogContext* _context;
	TRIDenormalizedEvent* _denormalizedEvent;
	NSString* _logEventId;

}

@property (nonatomic,readonly) BOOL hasContext; 
@property (nonatomic,retain) TRILogContext * context;                               //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL hasLogEventId; 
@property (nonatomic,retain) NSString * logEventId;                                 //@synthesize logEventId=_logEventId - In the implementation block
@property (nonatomic,readonly) BOOL hasDenormalizedEvent; 
@property (nonatomic,retain) TRIDenormalizedEvent * denormalizedEvent;              //@synthesize denormalizedEvent=_denormalizedEvent - In the implementation block
+(id)currentTime;
+(id)eventWithTrackingId:(id)arg1 projectId:(int)arg2 ;
+(id)contextWithTrackingId:(id)arg1 projectId:(int)arg2 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(TRILogContext *)context;
-(id)description;
-(unsigned long long)hash;
-(TRIDenormalizedEvent *)denormalizedEvent;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasDenormalizedEvent;
-(void)setLogEventId:(NSString *)arg1 ;
-(void)setDenormalizedEvent:(TRIDenormalizedEvent *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasContext;
-(BOOL)isEqual:(id)arg1 ;
-(void)setContext:(TRILogContext *)arg1 ;
-(BOOL)hasLogEventId;
-(NSString *)logEventId;
@end

