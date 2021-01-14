/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOMapsDestinationsWidget, GEOMapsNearbyWidget, GEOMapsTransitWidget;

@interface GEOLogMsgEventMapsWidgetsInteractionSession : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOMapsDestinationsWidget* _mapsDestinationsWidget;
	GEOMapsNearbyWidget* _mapsNearbyWidget;
	GEOMapsTransitWidget* _mapsTransitWidget;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _duration;
	int _endState;
	int _localDayOfWeek;
	int _localHour;
	int _mapsWidgetType;
	BOOL _lockedMode;
	struct {
		unsigned has_duration : 1;
		unsigned has_endState : 1;
		unsigned has_localDayOfWeek : 1;
		unsigned has_localHour : 1;
		unsigned has_mapsWidgetType : 1;
		unsigned has_lockedMode : 1;
		unsigned read_mapsDestinationsWidget : 1;
		unsigned read_mapsNearbyWidget : 1;
		unsigned read_mapsTransitWidget : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasMapsWidgetType; 
@property (assign,nonatomic) int mapsWidgetType; 
@property (assign,nonatomic) BOOL hasEndState; 
@property (assign,nonatomic) int endState; 
@property (nonatomic,readonly) BOOL hasMapsDestinationsWidget; 
@property (nonatomic,retain) GEOMapsDestinationsWidget * mapsDestinationsWidget; 
@property (nonatomic,readonly) BOOL hasMapsTransitWidget; 
@property (nonatomic,retain) GEOMapsTransitWidget * mapsTransitWidget; 
@property (nonatomic,readonly) BOOL hasMapsNearbyWidget; 
@property (nonatomic,retain) GEOMapsNearbyWidget * mapsNearbyWidget; 
@property (assign,nonatomic) BOOL hasLockedMode; 
@property (assign,nonatomic) BOOL lockedMode; 
@property (assign,nonatomic) BOOL hasLocalHour; 
@property (assign,nonatomic) int localHour; 
@property (assign,nonatomic) BOOL hasLocalDayOfWeek; 
@property (assign,nonatomic) int localDayOfWeek; 
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) int duration; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(int)endState;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(int)localHour;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasEndState;
-(GEOMapsDestinationsWidget *)mapsDestinationsWidget;
-(void)setLocalHour:(int)arg1 ;
-(GEOMapsTransitWidget *)mapsTransitWidget;
-(GEOMapsNearbyWidget *)mapsNearbyWidget;
-(void)setMapsWidgetType:(int)arg1 ;
-(void)setMapsDestinationsWidget:(GEOMapsDestinationsWidget *)arg1 ;
-(void)setMapsTransitWidget:(GEOMapsTransitWidget *)arg1 ;
-(void)setMapsNearbyWidget:(GEOMapsNearbyWidget *)arg1 ;
-(void)setLockedMode:(BOOL)arg1 ;
-(void)setLocalDayOfWeek:(int)arg1 ;
-(int)mapsWidgetType;
-(void)setHasMapsWidgetType:(BOOL)arg1 ;
-(BOOL)hasMapsWidgetType;
-(id)mapsWidgetTypeAsString:(int)arg1 ;
-(int)StringAsMapsWidgetType:(id)arg1 ;
-(void)setHasEndState:(BOOL)arg1 ;
-(id)endStateAsString:(int)arg1 ;
-(int)StringAsEndState:(id)arg1 ;
-(BOOL)lockedMode;
-(BOOL)hasMapsDestinationsWidget;
-(BOOL)hasMapsTransitWidget;
-(BOOL)hasMapsNearbyWidget;
-(void)setHasLockedMode:(BOOL)arg1 ;
-(BOOL)hasLockedMode;
-(void)setHasLocalHour:(BOOL)arg1 ;
-(BOOL)hasLocalHour;
-(int)localDayOfWeek;
-(void)setHasLocalDayOfWeek:(BOOL)arg1 ;
-(BOOL)hasLocalDayOfWeek;
-(int)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEndState:(int)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

