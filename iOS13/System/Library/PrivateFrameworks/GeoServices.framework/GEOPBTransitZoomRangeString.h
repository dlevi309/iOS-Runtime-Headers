/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_labelLanguage : 1;
		unsigned wrote_labelText : 1;
		unsigned wrote_minZoom : 1;
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
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setMinZoom:(unsigned)arg1 ;
-(void)setLabelText:(NSString *)arg1 ;
-(unsigned)minZoom;
-(void)setHasMinZoom:(BOOL)arg1 ;
-(BOOL)hasMinZoom;
-(void)_readLabelLanguage;
-(void)_readLabelText;
-(NSString *)labelLanguage;
-(NSString *)labelText;
-(void)setLabelLanguage:(NSString *)arg1 ;
-(BOOL)hasLabelLanguage;
-(BOOL)hasLabelText;
@end

