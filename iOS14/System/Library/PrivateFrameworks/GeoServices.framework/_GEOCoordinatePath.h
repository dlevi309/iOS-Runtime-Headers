/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _GEOCoordinatePath : NSObject <NSSecureCoding> {

	SCD_Union_GE140* _coordinates;
	BOOL _usesZilch;
	unsigned long long _count;
	double* _pointLengths;

}

@property (nonatomic,readonly) ControlPoint* zilchControlPoints; 
@property (nonatomic,readonly) unsigned long long count;                      //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) double length; 
@property (nonatomic,readonly) double* pointLengths;                          //@synthesize pointLengths=_pointLengths - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(double)length;
-(unsigned long long)count;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_GE98)coordinateAt:(unsigned long long)arg1 ;
-(ControlPoint*)zilchControlPoints;
-(void)setBasicCoordinates:(SCD_Struct_GE98*)arg1 count:(unsigned long long)arg2 ;
-(void)setZilchCoordinates:(ControlPoint*)arg1 count:(unsigned long long)arg2 ;
-(void)setPointLengths:(double*)arg1 ;
-(double*)pointLengths;
-(void)dealloc;
@end

