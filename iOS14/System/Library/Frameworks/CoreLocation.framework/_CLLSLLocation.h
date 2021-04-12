/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _CLLSLLocationCoordinate;

@interface _CLLSLLocation : NSObject <NSCopying, NSSecureCoding> {

	_CLLSLLocationCoordinate* _coordinate;
	double _altitude;
	double _timestamp;

}

@property (nonatomic,copy) _CLLSLLocationCoordinate * coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) double altitude;                                  //@synthesize altitude=_altitude - In the implementation block
@property (assign,nonatomic) double timestamp;                                 //@synthesize timestamp=_timestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setAltitude:(double)arg1 ;
-(double)altitude;
-(_CLLSLLocationCoordinate *)coordinate;
-(double)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(id)descriptionWithMemberIndent:(id)arg1 endIndent:(id)arg2 ;
-(id)description;
-(void)setCoordinate:(_CLLSLLocationCoordinate *)arg1 ;
-(id)initWithCoordinate:(id)arg1 altitude:(double)arg2 timetamp:(double)arg3 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 altitude:(double)arg3 timetamp:(double)arg4 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCoordinate:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)dealloc;
@end

