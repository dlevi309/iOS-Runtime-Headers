/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_labelArtwork : 1;
		unsigned wrote_labelTextString : 1;
		unsigned wrote_labelType : 1;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) NSString * labelString; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> labelArtwork; 
@property (assign,nonatomic) BOOL hasLabelType; 
@property (assign,nonatomic) int labelType; 
@property (nonatomic,readonly) BOOL hasLabelTextString; 
@property (nonatomic,retain) NSString * labelTextString; 
@property (nonatomic,readonly) BOOL hasLabelArtwork; 
@property (nonatomic,retain) GEOPBTransitArtwork * labelArtwork; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)labelType;
-(void)setLabelType:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasLabelType;
-(NSString *)labelTextString;
-(NSString *)labelString;
-(id<GEOTransitArtworkDataSource>)labelArtwork;
-(void)setHasLabelType:(BOOL)arg1 ;
-(id)labelTypeAsString:(int)arg1 ;
-(int)StringAsLabelType:(id)arg1 ;
-(void)_readLabelTextString;
-(void)_readLabelArtwork;
-(void)setLabelTextString:(NSString *)arg1 ;
-(void)setLabelArtwork:(id<GEOTransitArtworkDataSource>)arg1 ;
-(BOOL)hasLabelTextString;
-(BOOL)hasLabelArtwork;
@end

