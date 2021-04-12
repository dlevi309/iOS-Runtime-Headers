/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSUUID, CLLocation, CLSLitePlacemark, CLCircularRegion, NSArray;

@interface CLSLocationOfInterest : NSObject <NSSecureCoding> {

	NSMutableArray* _visits;
	NSUUID* _identifier;
	long long _type;
	CLLocation* _location;
	CLSLitePlacemark* _placemark;
	CLCircularRegion* _placemarkRegion;
	double _radius;
	unsigned long long _businessItemMuid;

}

@property (nonatomic,readonly) NSUUID * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) CLLocation * location;                            //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) CLCircularRegion * placemarkRegion;               //@synthesize placemarkRegion=_placemarkRegion - In the implementation block
@property (nonatomic,readonly) CLSLitePlacemark * placemark;                     //@synthesize placemark=_placemark - In the implementation block
@property (nonatomic,readonly) unsigned long long businessItemMuid;              //@synthesize businessItemMuid=_businessItemMuid - In the implementation block
@property (nonatomic,readonly) double radius;                                    //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) NSArray * visits;                                 //@synthesize visits=_visits - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)addVisit:(id)arg1 ;
-(CLLocation *)location;
-(void)encodeWithCoder:(id)arg1 ;
-(double)radius;
-(id)description;
-(long long)type;
-(unsigned long long)hash;
-(NSArray *)visits;
-(id)initWithCoder:(id)arg1 ;
-(CLSLitePlacemark *)placemark;
-(void)removeVisit:(id)arg1 ;
-(NSUUID *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)businessItemMuid;
-(CLCircularRegion *)placemarkRegion;
-(id)initWithIdentifier:(id)arg1 locationOfInterestType:(long long)arg2 location:(id)arg3 placemarkRegion:(id)arg4 businessItemMuid:(unsigned long long)arg5 radius:(double)arg6 ;
-(double)placemarkLocationDistanceFromLocation:(id)arg1 ;
@end

