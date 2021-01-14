/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOFormattedString;

@interface GEOTrafficBannerTextButton : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOFormattedString* _text;
	int _action;
	struct {
		unsigned has_action : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasText; 
@property (nonatomic,retain) GEOFormattedString * text; 
@property (assign,nonatomic) BOOL hasAction; 
@property (assign,nonatomic) int action; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasText;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setHasAction:(BOOL)arg1 ;
-(void)setText:(GEOFormattedString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)action;
-(void)setAction:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(GEOFormattedString *)text;
-(BOOL)hasAction;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)actionAsString:(int)arg1 ;
-(int)StringAsAction:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

