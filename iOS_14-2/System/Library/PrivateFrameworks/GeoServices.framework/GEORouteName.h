/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEONameInfo;

@interface GEORouteName : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEONameInfo* _nameInfo;
	int _lastZilchStitchedIndex;
	struct {
		unsigned has_lastZilchStitchedIndex : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasNameInfo; 
@property (nonatomic,retain) GEONameInfo * nameInfo; 
@property (assign,nonatomic) BOOL hasLastZilchStitchedIndex; 
@property (assign,nonatomic) int lastZilchStitchedIndex; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEONameInfo *)nameInfo;
-(id)description;
-(void)setNameInfo:(GEONameInfo *)arg1 ;
-(BOOL)hasNameInfo;
-(void)setLastZilchStitchedIndex:(int)arg1 ;
-(int)lastZilchStitchedIndex;
-(void)setHasLastZilchStitchedIndex:(BOOL)arg1 ;
-(BOOL)hasLastZilchStitchedIndex;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

