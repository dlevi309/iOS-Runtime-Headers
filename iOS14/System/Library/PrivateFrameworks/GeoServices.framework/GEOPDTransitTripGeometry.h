/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOPDTransitTripGeometry : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE17* _tripStepIndexs;
	NSMutableArray* _tripLinks;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_tripStepIndexs : 1;
		unsigned read_tripLinks : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * tripLinks; 
@property (nonatomic,readonly) unsigned long long tripStepIndexsCount; 
@property (nonatomic,readonly) unsigned* tripStepIndexs; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)tripLinkType;
+(BOOL)isValid:(id)arg1 ;
+(id)transitTripGeometryForPlaceData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)addTripLink:(id)arg1 ;
-(void)addTripStepIndex:(unsigned)arg1 ;
-(unsigned long long)tripLinksCount;
-(void)clearTripLinks;
-(id)tripLinkAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)tripStepIndexsCount;
-(void)clearTripStepIndexs;
-(unsigned)tripStepIndexAtIndex:(unsigned long long)arg1 ;
-(void)setTripLinks:(NSMutableArray *)arg1 ;
-(unsigned*)tripStepIndexs;
-(void)setTripStepIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)tripLinks;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

