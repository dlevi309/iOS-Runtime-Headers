/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, RTLocation, NSString, NSUUID, NSData, RTMapItem, RTLocationOfInterest;

@interface RTVehicleEvent : NSObject <NSCopying, NSSecureCoding> {

	BOOL _userSetLocation;
	BOOL _usualLocation;
	BOOL _confirmed;
	BOOL _locationFinalized;
	NSDate* _date;
	RTLocation* _location;
	NSString* _vehicleIdentifier;
	NSString* _notes;
	NSUUID* _identifier;
	NSData* _photo;
	RTMapItem* _mapItem;
	unsigned long long _locationQuality;
	RTLocationOfInterest* _nearbyLocationOfInterest;

}

@property (nonatomic,copy) NSDate * date;                                                //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) RTLocation * location;                                        //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * vehicleIdentifier;                                 //@synthesize vehicleIdentifier=_vehicleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL userSetLocation;                                       //@synthesize userSetLocation=_userSetLocation - In the implementation block
@property (nonatomic,copy) NSString * notes;                                             //@synthesize notes=_notes - In the implementation block
@property (nonatomic,copy) NSUUID * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSData * photo;                                             //@synthesize photo=_photo - In the implementation block
@property (nonatomic,retain) RTMapItem * mapItem;                                        //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic) unsigned long long locationQuality;                         //@synthesize locationQuality=_locationQuality - In the implementation block
@property (assign,nonatomic) BOOL usualLocation;                                         //@synthesize usualLocation=_usualLocation - In the implementation block
@property (nonatomic,copy) RTLocationOfInterest * nearbyLocationOfInterest;              //@synthesize nearbyLocationOfInterest=_nearbyLocationOfInterest - In the implementation block
@property (assign,nonatomic) BOOL confirmed;                                             //@synthesize confirmed=_confirmed - In the implementation block
@property (assign,nonatomic) BOOL locationFinalized;                                     //@synthesize locationFinalized=_locationFinalized - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(id)initWithDate:(id)arg1 ;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(RTLocation *)location;
-(void)setDate:(NSDate *)arg1 ;
-(void)setLocation:(RTLocation *)arg1 ;
-(void)setMapItem:(RTMapItem *)arg1 ;
-(RTMapItem *)mapItem;
-(NSData *)photo;
-(void)setPhoto:(NSData *)arg1 ;
-(NSString *)vehicleIdentifier;
-(BOOL)confirmed;
-(void)setConfirmed:(BOOL)arg1 ;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(id)initWithDate:(id)arg1 location:(id)arg2 vehicleIdentifier:(id)arg3 userSetLocation:(BOOL)arg4 notes:(id)arg5 identifier:(id)arg6 photo:(id)arg7 mapItem:(id)arg8 confirmed:(BOOL)arg9 ;
-(BOOL)userSetLocation;
-(unsigned long long)locationQuality;
-(BOOL)usualLocation;
-(BOOL)locationFinalized;
-(RTLocationOfInterest *)nearbyLocationOfInterest;
-(void)setVehicleIdentifier:(NSString *)arg1 ;
-(void)setUserSetLocation:(BOOL)arg1 ;
-(void)setLocationQuality:(unsigned long long)arg1 ;
-(void)setUsualLocation:(BOOL)arg1 ;
-(void)setNearbyLocationOfInterest:(RTLocationOfInterest *)arg1 ;
-(void)setLocationFinalized:(BOOL)arg1 ;
@end

