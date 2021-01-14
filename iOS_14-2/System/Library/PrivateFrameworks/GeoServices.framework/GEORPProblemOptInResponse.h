/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEORPProblemOptInResponse : PBCodable <NSCopying> {

	int _statusCode;
	SCD_Struct_GE127 _flags;

}

@property (assign,nonatomic) BOOL hasStatusCode; 
@property (assign,nonatomic) int statusCode; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(int)StringAsStatusCode:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setStatusCode:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(int)statusCode;
-(id)statusCodeAsString:(int)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)hasStatusCode;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasStatusCode:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

