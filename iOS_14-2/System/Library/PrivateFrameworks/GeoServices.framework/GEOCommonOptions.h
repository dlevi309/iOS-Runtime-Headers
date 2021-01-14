/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOCommonOptions : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	BOOL _excludeGuidance;
	BOOL _includeSnapScoreMetadataDebug;
	BOOL _includeSummaryForPredictedDestination;
	BOOL _includeTravelTimeAggressive;
	BOOL _includeTravelTimeConservative;
	BOOL _includeTravelTimeEstimate;
	struct {
		unsigned has_excludeGuidance : 1;
		unsigned has_includeSnapScoreMetadataDebug : 1;
		unsigned has_includeSummaryForPredictedDestination : 1;
		unsigned has_includeTravelTimeAggressive : 1;
		unsigned has_includeTravelTimeConservative : 1;
		unsigned has_includeTravelTimeEstimate : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasIncludeTravelTimeAggressive; 
@property (assign,nonatomic) BOOL includeTravelTimeAggressive; 
@property (assign,nonatomic) BOOL hasIncludeTravelTimeEstimate; 
@property (assign,nonatomic) BOOL includeTravelTimeEstimate; 
@property (assign,nonatomic) BOOL hasIncludeTravelTimeConservative; 
@property (assign,nonatomic) BOOL includeTravelTimeConservative; 
@property (assign,nonatomic) BOOL hasExcludeGuidance; 
@property (assign,nonatomic) BOOL excludeGuidance; 
@property (assign,nonatomic) BOOL hasIncludeSummaryForPredictedDestination; 
@property (assign,nonatomic) BOOL includeSummaryForPredictedDestination; 
@property (assign,nonatomic) BOOL hasIncludeSnapScoreMetadataDebug; 
@property (assign,nonatomic) BOOL includeSnapScoreMetadataDebug; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setIncludeSummaryForPredictedDestination:(BOOL)arg1 ;
-(void)setExcludeGuidance:(BOOL)arg1 ;
-(BOOL)hasIncludeTravelTimeEstimate;
-(void)setHasIncludeTravelTimeConservative:(BOOL)arg1 ;
-(void)setHasIncludeTravelTimeAggressive:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasIncludeTravelTimeConservative;
-(void)setHasIncludeTravelTimeEstimate:(BOOL)arg1 ;
-(void)setIncludeTravelTimeAggressive:(BOOL)arg1 ;
-(BOOL)includeTravelTimeConservative;
-(id)description;
-(BOOL)includeTravelTimeAggressive;
-(void)setHasIncludeSummaryForPredictedDestination:(BOOL)arg1 ;
-(BOOL)hasIncludeSnapScoreMetadataDebug;
-(BOOL)includeTravelTimeEstimate;
-(BOOL)hasIncludeSummaryForPredictedDestination;
-(BOOL)hasIncludeTravelTimeAggressive;
-(void)setHasIncludeSnapScoreMetadataDebug:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)includeSnapScoreMetadataDebug;
-(BOOL)hasExcludeGuidance;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)includeSummaryForPredictedDestination;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasExcludeGuidance:(BOOL)arg1 ;
-(BOOL)excludeGuidance;
-(void)setIncludeTravelTimeEstimate:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIncludeTravelTimeConservative:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIncludeSnapScoreMetadataDebug:(BOOL)arg1 ;
@end

