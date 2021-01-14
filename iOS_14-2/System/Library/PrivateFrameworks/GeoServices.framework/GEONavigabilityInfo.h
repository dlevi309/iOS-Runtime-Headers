/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEONavigabilityInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	BOOL _isBlocked;
	BOOL _isEvFeasible;
	struct {
		unsigned has_isBlocked : 1;
		unsigned has_isEvFeasible : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasIsEvFeasible; 
@property (assign,nonatomic) BOOL isEvFeasible; 
@property (assign,nonatomic) BOOL hasIsBlocked; 
@property (assign,nonatomic) BOOL isBlocked; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isBlocked;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setIsEvFeasible:(BOOL)arg1 ;
-(void)setIsBlocked:(BOOL)arg1 ;
-(BOOL)isEvFeasible;
-(void)setHasIsEvFeasible:(BOOL)arg1 ;
-(BOOL)hasIsEvFeasible;
-(void)setHasIsBlocked:(BOOL)arg1 ;
-(BOOL)hasIsBlocked;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

