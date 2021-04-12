/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilitiesCore.framework/FlightUtilitiesCore
*/

#import <FlightUtilitiesCore/FlightUtilitiesCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSTimeZone, CLPlacemark;

@interface FUAirport : NSObject <NSCopying, NSSecureCoding> {

	NSString* _IATACode;
	NSString* _name;
	NSString* _city;
	NSTimeZone* _timeZone;
	CLPlacemark* _placemark;
	CLLocationCoordinate2D _location;

}

@property (retain) NSString * IATACode;                          //@synthesize IATACode=_IATACode - In the implementation block
@property (retain) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (retain) NSString * city;                              //@synthesize city=_city - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;              //@synthesize timeZone=_timeZone - In the implementation block
@property (assign) CLLocationCoordinate2D location;              //@synthesize location=_location - In the implementation block
@property (retain) CLPlacemark * placemark;                      //@synthesize placemark=_placemark - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSTimeZone *)timeZone;
-(NSString *)city;
-(void)setCity:(NSString *)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(CLLocationCoordinate2D)location;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPlacemark:(CLPlacemark *)arg1 ;
-(void)setLocation:(CLLocationCoordinate2D)arg1 ;
-(NSString *)name;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(CLPlacemark *)placemark;
-(void)setName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)IATACode;
-(void)setIATACode:(NSString *)arg1 ;
-(void)fetchPlacemarkWithCompletionHandler:(/*^block*/id)arg1 ;
@end

