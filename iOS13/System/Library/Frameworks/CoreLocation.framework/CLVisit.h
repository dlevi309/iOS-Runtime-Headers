/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface CLVisit : NSObject <NSSecureCoding, NSCopying> {

	NSDate* _arrivalDate;
	NSDate* _departureDate;
	double _horizontalAccuracy;
	NSDate* _detectionDate;
	CLLocationCoordinate2D _coordinate;

}

@property (nonatomic,readonly) BOOL hasArrivalDate; 
@property (nonatomic,readonly) BOOL hasDepartureDate; 
@property (nonatomic,copy,readonly) NSDate * detectionDate;                    //@synthesize detectionDate=_detectionDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * arrivalDate;                      //@synthesize arrivalDate=_arrivalDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * departureDate;                    //@synthesize departureDate=_departureDate - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) double horizontalAccuracy;                      //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 horizontalAccuracy:(double)arg2 arrivalDate:(id)arg3 departureDate:(id)arg4 detectionDate:(id)arg5 ;
-(double)horizontalAccuracy;
-(NSDate *)arrivalDate;
-(NSDate *)departureDate;
-(NSDate *)detectionDate;
-(BOOL)hasArrivalDate;
-(BOOL)hasDepartureDate;
@end

