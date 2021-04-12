/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/

#import <CalendarFoundation/CalendarFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLLocation, NSString, CLPlacemark, NSData;

@interface CalLocation : NSObject <NSSecureCoding> {

	CLLocation* _location;
	NSString* _address;
	NSString* _title;
	NSString* _displayName;
	NSString* _abURLString;
	CLPlacemark* _placemark;
	NSData* _mapKitHandle;
	BOOL _isCurrentLocation;
	double _radius;
	NSString* _routeType;
	int _type;

}

@property (nonatomic,copy) CLLocation * location; 
@property (copy) NSString * address;                                //@synthesize address=_address - In the implementation block
@property (copy) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (copy) NSString * displayName;                            //@synthesize displayName=_displayName - In the implementation block
@property (copy) NSString * abURLString;                            //@synthesize abURLString=_abURLString - In the implementation block
@property (copy) NSString * routeType;                              //@synthesize routeType=_routeType - In the implementation block
@property (copy) NSData * mapKitHandle;                             //@synthesize mapKitHandle=_mapKitHandle - In the implementation block
@property (retain) CLPlacemark * placemark;                         //@synthesize placemark=_placemark - In the implementation block
@property (nonatomic,readonly) BOOL isCurrentLocation; 
@property (assign) int type;                                        //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double radius;                         //@synthesize radius=_radius - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)routeTypeStringForCalLocationRoutingMode:(long long)arg1 ;
+(id)geoURLStringFromCoordinates:(id)arg1 ;
+(id)coordinatesFromGeoURLString:(id)arg1 ;
+(id)fullDisplayStringWithTitle:(id)arg1 address:(id)arg2 ;
+(long long)routingModeEnumForCalRouteType:(id)arg1 ;
+(id)displayStringForAddress:(id)arg1 withoutTitle:(id)arg2 ;
-(id)typeString;
-(void)setRadius:(double)arg1 ;
-(id)displayString;
-(NSString *)routeType;
-(NSData *)mapKitHandle;
-(void)setRouteType:(NSString *)arg1 ;
-(double)distanceFromLocation:(id)arg1 ;
-(CLLocation *)location;
-(NSString *)abURLString;
-(void)setAbURLString:(NSString *)arg1 ;
-(id)fullTitleAndAddressString;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setType:(int)arg1 ;
-(void)setPlacemark:(CLPlacemark *)arg1 ;
-(id)geoURLString;
-(void)setLocation:(CLLocation *)arg1 ;
-(double)radius;
-(id)description;
-(NSString *)address;
-(void)setAddress:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(BOOL)isCurrentLocation;
-(int)type;
-(id)initWithCoder:(id)arg1 ;
-(CLPlacemark *)placemark;
-(void)setMapKitHandle:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

