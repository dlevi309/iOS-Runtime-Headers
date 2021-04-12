/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPredictedCommuteDestination : PBCodable <NSCopying> {

	double _confidenceScore;
	int _destinationType;
	BOOL _chosen;
	SCD_Struct_GE85 _flags;

}

@property (assign,nonatomic) BOOL hasDestinationType; 
@property (assign,nonatomic) int destinationType; 
@property (assign,nonatomic) BOOL hasConfidenceScore; 
@property (assign,nonatomic) double confidenceScore; 
@property (assign,nonatomic) BOOL hasChosen; 
@property (assign,nonatomic) BOOL chosen; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(double)confidenceScore;
-(int)destinationType;
-(void)setDestinationType:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasDestinationType:(BOOL)arg1 ;
-(BOOL)hasDestinationType;
-(id)destinationTypeAsString:(int)arg1 ;
-(int)StringAsDestinationType:(id)arg1 ;
-(void)setConfidenceScore:(double)arg1 ;
-(void)setHasConfidenceScore:(BOOL)arg1 ;
-(BOOL)hasConfidenceScore;
-(BOOL)chosen;
-(void)setChosen:(BOOL)arg1 ;
-(void)setHasChosen:(BOOL)arg1 ;
-(BOOL)hasChosen;
@end

