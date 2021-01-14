/*
* Generated on Thursday, January 14, 2021 at 2:23:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort : PBCodable <NSCopying> {

	double _clicks;
	double _impressions;
	long long _timestamp;
	int _type;
	SCD_Struct_NT2 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasClicks; 
@property (assign,nonatomic) double clicks;                    //@synthesize clicks=_clicks - In the implementation block
@property (assign,nonatomic) BOOL hasImpressions; 
@property (assign,nonatomic) double impressions;               //@synthesize impressions=_impressions - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasImpressions;
-(id)typeAsString:(int)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(double)impressions;
-(long long)timestamp;
-(void)setHasImpressions:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(id)description;
-(double)clicks;
-(int)type;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setClicks:(double)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasClicks;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setImpressions:(double)arg1 ;
-(void)setHasClicks:(BOOL)arg1 ;
@end

