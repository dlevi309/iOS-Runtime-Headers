/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_countStopsText : 1;
		unsigned wrote_departureBar : 1;
		unsigned wrote_drivingWalkingListInstruction : 1;
		unsigned wrote_drivingWalkingSignInstruction : 1;
		unsigned wrote_drivingWalkingSpokenInstruction : 1;
		unsigned wrote_genericInstruction : 1;
		unsigned wrote_transitListInstruction : 1;
		unsigned wrote_transitSignInstruction : 1;
		unsigned wrote_departureBarStyle : 1;
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEODrivingWalkingInstruction *)drivingWalkingListInstruction;
-(GEODrivingWalkingInstruction *)drivingWalkingSignInstruction;
-(GEODrivingWalkingSpokenInstruction *)drivingWalkingSpokenInstruction;
-(void)_readTransitSignInstruction;
-(void)_readTransitListInstruction;
-(void)_readGenericInstruction;
-(void)_readDepartureBar;
-(void)_readCountStopsText;
-(void)_readDrivingWalkingSignInstruction;
-(void)_readDrivingWalkingListInstruction;
-(void)_readDrivingWalkingSpokenInstruction;
-(GEOTransitSignInstruction *)transitSignInstruction;
-(GEOTransitListInstruction *)transitListInstruction;
-(GEOGenericInstruction *)genericInstruction;
-(GEOFormattedString *)departureBar;
-(GEOFormattedString *)countStopsText;
-(void)setTransitSignInstruction:(GEOTransitSignInstruction *)arg1 ;
-(void)setTransitListInstruction:(GEOTransitListInstruction *)arg1 ;
-(void)setGenericInstruction:(GEOGenericInstruction *)arg1 ;
-(void)setDepartureBar:(GEOFormattedString *)arg1 ;
-(void)setCountStopsText:(GEOFormattedString *)arg1 ;
-(void)setDrivingWalkingSignInstruction:(GEODrivingWalkingInstruction *)arg1 ;
-(void)setDrivingWalkingListInstruction:(GEODrivingWalkingInstruction *)arg1 ;
-(void)setDrivingWalkingSpokenInstruction:(GEODrivingWalkingSpokenInstruction *)arg1 ;
-(BOOL)hasTransitSignInstruction;
-(BOOL)hasTransitListInstruction;
-(BOOL)hasGenericInstruction;
-(BOOL)hasDepartureBar;
-(int)departureBarStyle;
-(void)setDepartureBarStyle:(int)arg1 ;
-(void)setHasDepartureBarStyle:(BOOL)arg1 ;
-(BOOL)hasDepartureBarStyle;
-(id)departureBarStyleAsString:(int)arg1 ;
-(int)StringAsDepartureBarStyle:(id)arg1 ;
-(BOOL)hasCountStopsText;
-(BOOL)hasDrivingWalkingSignInstruction;
-(BOOL)hasDrivingWalkingListInstruction;
-(BOOL)hasDrivingWalkingSpokenInstruction;
-(id<GEOServerFormattedString>)departureBarFormattedString;
-(long long)departureBarFormatStyle;
-(id<GEOServerFormattedString>)countStopsFormattedString;
-(id<GEOServerFormattedString>)expandableListFormattedString;
-(id<GEOServerFormattedString>)primaryTimeFormattedString;
-(id<GEOServerFormattedString>)secondaryTimeFormattedString;
-(BOOL)hideTimeInstructionsIfCollapsed;
-(void)_transit_prepareForDeepMergeFrom:(id)arg1 ;
@end

