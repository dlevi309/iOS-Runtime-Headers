/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDWifiFingerprintParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _measurements;
	unsigned _maxLabels;
	struct {
		unsigned has_maxLabels : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * measurements; 
@property (assign,nonatomic) BOOL hasMaxLabels; 
@property (assign,nonatomic) unsigned maxLabels; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)measurementType;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)clearSensitiveFields;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(unsigned)maxLabels;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addMeasurement:(id)arg1 ;
-(void)setMaxLabels:(unsigned)arg1 ;
-(NSMutableArray *)measurements;
-(unsigned long long)measurementsCount;
-(void)clearMeasurements;
-(id)measurementAtIndex:(unsigned long long)arg1 ;
-(void)setMeasurements:(NSMutableArray *)arg1 ;
-(void)setHasMaxLabels:(BOOL)arg1 ;
-(BOOL)hasMaxLabels;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

