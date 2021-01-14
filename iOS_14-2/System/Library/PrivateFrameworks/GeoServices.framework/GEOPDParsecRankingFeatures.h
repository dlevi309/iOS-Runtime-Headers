/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDParsecRankingFeatures : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _distanceFromContainment;
	double _distanceFromDeviceLocation;
	double _expectedCtr;
	BOOL _isRecallMismatch;
	BOOL _isSpellCorrected;
	struct {
		unsigned has_distanceFromContainment : 1;
		unsigned has_distanceFromDeviceLocation : 1;
		unsigned has_expectedCtr : 1;
		unsigned has_isRecallMismatch : 1;
		unsigned has_isSpellCorrected : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasExpectedCtr; 
@property (assign,nonatomic) double expectedCtr; 
@property (assign,nonatomic) BOOL hasDistanceFromDeviceLocation; 
@property (assign,nonatomic) double distanceFromDeviceLocation; 
@property (assign,nonatomic) BOOL hasDistanceFromContainment; 
@property (assign,nonatomic) double distanceFromContainment; 
@property (assign,nonatomic) BOOL hasIsSpellCorrected; 
@property (assign,nonatomic) BOOL isSpellCorrected; 
@property (assign,nonatomic) BOOL hasIsRecallMismatch; 
@property (assign,nonatomic) BOOL isRecallMismatch; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setExpectedCtr:(double)arg1 ;
-(void)setDistanceFromDeviceLocation:(double)arg1 ;
-(double)expectedCtr;
-(void)setDistanceFromContainment:(double)arg1 ;
-(void)setIsSpellCorrected:(BOOL)arg1 ;
-(void)setIsRecallMismatch:(BOOL)arg1 ;
-(void)setHasExpectedCtr:(BOOL)arg1 ;
-(BOOL)hasExpectedCtr;
-(double)distanceFromDeviceLocation;
-(void)setHasDistanceFromDeviceLocation:(BOOL)arg1 ;
-(BOOL)hasDistanceFromDeviceLocation;
-(double)distanceFromContainment;
-(void)setHasDistanceFromContainment:(BOOL)arg1 ;
-(BOOL)hasDistanceFromContainment;
-(BOOL)isSpellCorrected;
-(void)setHasIsSpellCorrected:(BOOL)arg1 ;
-(BOOL)hasIsSpellCorrected;
-(BOOL)isRecallMismatch;
-(void)setHasIsRecallMismatch:(BOOL)arg1 ;
-(BOOL)hasIsRecallMismatch;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
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

