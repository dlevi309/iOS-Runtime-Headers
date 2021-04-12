/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_CLLSLLocationCoordinate *)coordinate;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(double)altitude;
-(void)setAltitude:(double)arg1 ;
-(id)initWithCoordinate:(id)arg1 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 ;
-(id)initWithCoordinate:(id)arg1 altitude:(double)arg2 timetamp:(double)arg3 ;
-(id)descriptionWithMemberIndent:(id)arg1 endIndent:(id)arg2 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 altitude:(double)arg3 timetamp:(double)arg4 ;
-(void)setCoordinate:(_CLLSLLocationCoordinate *)arg1 ;
@end

