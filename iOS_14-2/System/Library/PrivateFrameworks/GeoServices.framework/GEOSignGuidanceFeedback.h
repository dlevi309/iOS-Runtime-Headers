/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOSignGuidanceFeedback : PBCodable <NSCopying> {

	int _signDetailIndex;
	int _signTitleIndex;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasSignTitleIndex; 
@property (assign,nonatomic) int signTitleIndex; 
@property (assign,nonatomic) BOOL hasSignDetailIndex; 
@property (assign,nonatomic) int signDetailIndex; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setSignTitleIndex:(int)arg1 ;
-(void)setSignDetailIndex:(int)arg1 ;
-(int)signTitleIndex;
-(void)setHasSignTitleIndex:(BOOL)arg1 ;
-(BOOL)hasSignTitleIndex;
-(int)signDetailIndex;
-(void)setHasSignDetailIndex:(BOOL)arg1 ;
-(BOOL)hasSignDetailIndex;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

