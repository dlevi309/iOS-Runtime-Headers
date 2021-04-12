/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOComposedRouteStepTransitInstructionMerging.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOFormattedString, GEODrivingWalkingInstruction, GEODrivingWalkingSpokenInstruction, GEOGenericInstruction, GEOTransitListInstruction, GEOTransitSignInstruction, NSString;

@interface GEOInstructionSet : PBCodable <GEOComposedRouteStepTransitInstructionMerging, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOFormattedString* _countStopsText;
	GEOFormattedString* _departureBar;
	GEODrivingWalkingInstruction* _drivingWalkingListInstruction;
	GEODrivingWalkingInstruction* _drivingWalkingSignInstruction;
	GEODrivingWalkingSpokenInstruction* _drivingWalkingSpokenInstruction;
	GEOGenericInstruction* _genericInstruction;
	GEOTransitListInstruction* _transitListInstruction;
	GEOTransitSignInstruction* _transitSignInstruction;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _departureBarStyle;
	struct {
		unsigned has_departureBarStyle : 1;
		unsigned read_unknownFields : 1;
		unsigned read_countStopsText : 1;
		unsigned read_departureBar : 1;
		unsigned read_drivingWalkingListInstruction : 1;
		unsigned read_drivingWalkingSignInstruction : 1;
		unsigned read_drivingWalkingSpokenInstruction : 1;
		unsigned read_genericInstruction : 1;
		unsigned read_transitListInstruction : 1;
		unsigned read_transitSignInstruction : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) id<GEOServerFormattedString> departureBarFormattedString; 
@property (nonatomic,readonly) long long departureBarFormatStyle; 
@property (nonatomic,readonly) id<GEOServerFormattedString> countStopsFormattedString; 
@property (nonatomic,readonly) id<GEOServerFormattedString> expandableListFormattedString; 
@property (nonatomic,readonly) id<GEOServerFormattedString> primaryTimeFormattedString; 
@property (nonatomic,readonly) id<GEOServerFormattedString> secondaryTimeFormattedString; 
@property (nonatomic,readonly) BOOL hideTimeInstructionsIfCollapsed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasTransitSignInstruction; 
@property (nonatomic,retain) GEOTransitSignInstruction * transitSignInstruction; 
@property (nonatomic,readonly) BOOL hasTransitListInstruction; 
@property (nonatomic,retain) GEOTransitListInstruction * transitListInstruction; 
@property (nonatomic,readonly) BOOL hasGenericInstruction; 
@property (nonatomic,retain) GEOGenericInstruction * genericInstruction; 
@property (nonatomic,readonly) BOOL hasDepartureBar; 
@property (nonatomic,retain) GEOFormattedString * departureBar; 
@property (assign,nonatomic) BOOL hasDepartureBarStyle; 
@property (assign,nonatomic) int departureBarStyle; 
@property (nonatomic,readonly) BOOL hasCountStopsText; 
@property (nonatomic,retain) GEOFormattedString * countStopsText; 
@property (nonatomic,readonly) BOOL hasDrivingWalkingSignInstruction; 
@property (nonatomic,retain) GEODrivingWalkingInstruction * drivingWalkingSignInstruction; 
@property (nonatomic,readonly) BOOL hasDrivingWalkingListInstruction; 
@property (nonatomic,retain) GEODrivingWalkingInstruction * drivingWalkingListInstruction; 
@property (nonatomic,readonly) BOOL hasDrivingWalkingSpokenInstruction; 
@property (nonatomic,retain) GEODrivingWalkingSpokenInstruction * drivingWalkingSpokenInstruction; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(GEOFormattedString *)departureBar;
-(GEOTransitSignInstruction *)transitSignInstruction;
-(GEOTransitListInstruction *)transitListInstruction;
-(GEOGenericInstruction *)genericInstruction;
-(GEOFormattedString *)countStopsText;
-(GEODrivingWalkingInstruction *)drivingWalkingSignInstruction;
-(void)setGenericInstruction:(GEOGenericInstruction *)arg1 ;
-(GEODrivingWalkingInstruction *)drivingWalkingListInstruction;
-(GEODrivingWalkingSpokenInstruction *)drivingWalkingSpokenInstruction;
-(void)setTransitSignInstruction:(GEOTransitSignInstruction *)arg1 ;
-(void)setTransitListInstruction:(GEOTransitListInstruction *)arg1 ;
-(void)setDepartureBar:(GEOFormattedString *)arg1 ;
-(void)setDepartureBarStyle:(int)arg1 ;
-(void)setCountStopsText:(GEOFormattedString *)arg1 ;
-(void)setDrivingWalkingSignInstruction:(GEODrivingWalkingInstruction *)arg1 ;
-(void)setDrivingWalkingListInstruction:(GEODrivingWalkingInstruction *)arg1 ;
-(BOOL)hasGenericInstruction;
-(void)setDrivingWalkingSpokenInstruction:(GEODrivingWalkingSpokenInstruction *)arg1 ;
-(BOOL)hasTransitSignInstruction;
-(BOOL)hasTransitListInstruction;
-(BOOL)hasDepartureBar;
-(int)departureBarStyle;
-(void)setHasDepartureBarStyle:(BOOL)arg1 ;
-(BOOL)hasDepartureBarStyle;
-(id)departureBarStyleAsString:(int)arg1 ;
-(int)StringAsDepartureBarStyle:(id)arg1 ;
-(BOOL)hasCountStopsText;
-(BOOL)hasDrivingWalkingSignInstruction;
-(BOOL)hasDrivingWalkingListInstruction;
-(BOOL)hasDrivingWalkingSpokenInstruction;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)_transit_prepareForDeepMergeFrom:(id)arg1 ;
-(long long)departureBarFormatStyle;
-(id<GEOServerFormattedString>)departureBarFormattedString;
-(id<GEOServerFormattedString>)countStopsFormattedString;
-(id<GEOServerFormattedString>)expandableListFormattedString;
-(id<GEOServerFormattedString>)primaryTimeFormattedString;
-(id<GEOServerFormattedString>)secondaryTimeFormattedString;
-(BOOL)hideTimeInstructionsIfCollapsed;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

