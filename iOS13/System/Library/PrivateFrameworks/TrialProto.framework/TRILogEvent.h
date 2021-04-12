/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(TRILogContext *)context;
-(void)setContext:(TRILogContext *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasContext;
-(TRIDenormalizedEvent *)denormalizedEvent;
-(BOOL)hasDenormalizedEvent;
-(void)setLogEventId:(NSString *)arg1 ;
-(void)setDenormalizedEvent:(TRIDenormalizedEvent *)arg1 ;
-(BOOL)hasLogEventId;
-(NSString *)logEventId;
@end

