/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOFormattedString;

@interface GEOMiniCard : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _buttonText;
	GEOFormattedString* _detail;
	GEOFormattedString* _metadata;
	GEOFormattedString* _title;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _shouldEmphasize;
	struct {
		unsigned has_shouldEmphasize : 1;
		unsigned read_unknownFields : 1;
		unsigned read_buttonText : 1;
		unsigned read_detail : 1;
		unsigned read_metadata : 1;
		unsigned read_title : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) GEOFormattedString * title; 
@property (nonatomic,readonly) BOOL hasDetail; 
@property (nonatomic,retain) GEOFormattedString * detail; 
@property (nonatomic,readonly) BOOL hasButtonText; 
@property (nonatomic,retain) NSString * buttonText; 
@property (assign,nonatomic) BOOL hasShouldEmphasize; 
@property (assign,nonatomic) BOOL shouldEmphasize; 
@property (nonatomic,readonly) BOOL hasMetadata; 
@property (nonatomic,retain) GEOFormattedString * metadata; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOFormattedString *)detail;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(BOOL)hasDetail;
-(id)jsonRepresentation;
-(BOOL)hasTitle;
-(NSString *)buttonText;
-(void)setTitle:(GEOFormattedString *)arg1 ;
-(BOOL)hasMetadata;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setButtonText:(NSString *)arg1 ;
-(void)setShouldEmphasize:(BOOL)arg1 ;
-(void)setMetadata:(GEOFormattedString *)arg1 ;
-(BOOL)hasButtonText;
-(BOOL)shouldEmphasize;
-(void)setHasShouldEmphasize:(BOOL)arg1 ;
-(BOOL)hasShouldEmphasize;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDetail:(GEOFormattedString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOFormattedString *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(GEOFormattedString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

