/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)fullDisplayStringWithTitle:(id)arg1 address:(id)arg2 ;
+(long long)routingModeEnumForCalRouteType:(id)arg1 ;
+(id)geoURLStringFromCoordinates:(id)arg1 ;
+(id)displayStringForAddress:(id)arg1 withoutTitle:(id)arg2 ;
+(id)coordinatesFromGeoURLString:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)address;
-(double)distanceFromLocation:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)displayName;
-(CLLocation *)location;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)typeString;
-(CLPlacemark *)placemark;
-(void)setLocation:(CLLocation *)arg1 ;
-(id)displayString;
-(void)setAddress:(NSString *)arg1 ;
-(NSString *)routeType;
-(void)setRouteType:(NSString *)arg1 ;
-(BOOL)isCurrentLocation;
-(void)setMapKitHandle:(NSData *)arg1 ;
-(NSData *)mapKitHandle;
-(void)setPlacemark:(CLPlacemark *)arg1 ;
-(NSString *)abURLString;
-(void)setAbURLString:(NSString *)arg1 ;
-(id)geoURLString;
-(id)fullTitleAndAddressString;
@end

