/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPredictedCommuteDestination : PBCodable <NSCopying> {

	double _confidenceScore;
	int _destinationType;
	BOOL _chosen;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasDestinationType; 
@property (assign,nonatomic) int destinationType; 
@property (assign,nonatomic) BOOL hasConfidenceScore; 
@property (assign,nonatomic) double confidenceScore; 
@property (assign,nonatomic) BOOL hasChosen; 
@property (assign,nonatomic) BOOL chosen; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)chosen;
-(id)jsonRepresentation;
-(int)destinationType;
-(double)confidenceScore;
-(BOOL)hasChosen;
-(void)setChosen:(BOOL)arg1 ;
-(void)setConfidenceScore:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasConfidenceScore;
-(void)setHasConfidenceScore:(BOOL)arg1 ;
-(void)setHasChosen:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setDestinationType:(int)arg1 ;
-(id)destinationTypeAsString:(int)arg1 ;
-(id)description;
-(void)setHasDestinationType:(BOOL)arg1 ;
-(int)StringAsDestinationType:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasDestinationType;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

