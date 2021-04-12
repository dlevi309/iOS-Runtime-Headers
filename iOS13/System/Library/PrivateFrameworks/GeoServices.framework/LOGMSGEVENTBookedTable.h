/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface LOGMSGEVENTBookedTable : PBCodable <NSCopying> {

	NSString* _appId;
	unsigned long long _muid;
	BOOL _bookedUsingMaps;
	BOOL _called;
	BOOL _cancelled;
	BOOL _isAsync;
	BOOL _routed;
	BOOL _shared;
	BOOL _tappedCancelReservation;
	BOOL _tappedChangeReservation;
	BOOL _tappedProactiveTrayItem;
	BOOL _viewedDetailsFromPlacecard;
	BOOL _viewedInPlacecard;
	BOOL _viewedInProactiveTray;
	struct {
		unsigned has_muid : 1;
		unsigned has_bookedUsingMaps : 1;
		unsigned has_called : 1;
		unsigned has_cancelled : 1;
		unsigned has_isAsync : 1;
		unsigned has_routed : 1;
		unsigned has_shared : 1;
		unsigned has_tappedCancelReservation : 1;
		unsigned has_tappedChangeReservation : 1;
		unsigned has_tappedProactiveTrayItem : 1;
		unsigned has_viewedDetailsFromPlacecard : 1;
		unsigned has_viewedInPlacecard : 1;
		unsigned has_viewedInProactiveTray : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasBookedUsingMaps; 
@property (assign,nonatomic) BOOL bookedUsingMaps; 
@property (assign,nonatomic) BOOL hasCancelled; 
@property (assign,nonatomic) BOOL cancelled; 
@property (assign,nonatomic) BOOL hasViewedInProactiveTray; 
@property (assign,nonatomic) BOOL viewedInProactiveTray; 
@property (assign,nonatomic) BOOL hasTappedProactiveTrayItem; 
@property (assign,nonatomic) BOOL tappedProactiveTrayItem; 
@property (assign,nonatomic) BOOL hasViewedInPlacecard; 
@property (assign,nonatomic) BOOL viewedInPlacecard; 
@property (assign,nonatomic) BOOL hasViewedDetailsFromPlacecard; 
@property (assign,nonatomic) BOOL viewedDetailsFromPlacecard; 
@property (assign,nonatomic) BOOL hasIsAsync; 
@property (assign,nonatomic) BOOL isAsync; 
@property (nonatomic,readonly) BOOL hasAppId; 
@property (nonatomic,retain) NSString * appId; 
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (assign,nonatomic) BOOL hasCalled; 
@property (assign,nonatomic) BOOL called; 
@property (assign,nonatomic) BOOL hasRouted; 
@property (assign,nonatomic) BOOL routed; 
@property (assign,nonatomic) BOOL hasTappedChangeReservation; 
@property (assign,nonatomic) BOOL tappedChangeReservation; 
@property (assign,nonatomic) BOOL hasTappedCancelReservation; 
@property (assign,nonatomic) BOOL tappedCancelReservation; 
@property (assign,nonatomic) BOOL hasShared; 
@property (assign,nonatomic) BOOL shared; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)cancelled;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
-(NSString *)appId;
-(BOOL)called;
-(void)setCalled:(BOOL)arg1 ;
-(BOOL)shared;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(unsigned long long)muid;
-(BOOL)bookedUsingMaps;
-(void)setBookedUsingMaps:(BOOL)arg1 ;
-(void)setHasBookedUsingMaps:(BOOL)arg1 ;
-(BOOL)hasBookedUsingMaps;
-(void)setHasCancelled:(BOOL)arg1 ;
-(BOOL)hasCancelled;
-(BOOL)viewedInProactiveTray;
-(void)setViewedInProactiveTray:(BOOL)arg1 ;
-(void)setHasViewedInProactiveTray:(BOOL)arg1 ;
-(BOOL)hasViewedInProactiveTray;
-(BOOL)tappedProactiveTrayItem;
-(void)setTappedProactiveTrayItem:(BOOL)arg1 ;
-(void)setHasTappedProactiveTrayItem:(BOOL)arg1 ;
-(BOOL)hasTappedProactiveTrayItem;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(void)setAppId:(NSString *)arg1 ;
-(BOOL)viewedInPlacecard;
-(void)setViewedInPlacecard:(BOOL)arg1 ;
-(void)setHasViewedInPlacecard:(BOOL)arg1 ;
-(BOOL)hasViewedInPlacecard;
-(BOOL)viewedDetailsFromPlacecard;
-(void)setViewedDetailsFromPlacecard:(BOOL)arg1 ;
-(void)setHasViewedDetailsFromPlacecard:(BOOL)arg1 ;
-(BOOL)hasViewedDetailsFromPlacecard;
-(BOOL)isAsync;
-(void)setIsAsync:(BOOL)arg1 ;
-(void)setHasIsAsync:(BOOL)arg1 ;
-(BOOL)hasIsAsync;
-(BOOL)hasAppId;
-(void)setHasCalled:(BOOL)arg1 ;
-(BOOL)hasCalled;
-(BOOL)routed;
-(void)setRouted:(BOOL)arg1 ;
-(void)setHasRouted:(BOOL)arg1 ;
-(BOOL)hasRouted;
-(BOOL)tappedChangeReservation;
-(void)setTappedChangeReservation:(BOOL)arg1 ;
-(void)setHasTappedChangeReservation:(BOOL)arg1 ;
-(BOOL)hasTappedChangeReservation;
-(BOOL)tappedCancelReservation;
-(void)setTappedCancelReservation:(BOOL)arg1 ;
-(void)setHasTappedCancelReservation:(BOOL)arg1 ;
-(BOOL)hasTappedCancelReservation;
-(void)setShared:(BOOL)arg1 ;
-(void)setHasShared:(BOOL)arg1 ;
-(BOOL)hasShared;
@end

