/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _CLVLLocalizationResult : NSObject <NSCopying, NSSecureCoding> {

	float _confidence;
	double _timestamp;
	SCD_Struct_CL12 _location;
	SCD_Struct_CL13 _transform;
	SCD_Struct_CL14 _covariance;

}

@property (assign,nonatomic) double timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) SCD_Struct_CL12 location;                //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) SCD_Struct_CL13 transform;               //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) SCD_Struct_CL14 covariance;              //@synthesize covariance=_covariance - In the implementation block
@property (assign,nonatomic) float confidence;                        //@synthesize confidence=_confidence - In the implementation block
+(BOOL)supportsSecureCoding;
-(float)confidence;
-(double)timestamp;
-(SCD_Struct_CL12)location;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTransform:(SCD_Struct_CL13)arg1 ;
-(SCD_Struct_CL13)transform;
-(void)setLocation:(SCD_Struct_CL12)arg1 ;
-(SCD_Struct_CL14)covariance;
-(void)setCovariance:(SCD_Struct_CL14)arg1 ;
-(id)descriptionWithMemberIndent:(id)arg1 endIndent:(id)arg2 ;
-(id)description;
-(void)setConfidence:(float)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
@end

