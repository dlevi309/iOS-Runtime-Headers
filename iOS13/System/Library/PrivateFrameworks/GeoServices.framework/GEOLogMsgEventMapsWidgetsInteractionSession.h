/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE92 _flags;

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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)duration;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDuration:(int)arg1 ;
-(int)endState;
-(void)setEndState:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setHasEndState:(BOOL)arg1 ;
-(BOOL)hasEndState;
-(id)endStateAsString:(int)arg1 ;
-(int)StringAsEndState:(id)arg1 ;
-(void)setMapsWidgetType:(int)arg1 ;
-(void)setLockedMode:(BOOL)arg1 ;
-(void)setLocalHour:(int)arg1 ;
-(void)setLocalDayOfWeek:(int)arg1 ;
-(void)setMapsNearbyWidget:(GEOMapsNearbyWidget *)arg1 ;
-(void)setMapsTransitWidget:(GEOMapsTransitWidget *)arg1 ;
-(void)setMapsDestinationsWidget:(GEOMapsDestinationsWidget *)arg1 ;
-(void)_readMapsDestinationsWidget;
-(void)_readMapsTransitWidget;
-(void)_readMapsNearbyWidget;
-(GEOMapsDestinationsWidget *)mapsDestinationsWidget;
-(GEOMapsTransitWidget *)mapsTransitWidget;
-(GEOMapsNearbyWidget *)mapsNearbyWidget;
-(int)mapsWidgetType;
-(void)setHasMapsWidgetType:(BOOL)arg1 ;
-(BOOL)hasMapsWidgetType;
-(id)mapsWidgetTypeAsString:(int)arg1 ;
-(int)StringAsMapsWidgetType:(id)arg1 ;
-(BOOL)hasMapsDestinationsWidget;
-(BOOL)hasMapsTransitWidget;
-(BOOL)hasMapsNearbyWidget;
-(BOOL)lockedMode;
-(void)setHasLockedMode:(BOOL)arg1 ;
-(BOOL)hasLockedMode;
-(int)localHour;
-(void)setHasLocalHour:(BOOL)arg1 ;
-(BOOL)hasLocalHour;
-(int)localDayOfWeek;
-(void)setHasLocalDayOfWeek:(BOOL)arg1 ;
-(BOOL)hasLocalDayOfWeek;
@end

