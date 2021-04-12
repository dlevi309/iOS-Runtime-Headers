/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSString;

@interface LOGMSGEVENTLogMsgEventRideBookedSession : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _intentResponseFailures;
	NSString* _rideAppId;
	NSString* _rideAppVersion;
	NSString* _rideBookedSessionId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _statusIssue;
	BOOL _bookedUsingMaps;
	BOOL _cancelled;
	BOOL _contactedDriver;
	BOOL _invalidVehicleLocation;
	BOOL _missingVehicleLocation;
	BOOL _tappedProactiveTrayItem;
	BOOL _viewedDetails;
	BOOL _viewedInProactiveTray;
	struct {
		unsigned has_statusIssue : 1;
		unsigned has_bookedUsingMaps : 1;
		unsigned has_cancelled : 1;
		unsigned has_contactedDriver : 1;
		unsigned has_invalidVehicleLocation : 1;
		unsigned has_missingVehicleLocation : 1;
		unsigned has_tappedProactiveTrayItem : 1;
		unsigned has_viewedDetails : 1;
		unsigned has_viewedInProactiveTray : 1;
		unsigned read_intentResponseFailures : 1;
		unsigned read_rideAppId : 1;
		unsigned read_rideAppVersion : 1;
		unsigned read_rideBookedSessionId : 1;
		unsigned wrote_intentResponseFailures : 1;
		unsigned wrote_rideAppId : 1;
		unsigned wrote_rideAppVersion : 1;
		unsigned wrote_rideBookedSessionId : 1;
		unsigned wrote_statusIssue : 1;
		unsigned wrote_bookedUsingMaps : 1;
		unsigned wrote_cancelled : 1;
		unsigned wrote_contactedDriver : 1;
		unsigned wrote_invalidVehicleLocation : 1;
		unsigned wrote_missingVehicleLocation : 1;
		unsigned wrote_tappedProactiveTrayItem : 1;
		unsigned wrote_viewedDetails : 1;
		unsigned wrote_viewedInProactiveTray : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasBookedUsingMaps; 
@property (assign,nonatomic) BOOL bookedUsingMaps; 
@property (assign,nonatomic) BOOL hasCancelled; 
@property (assign,nonatomic) BOOL cancelled; 
@property (assign,nonatomic) BOOL hasContactedDriver; 
@property (assign,nonatomic) BOOL contactedDriver; 
@property (assign,nonatomic) BOOL hasViewedInProactiveTray; 
@property (assign,nonatomic) BOOL viewedInProactiveTray; 
@property (assign,nonatomic) BOOL hasTappedProactiveTrayItem; 
@property (assign,nonatomic) BOOL tappedProactiveTrayItem; 
@property (assign,nonatomic) BOOL hasViewedDetails; 
@property (assign,nonatomic) BOOL viewedDetails; 
@property (nonatomic,readonly) BOOL hasRideAppId; 
@property (nonatomic,retain) NSString * rideAppId; 
@property (nonatomic,readonly) BOOL hasRideBookedSessionId; 
@property (nonatomic,retain) NSString * rideBookedSessionId; 
@property (nonatomic,readonly) BOOL hasRideAppVersion; 
@property (nonatomic,retain) NSString * rideAppVersion; 
@property (assign,nonatomic) BOOL hasInvalidVehicleLocation; 
@property (assign,nonatomic) BOOL invalidVehicleLocation; 
@property (assign,nonatomic) BOOL hasMissingVehicleLocation; 
@property (assign,nonatomic) BOOL missingVehicleLocation; 
@property (assign,nonatomic) BOOL hasStatusIssue; 
@property (assign,nonatomic) int statusIssue; 
@property (nonatomic,retain) NSMutableArray * intentResponseFailures; 
+(BOOL)isValid:(id)arg1 ;
+(Class)intentResponseFailureType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)cancelled;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)_readRideAppId;
-(void)_readRideBookedSessionId;
-(void)_readRideAppVersion;
-(void)_readIntentResponseFailures;
-(void)_addNoFlagsIntentResponseFailure:(id)arg1 ;
-(NSString *)rideAppId;
-(NSString *)rideBookedSessionId;
-(NSString *)rideAppVersion;
-(void)setRideAppId:(NSString *)arg1 ;
-(void)setRideBookedSessionId:(NSString *)arg1 ;
-(void)setRideAppVersion:(NSString *)arg1 ;
-(unsigned long long)intentResponseFailuresCount;
-(void)clearIntentResponseFailures;
-(id)intentResponseFailureAtIndex:(unsigned long long)arg1 ;
-(void)addIntentResponseFailure:(id)arg1 ;
-(BOOL)bookedUsingMaps;
-(void)setBookedUsingMaps:(BOOL)arg1 ;
-(void)setHasBookedUsingMaps:(BOOL)arg1 ;
-(BOOL)hasBookedUsingMaps;
-(void)setHasCancelled:(BOOL)arg1 ;
-(BOOL)hasCancelled;
-(BOOL)contactedDriver;
-(void)setContactedDriver:(BOOL)arg1 ;
-(void)setHasContactedDriver:(BOOL)arg1 ;
-(BOOL)hasContactedDriver;
-(BOOL)viewedInProactiveTray;
-(void)setViewedInProactiveTray:(BOOL)arg1 ;
-(void)setHasViewedInProactiveTray:(BOOL)arg1 ;
-(BOOL)hasViewedInProactiveTray;
-(BOOL)tappedProactiveTrayItem;
-(void)setTappedProactiveTrayItem:(BOOL)arg1 ;
-(void)setHasTappedProactiveTrayItem:(BOOL)arg1 ;
-(BOOL)hasTappedProactiveTrayItem;
-(BOOL)viewedDetails;
-(void)setViewedDetails:(BOOL)arg1 ;
-(void)setHasViewedDetails:(BOOL)arg1 ;
-(BOOL)hasViewedDetails;
-(BOOL)hasRideAppId;
-(BOOL)hasRideBookedSessionId;
-(BOOL)hasRideAppVersion;
-(BOOL)invalidVehicleLocation;
-(void)setInvalidVehicleLocation:(BOOL)arg1 ;
-(void)setHasInvalidVehicleLocation:(BOOL)arg1 ;
-(BOOL)hasInvalidVehicleLocation;
-(BOOL)missingVehicleLocation;
-(void)setMissingVehicleLocation:(BOOL)arg1 ;
-(void)setHasMissingVehicleLocation:(BOOL)arg1 ;
-(BOOL)hasMissingVehicleLocation;
-(int)statusIssue;
-(void)setStatusIssue:(int)arg1 ;
-(void)setHasStatusIssue:(BOOL)arg1 ;
-(BOOL)hasStatusIssue;
-(id)statusIssueAsString:(int)arg1 ;
-(int)StringAsStatusIssue:(id)arg1 ;
-(NSMutableArray *)intentResponseFailures;
-(void)setIntentResponseFailures:(NSMutableArray *)arg1 ;
@end

