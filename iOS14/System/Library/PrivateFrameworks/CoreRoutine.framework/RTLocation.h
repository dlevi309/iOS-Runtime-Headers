/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface RTLocation : NSObject <NSCopying, NSSecureCoding> {

	int _referenceFrame;
	double _latitude;
	double _longitude;
	double _horizontalUncertainty;
	double _altitude;
	double _verticalUncertainty;
	NSDate* _date;
	double _speed;

}

@property (assign,nonatomic) double latitude;                           //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;                          //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) double horizontalUncertainty;              //@synthesize horizontalUncertainty=_horizontalUncertainty - In the implementation block
@property (nonatomic,readonly) double speed;                            //@synthesize speed=_speed - In the implementation block
@property (nonatomic,readonly) double uncertainty; 
@property (nonatomic,readonly) double altitude;                         //@synthesize altitude=_altitude - In the implementation block
@property (nonatomic,readonly) double verticalUncertainty;              //@synthesize verticalUncertainty=_verticalUncertainty - In the implementation block
@property (nonatomic,readonly) NSDate * date;                           //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) int referenceFrame;                      //@synthesize referenceFrame=_referenceFrame - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqualToLocation:(id)arg1 ;
-(double)latitude;
-(double)altitude;
-(id)init;
-(double)speed;
-(double)longitude;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(int)referenceFrame;
-(void)setLatitude:(double)arg1 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 horizontalUncertainty:(double)arg3 altitude:(double)arg4 verticalUncertainty:(double)arg5 date:(id)arg6 referenceFrame:(int)arg7 speed:(double)arg8 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 horizontalUncertainty:(double)arg3 date:(id)arg4 ;
-(double)horizontalUncertainty;
-(void)setHorizontalUncertainty:(double)arg1 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 horizontalUncertainty:(double)arg3 date:(id)arg4 referenceFrame:(int)arg5 ;
-(double)verticalUncertainty;
-(id)coordinateToString;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setUncertainty:(double)arg1 ;
-(NSDate *)date;
-(double)uncertainty;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

