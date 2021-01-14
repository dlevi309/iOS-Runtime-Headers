/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
		unsigned wrote_anyField : 1;
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
-(id)dictionaryRepresentation;
-(void)setCancelled:(BOOL)arg1 ;
-(BOOL)cancelled;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)setBookedUsingMaps:(BOOL)arg1 ;
-(void)setViewedInProactiveTray:(BOOL)arg1 ;
-(void)setTappedProactiveTrayItem:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasCancelled;
-(BOOL)bookedUsingMaps;
-(BOOL)hasBookedUsingMaps;
-(void)setHasBookedUsingMaps:(BOOL)arg1 ;
-(void)setHasCancelled:(BOOL)arg1 ;
-(BOOL)viewedInProactiveTray;
-(void)setHasViewedInProactiveTray:(BOOL)arg1 ;
-(BOOL)hasViewedInProactiveTray;
-(BOOL)tappedProactiveTrayItem;
-(void)setHasTappedProactiveTrayItem:(BOOL)arg1 ;
-(BOOL)hasTappedProactiveTrayItem;
-(id)description;
-(unsigned long long)hash;
-(void)setStatusIssue:(int)arg1 ;
-(void)setRideAppId:(NSString *)arg1 ;
-(void)setRideAppVersion:(NSString *)arg1 ;
-(NSMutableArray *)intentResponseFailures;
-(void)setIntentResponseFailures:(NSMutableArray *)arg1 ;
-(void)setViewedDetails:(BOOL)arg1 ;
-(void)setRideBookedSessionId:(NSString *)arg1 ;
-(void)setContactedDriver:(BOOL)arg1 ;
-(void)setInvalidVehicleLocation:(BOOL)arg1 ;
-(void)setMissingVehicleLocation:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)rideAppId;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)rideBookedSessionId;
-(NSString *)rideAppVersion;
-(void)addIntentResponseFailure:(id)arg1 ;
-(BOOL)contactedDriver;
-(unsigned long long)intentResponseFailuresCount;
-(void)clearIntentResponseFailures;
-(id)intentResponseFailureAtIndex:(unsigned long long)arg1 ;
-(void)setHasContactedDriver:(BOOL)arg1 ;
-(BOOL)hasContactedDriver;
-(BOOL)viewedDetails;
-(void)setHasViewedDetails:(BOOL)arg1 ;
-(BOOL)hasViewedDetails;
-(BOOL)hasRideAppId;
-(BOOL)hasRideBookedSessionId;
-(BOOL)hasRideAppVersion;
-(BOOL)invalidVehicleLocation;
-(void)setHasInvalidVehicleLocation:(BOOL)arg1 ;
-(BOOL)hasInvalidVehicleLocation;
-(int)statusIssue;
-(BOOL)missingVehicleLocation;
-(void)setHasMissingVehicleLocation:(BOOL)arg1 ;
-(BOOL)hasMissingVehicleLocation;
-(void)setHasStatusIssue:(BOOL)arg1 ;
-(BOOL)hasStatusIssue;
-(id)statusIssueAsString:(int)arg1 ;
-(int)StringAsStatusIssue:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

