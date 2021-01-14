/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOComposedRouteTransitDisplayStrings.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, PBDataReader, PBUnknownFields, NSMutableArray, GEOFormattedString, NSString;

@interface GEOTransitRouteDisplayStrings : PBCodable <GEOComposedRouteTransitDisplayStrings, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _advisorys;
	GEOFormattedString* _badge;
	GEOFormattedString* _durationList;
	GEOFormattedString* _duration;
	GEOFormattedString* _planningDescription;
	GEOFormattedString* _travelDescription;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_advisorys : 1;
		unsigned read_badge : 1;
		unsigned read_durationList : 1;
		unsigned read_duration : 1;
		unsigned read_planningDescription : 1;
		unsigned read_travelDescription : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) id<GEOServerFormattedString> previewDurationFormatString; 
@property (nonatomic,readonly) id<GEOServerFormattedString> pickingDurationFormatString; 
@property (nonatomic,readonly) id<GEOServerFormattedString> planningDescriptionFormatString; 
@property (nonatomic,readonly) id<GEOServerFormattedString> transitDescriptionFormatString; 
@property (nonatomic,readonly) NSArray * transitAdvisories; 
@property (nonatomic,readonly) id<GEOServerFormattedString> transitRouteBadge; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasPlanningDescription; 
@property (nonatomic,retain) GEOFormattedString * planningDescription; 
@property (nonatomic,readonly) BOOL hasDuration; 
@property (nonatomic,retain) GEOFormattedString * duration; 
@property (nonatomic,readonly) BOOL hasDurationList; 
@property (nonatomic,retain) GEOFormattedString * durationList; 
@property (nonatomic,readonly) BOOL hasTravelDescription; 
@property (nonatomic,retain) GEOFormattedString * travelDescription; 
@property (nonatomic,retain) NSMutableArray * advisorys; 
@property (nonatomic,readonly) BOOL hasBadge; 
@property (nonatomic,retain) GEOFormattedString * badge; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)advisoryType;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(void)setDuration:(GEOFormattedString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)setBadge:(GEOFormattedString *)arg1 ;
-(GEOFormattedString *)badge;
-(BOOL)hasBadge;
-(void)mergeFrom:(id)arg1 ;
-(id<GEOServerFormattedString>)previewDurationFormatString;
-(id<GEOServerFormattedString>)pickingDurationFormatString;
-(id<GEOServerFormattedString>)planningDescriptionFormatString;
-(NSArray *)transitAdvisories;
-(id<GEOServerFormattedString>)transitDescriptionFormatString;
-(id<GEOServerFormattedString>)transitRouteBadge;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(NSMutableArray *)advisorys;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOFormattedString *)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOFormattedString *)planningDescription;
-(GEOFormattedString *)durationList;
-(GEOFormattedString *)travelDescription;
-(void)setPlanningDescription:(GEOFormattedString *)arg1 ;
-(void)setDurationList:(GEOFormattedString *)arg1 ;
-(void)setTravelDescription:(GEOFormattedString *)arg1 ;
-(void)addAdvisory:(id)arg1 ;
-(unsigned long long)advisorysCount;
-(void)clearAdvisorys;
-(id)advisoryAtIndex:(unsigned long long)arg1 ;
-(void)setAdvisorys:(NSMutableArray *)arg1 ;
-(BOOL)hasPlanningDescription;
-(BOOL)hasDurationList;
-(BOOL)hasTravelDescription;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

