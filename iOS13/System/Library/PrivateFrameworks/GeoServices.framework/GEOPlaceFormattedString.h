/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOFormattedString;

@interface GEOPlaceFormattedString : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOFormattedString* _contactHome;
	GEOFormattedString* _contactOther;
	GEOFormattedString* _contactWork;
	GEOFormattedString* _custom;
	GEOFormattedString* _home;
	GEOFormattedString* _pointOfInterest;
	GEOFormattedString* _streetAddress;
	GEOFormattedString* _unknown;
	GEOFormattedString* _work;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_contactHome : 1;
		unsigned read_contactOther : 1;
		unsigned read_contactWork : 1;
		unsigned read_custom : 1;
		unsigned read_home : 1;
		unsigned read_pointOfInterest : 1;
		unsigned read_streetAddress : 1;
		unsigned read_unknown : 1;
		unsigned read_work : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_contactHome : 1;
		unsigned wrote_contactOther : 1;
		unsigned wrote_contactWork : 1;
		unsigned wrote_custom : 1;
		unsigned wrote_home : 1;
		unsigned wrote_pointOfInterest : 1;
		unsigned wrote_streetAddress : 1;
		unsigned wrote_unknown : 1;
		unsigned wrote_work : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasHome; 
@property (nonatomic,retain) GEOFormattedString * home; 
@property (nonatomic,readonly) BOOL hasWork; 
@property (nonatomic,retain) GEOFormattedString * work; 
@property (nonatomic,readonly) BOOL hasContactWork; 
@property (nonatomic,retain) GEOFormattedString * contactWork; 
@property (nonatomic,readonly) BOOL hasContactHome; 
@property (nonatomic,retain) GEOFormattedString * contactHome; 
@property (nonatomic,readonly) BOOL hasContactOther; 
@property (nonatomic,retain) GEOFormattedString * contactOther; 
@property (nonatomic,readonly) BOOL hasPointOfInterest; 
@property (nonatomic,retain) GEOFormattedString * pointOfInterest; 
@property (nonatomic,readonly) BOOL hasStreetAddress; 
@property (nonatomic,retain) GEOFormattedString * streetAddress; 
@property (nonatomic,readonly) BOOL hasUnknown; 
@property (nonatomic,retain) GEOFormattedString * unknown; 
@property (nonatomic,readonly) BOOL hasCustom; 
@property (nonatomic,retain) GEOFormattedString * custom; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
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
-(GEOFormattedString *)unknown;
-(GEOFormattedString *)home;
-(GEOFormattedString *)work;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readHome;
-(void)_readWork;
-(void)_readContactWork;
-(void)_readContactHome;
-(void)_readContactOther;
-(void)_readPointOfInterest;
-(void)_readStreetAddress;
-(void)_readUnknown;
-(void)_readCustom;
-(GEOFormattedString *)contactWork;
-(GEOFormattedString *)contactHome;
-(GEOFormattedString *)contactOther;
-(GEOFormattedString *)pointOfInterest;
-(GEOFormattedString *)streetAddress;
-(GEOFormattedString *)custom;
-(void)setHome:(GEOFormattedString *)arg1 ;
-(void)setWork:(GEOFormattedString *)arg1 ;
-(void)setContactWork:(GEOFormattedString *)arg1 ;
-(void)setContactHome:(GEOFormattedString *)arg1 ;
-(void)setContactOther:(GEOFormattedString *)arg1 ;
-(void)setPointOfInterest:(GEOFormattedString *)arg1 ;
-(void)setStreetAddress:(GEOFormattedString *)arg1 ;
-(void)setUnknown:(GEOFormattedString *)arg1 ;
-(void)setCustom:(GEOFormattedString *)arg1 ;
-(BOOL)hasHome;
-(BOOL)hasWork;
-(BOOL)hasContactWork;
-(BOOL)hasContactHome;
-(BOOL)hasContactOther;
-(BOOL)hasPointOfInterest;
-(BOOL)hasStreetAddress;
-(BOOL)hasUnknown;
-(BOOL)hasCustom;
@end

