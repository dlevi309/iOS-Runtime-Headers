/*
* Generated on Monday, March 1, 2021 at 2:32:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_NT5 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasClicks; 
@property (assign,nonatomic) double clicks;                    //@synthesize clicks=_clicks - In the implementation block
@property (assign,nonatomic) BOOL hasImpressions; 
@property (assign,nonatomic) double impressions;               //@synthesize impressions=_impressions - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(double)impressions;
-(void)setImpressions:(double)arg1 ;
-(double)clicks;
-(void)setClicks:(double)arg1 ;
-(void)setHasClicks:(BOOL)arg1 ;
-(BOOL)hasClicks;
-(void)setHasImpressions:(BOOL)arg1 ;
-(BOOL)hasImpressions;
@end

