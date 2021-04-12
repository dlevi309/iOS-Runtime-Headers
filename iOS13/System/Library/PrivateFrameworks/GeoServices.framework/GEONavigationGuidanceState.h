/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEONavigationGuidanceState : PBCodable <NSCopying> {

	int _guidanceLevelIgnoringTimeCriterion;
	int _guidanceLevel;
	int _navigationState;
	int _trackedTransportType;
	BOOL _shouldSuppressCellularDataAlerts;
	struct {
		unsigned has_guidanceLevelIgnoringTimeCriterion : 1;
		unsigned has_guidanceLevel : 1;
		unsigned has_navigationState : 1;
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
-(void)readAll:(BOOL)arg1 ;
-(int)navigationState;
-(void)setNavigationState:(int)arg1 ;
-(int)trackedTransportType;
-(void)setTrackedTransportType:(int)arg1 ;
-(void)setHasTrackedTransportType:(BOOL)arg1 ;
-(BOOL)hasTrackedTransportType;
-(id)trackedTransportTypeAsString:(int)arg1 ;
-(int)StringAsTrackedTransportType:(id)arg1 ;
-(void)setHasNavigationState:(BOOL)arg1 ;
-(BOOL)hasNavigationState;
-(id)navigationStateAsString:(int)arg1 ;
-(int)StringAsNavigationState:(id)arg1 ;
-(int)guidanceLevel;
-(void)setGuidanceLevel:(int)arg1 ;
-(void)setHasGuidanceLevel:(BOOL)arg1 ;
-(BOOL)hasGuidanceLevel;
-(id)guidanceLevelAsString:(int)arg1 ;
-(int)StringAsGuidanceLevel:(id)arg1 ;
-(BOOL)shouldSuppressCellularDataAlerts;
-(void)setShouldSuppressCellularDataAlerts:(BOOL)arg1 ;
-(void)setHasShouldSuppressCellularDataAlerts:(BOOL)arg1 ;
-(BOOL)hasShouldSuppressCellularDataAlerts;
-(int)guidanceLevelIgnoringTimeCriterion;
-(void)setGuidanceLevelIgnoringTimeCriterion:(int)arg1 ;
-(void)setHasGuidanceLevelIgnoringTimeCriterion:(BOOL)arg1 ;
-(BOOL)hasGuidanceLevelIgnoringTimeCriterion;
-(id)guidanceLevelIgnoringTimeCriterionAsString:(int)arg1 ;
-(int)StringAsGuidanceLevelIgnoringTimeCriterion:(id)arg1 ;
-(id)initWithTransportType:(int)arg1 ;
-(id)initWithGuidanceLevel:(int)arg1 ;
@end

