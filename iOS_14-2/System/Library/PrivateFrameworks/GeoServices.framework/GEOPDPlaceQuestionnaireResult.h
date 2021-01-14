/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, GEOPDMapsIdentifier, GEOPDScorecardLayout;

@interface GEOPDPlaceQuestionnaireResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _historicalMapsIds;
	GEOPDMapsIdentifier* _mapsId;
	GEOPDScorecardLayout* _scorecardLayout;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _status;
	BOOL _isOverride;
	struct {
		unsigned has_status : 1;
		unsigned has_isOverride : 1;
		unsigned read_historicalMapsIds : 1;
		unsigned read_mapsId : 1;
		unsigned read_scorecardLayout : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status; 
@property (nonatomic,readonly) BOOL hasScorecardLayout; 
@property (nonatomic,retain) GEOPDScorecardLayout * scorecardLayout; 
@property (nonatomic,readonly) BOOL hasMapsId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * mapsId; 
@property (assign,nonatomic) BOOL hasIsOverride; 
@property (assign,nonatomic) BOOL isOverride; 
@property (nonatomic,retain) NSMutableArray * historicalMapsIds; 
+(BOOL)isValid:(id)arg1 ;
+(Class)historicalMapsIdType;
-(id)dictionaryRepresentation;
-(void)setHasStatus:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setMapsId:(GEOPDMapsIdentifier *)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasStatus;
-(int)StringAsStatus:(id)arg1 ;
-(id)description;
-(GEOPDMapsIdentifier *)mapsId;
-(BOOL)hasMapsId;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(GEOPDScorecardLayout *)scorecardLayout;
-(NSMutableArray *)historicalMapsIds;
-(void)setStatus:(int)arg1 ;
-(BOOL)isOverride;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setIsOverride:(BOOL)arg1 ;
-(void)clearHistoricalMapsIds;
-(id)historicalMapsIdAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasScorecardLayout;
-(void)setScorecardLayout:(GEOPDScorecardLayout *)arg1 ;
-(void)addHistoricalMapsId:(id)arg1 ;
-(BOOL)hasIsOverride;
-(unsigned long long)historicalMapsIdsCount;
-(void)setHasIsOverride:(BOOL)arg1 ;
-(void)setHistoricalMapsIds:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)status;
@end

