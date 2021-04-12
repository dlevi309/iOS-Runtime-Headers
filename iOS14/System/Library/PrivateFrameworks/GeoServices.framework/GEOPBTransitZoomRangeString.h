/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOPBTransitZoomRangeString : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _labelLanguage;
	NSString* _labelText;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _minZoom;
	struct {
		unsigned has_minZoom : 1;
		unsigned read_unknownFields : 1;
		unsigned read_labelLanguage : 1;
		unsigned read_labelText : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasMinZoom; 
@property (assign,nonatomic) unsigned minZoom; 
@property (nonatomic,readonly) BOOL hasLabelLanguage; 
@property (nonatomic,retain) NSString * labelLanguage; 
@property (nonatomic,readonly) BOOL hasLabelText; 
@property (nonatomic,retain) NSString * labelText; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(unsigned)minZoom;
-(id)jsonRepresentation;
-(BOOL)hasMinZoom;
-(void)mergeFrom:(id)arg1 ;
-(void)setMinZoom:(unsigned)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSString *)labelText;
-(void)setLabelText:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)labelLanguage;
-(void)setLabelLanguage:(NSString *)arg1 ;
-(BOOL)hasLabelLanguage;
-(BOOL)hasLabelText;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasMinZoom:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

