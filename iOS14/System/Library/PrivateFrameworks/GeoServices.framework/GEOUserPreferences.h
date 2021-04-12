/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOUserPreferences : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	BOOL _avoidHighways;
	BOOL _avoidTolls;
	struct {
		unsigned has_avoidHighways : 1;
		unsigned has_avoidTolls : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasAvoidTolls; 
@property (assign,nonatomic) BOOL avoidTolls; 
@property (assign,nonatomic) BOOL hasAvoidHighways; 
@property (assign,nonatomic) BOOL avoidHighways; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)avoidHighways;
-(void)setHasAvoidTolls:(BOOL)arg1 ;
-(BOOL)avoidTolls;
-(void)setAvoidHighways:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasAvoidTolls;
-(PBUnknownFields *)unknownFields;
-(void)setHasAvoidHighways:(BOOL)arg1 ;
-(BOOL)hasAvoidHighways;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setAvoidTolls:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

