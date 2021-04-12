/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDTransitTripStopTime : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _departureSequences;

}

@property (nonatomic,retain) NSMutableArray * departureSequences; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)departureSequenceType;
+(id)transitTripStopTimeForPlaceData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)departureSequencesCount;
-(void)clearDepartureSequences;
-(id)departureSequenceAtIndex:(unsigned long long)arg1 ;
-(void)addDepartureSequence:(id)arg1 ;
-(NSMutableArray *)departureSequences;
-(void)setDepartureSequences:(NSMutableArray *)arg1 ;
@end

