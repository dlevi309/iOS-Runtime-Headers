/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
*/

#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PETRawMessage;

@interface PETAggregationKey : PBCodable <NSCopying> {

	double _bucket;
	unsigned _datestamp;
	PETRawMessage* _rawMessage;
	int _type;
	SCD_Struct_PE4 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasDatestamp; 
@property (assign,nonatomic) unsigned datestamp;                      //@synthesize datestamp=_datestamp - In the implementation block
@property (assign,nonatomic) BOOL hasBucket; 
@property (assign,nonatomic) double bucket;                           //@synthesize bucket=_bucket - In the implementation block
@property (nonatomic,readonly) BOOL hasRawMessage; 
@property (nonatomic,retain) PETRawMessage * rawMessage;              //@synthesize rawMessage=_rawMessage - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(double)bucket;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setBucket:(double)arg1 ;
-(void)setDatestamp:(unsigned)arg1 ;
-(void)setHasDatestamp:(BOOL)arg1 ;
-(BOOL)hasDatestamp;
-(void)setHasBucket:(BOOL)arg1 ;
-(BOOL)hasBucket;
-(BOOL)hasRawMessage;
-(unsigned)datestamp;
-(PETRawMessage *)rawMessage;
-(void)setRawMessage:(PETRawMessage *)arg1 ;
@end

