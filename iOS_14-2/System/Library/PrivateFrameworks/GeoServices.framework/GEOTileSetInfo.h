/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTileSetInfo : PBCodable <NSCopying> {

	unsigned _count;
	int _style;
	unsigned _uncertainty;
	unsigned _zoom;
	struct {
		unsigned has_count : 1;
		unsigned has_style : 1;
		unsigned has_uncertainty : 1;
		unsigned has_zoom : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasStyle; 
@property (assign,nonatomic) int style; 
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count; 
@property (assign,nonatomic) BOOL hasZoom; 
@property (assign,nonatomic) unsigned zoom; 
@property (assign,nonatomic) BOOL hasUncertainty; 
@property (assign,nonatomic) unsigned uncertainty; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setCount:(unsigned)arg1 ;
-(void)setZoom:(unsigned)arg1 ;
-(unsigned)zoom;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasStyle:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setHasUncertainty:(BOOL)arg1 ;
-(id)styleAsString:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)count;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasCount;
-(BOOL)hasUncertainty;
-(BOOL)hasStyle;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setUncertainty:(unsigned)arg1 ;
-(int)StringAsStyle:(id)arg1 ;
-(void)setHasZoom:(BOOL)arg1 ;
-(void)setStyle:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasZoom;
-(unsigned)uncertainty;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)style;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

