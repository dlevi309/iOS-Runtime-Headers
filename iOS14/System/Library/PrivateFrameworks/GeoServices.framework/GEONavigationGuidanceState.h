/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEONavigationGuidanceState : PBCodable <NSCopying> {

	int _guidanceLevelIgnoringTimeCriterion;
	int _guidanceLevel;
	int _navigationState;
	int _navigationType;
	int _trackedTransportType;
	BOOL _shouldSuppressCellularDataAlerts;
	struct {
		unsigned has_guidanceLevelIgnoringTimeCriterion : 1;
		unsigned has_guidanceLevel : 1;
		unsigned has_navigationState : 1;
		unsigned has_navigationType : 1;
		unsigned has_trackedTransportType : 1;
		unsigned has_shouldSuppressCellularDataAlerts : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTrackedTransportType; 
@property (assign,nonatomic) int trackedTransportType; 
@property (assign,nonatomic) BOOL hasNavigationState; 
@property (assign,nonatomic) int navigationState; 
@property (assign,nonatomic) BOOL hasGuidanceLevel; 
@property (assign,nonatomic) int guidanceLevel; 
@property (assign,nonatomic) BOOL hasShouldSuppressCellularDataAlerts; 
@property (assign,nonatomic) BOOL shouldSuppressCellularDataAlerts; 
@property (assign,nonatomic) BOOL hasGuidanceLevelIgnoringTimeCriterion; 
@property (assign,nonatomic) int guidanceLevelIgnoringTimeCriterion; 
@property (assign,nonatomic) BOOL hasNavigationType; 
@property (assign,nonatomic) int navigationType; 
+(BOOL)isValid:(id)arg1 ;
-(int)navigationType;
-(id)dictionaryRepresentation;
-(int)navigationState;
-(void)readAll:(BOOL)arg1 ;
-(void)setNavigationType:(int)arg1 ;
-(void)setNavigationState:(int)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setGuidanceLevel:(int)arg1 ;
-(void)setShouldSuppressCellularDataAlerts:(BOOL)arg1 ;
-(int)trackedTransportType;
-(void)setGuidanceLevelIgnoringTimeCriterion:(int)arg1 ;
-(void)setHasTrackedTransportType:(BOOL)arg1 ;
-(void)setHasNavigationState:(BOOL)arg1 ;
-(BOOL)hasTrackedTransportType;
-(id)trackedTransportTypeAsString:(int)arg1 ;
-(int)StringAsTrackedTransportType:(id)arg1 ;
-(BOOL)hasNavigationState;
-(id)navigationStateAsString:(int)arg1 ;
-(int)StringAsNavigationState:(id)arg1 ;
-(int)guidanceLevel;
-(void)setHasGuidanceLevel:(BOOL)arg1 ;
-(BOOL)hasGuidanceLevel;
-(id)guidanceLevelAsString:(int)arg1 ;
-(int)StringAsGuidanceLevel:(id)arg1 ;
-(BOOL)shouldSuppressCellularDataAlerts;
-(void)setHasShouldSuppressCellularDataAlerts:(BOOL)arg1 ;
-(BOOL)hasShouldSuppressCellularDataAlerts;
-(int)guidanceLevelIgnoringTimeCriterion;
-(BOOL)hasNavigationType;
-(void)setHasGuidanceLevelIgnoringTimeCriterion:(BOOL)arg1 ;
-(BOOL)hasGuidanceLevelIgnoringTimeCriterion;
-(id)guidanceLevelIgnoringTimeCriterionAsString:(int)arg1 ;
-(int)StringAsGuidanceLevelIgnoringTimeCriterion:(id)arg1 ;
-(void)setHasNavigationType:(BOOL)arg1 ;
-(id)navigationTypeAsString:(int)arg1 ;
-(int)StringAsNavigationType:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setTrackedTransportType:(int)arg1 ;
-(id)initWithTransportType:(int)arg1 ;
-(id)initWithGuidanceLevel:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

