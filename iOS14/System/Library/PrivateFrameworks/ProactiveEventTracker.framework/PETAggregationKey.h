/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(id)typeAsString:(int)arg1 ;
-(unsigned)datestamp;
-(void)setHasType:(BOOL)arg1 ;
-(void)setHasBucket:(BOOL)arg1 ;
-(PETRawMessage *)rawMessage;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(id)description;
-(void)setBucket:(double)arg1 ;
-(void)setRawMessage:(PETRawMessage *)arg1 ;
-(double)bucket;
-(BOOL)hasDatestamp;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasBucket;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasRawMessage;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasDatestamp:(BOOL)arg1 ;
-(void)setDatestamp:(unsigned)arg1 ;
@end

