/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _CLLocationFusionInfo : NSObject <NSCopying, NSSecureCoding> {

	BOOL _coordinateFused;
	int _referenceFrame;
	double _horizontalAccuracy;
	double _course;
	double _courseAccuracy;
	SCD_Struct_CL2 _coordinate;

}

@property (getter=isCoordinateFused,nonatomic,readonly) BOOL coordinateFused;              //@synthesize coordinateFused=_coordinateFused - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CL2 coordinate;                                  //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) double horizontalAccuracy;                                  //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (nonatomic,readonly) int referenceFrame;                                         //@synthesize referenceFrame=_referenceFrame - In the implementation block
@property (nonatomic,readonly) double course;                                              //@synthesize course=_course - In the implementation block
@property (nonatomic,readonly) double courseAccuracy;                                      //@synthesize courseAccuracy=_courseAccuracy - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)course;
-(id)init;
-(SCD_Struct_CL2)coordinate;
-(void)encodeWithCoder:(id)arg1 ;
-(int)referenceFrame;
-(BOOL)isCoordinateFused;
-(id)initWithCoordinateFused:(BOOL)arg1 coordinate:(SCD_Struct_CL2)arg2 horizontalAccuracy:(double)arg3 referenceFrame:(int)arg4 course:(double)arg5 courseAccuracy:(double)arg6 ;
-(double)courseAccuracy;
-(id)initWithCoder:(id)arg1 ;
-(double)horizontalAccuracy;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

