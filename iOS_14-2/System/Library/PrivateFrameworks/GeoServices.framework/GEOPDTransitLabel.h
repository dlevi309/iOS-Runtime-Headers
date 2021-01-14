/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitLabelItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PBDataReader, PBUnknownFields, GEOPBTransitArtwork;

@interface GEOPDTransitLabel : PBCodable <GEOTransitLabelItem, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPBTransitArtwork* _labelArtwork;
	NSString* _labelTextString;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _labelType;
	struct {
		unsigned has_labelType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_labelArtwork : 1;
		unsigned read_labelTextString : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) NSString * labelString; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> labelArtwork; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasLabelType; 
@property (assign,nonatomic) int labelType; 
@property (nonatomic,readonly) BOOL hasLabelTextString; 
@property (nonatomic,retain) NSString * labelTextString; 
@property (nonatomic,readonly) BOOL hasLabelArtwork; 
@property (nonatomic,retain) GEOPBTransitArtwork * labelArtwork; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSString *)labelString;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)description;
-(NSString *)labelTextString;
-(id<GEOTransitArtworkDataSource>)labelArtwork;
-(void)setLabelType:(int)arg1 ;
-(void)setLabelTextString:(NSString *)arg1 ;
-(BOOL)hasLabelType;
-(void)setLabelArtwork:(id<GEOTransitArtworkDataSource>)arg1 ;
-(void)setHasLabelType:(BOOL)arg1 ;
-(id)labelTypeAsString:(int)arg1 ;
-(int)StringAsLabelType:(id)arg1 ;
-(BOOL)hasLabelTextString;
-(BOOL)hasLabelArtwork;
-(unsigned long long)type;
-(unsigned long long)hash;
-(int)labelType;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

