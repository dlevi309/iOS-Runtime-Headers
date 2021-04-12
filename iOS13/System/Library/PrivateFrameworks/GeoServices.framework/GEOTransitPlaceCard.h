/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, GEOTransitDepartureSequenceUsage;

@interface GEOTransitPlaceCard : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _incidentType;
	GEOTransitDepartureSequenceUsage* _transitDepartureSequenceUsage;
	NSString* _transitSystemName;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _transitCategory;
	struct {
		unsigned has_transitCategory : 1;
		unsigned read_incidentType : 1;
		unsigned read_transitDepartureSequenceUsage : 1;
		unsigned read_transitSystemName : 1;
		unsigned wrote_incidentType : 1;
		unsigned wrote_transitDepartureSequenceUsage : 1;
		unsigned wrote_transitSystemName : 1;
		unsigned wrote_transitCategory : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTransitCategory; 
@property (assign,nonatomic) int transitCategory; 
@property (nonatomic,readonly) BOOL hasTransitSystemName; 
@property (nonatomic,retain) NSString * transitSystemName; 
@property (nonatomic,readonly) BOOL hasTransitDepartureSequenceUsage; 
@property (nonatomic,retain) GEOTransitDepartureSequenceUsage * transitDepartureSequenceUsage; 
@property (nonatomic,readonly) BOOL hasIncidentType; 
@property (nonatomic,retain) NSString * incidentType; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setTransitCategory:(int)arg1 ;
-(void)setTransitSystemName:(NSString *)arg1 ;
-(void)setTransitDepartureSequenceUsage:(GEOTransitDepartureSequenceUsage *)arg1 ;
-(void)setIncidentType:(NSString *)arg1 ;
-(BOOL)hasIncidentType;
-(NSString *)incidentType;
-(BOOL)hasTransitCategory;
-(int)transitCategory;
-(BOOL)hasTransitSystemName;
-(NSString *)transitSystemName;
-(BOOL)hasTransitDepartureSequenceUsage;
-(GEOTransitDepartureSequenceUsage *)transitDepartureSequenceUsage;
-(void)_readTransitSystemName;
-(void)_readTransitDepartureSequenceUsage;
-(void)_readIncidentType;
-(void)setHasTransitCategory:(BOOL)arg1 ;
-(id)transitCategoryAsString:(int)arg1 ;
-(int)StringAsTransitCategory:(id)arg1 ;
@end

