/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GEOLocationShiftFunctionResponse : NSObject <NSSecureCoding> {

	SCD_Struct_GE32 _originalCoordinate;
	double _params[9];
	double _radius;
	BOOL _shouldUsePolyShiftFunction;
	unsigned _version;

}

@property (nonatomic,readonly) SCD_Struct_GE32 originalCoordinate;              //@synthesize originalCoordinate=_originalCoordinate - In the implementation block
@property (nonatomic,readonly) double radius;                                   //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) unsigned version;                                //@synthesize version=_version - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)version;
-(double)radius;
-(BOOL)isValidForCoordinate:(SCD_Struct_GE32)arg1 ;
-(SCD_Struct_GE32)shiftedCoordinateForCoordinate:(SCD_Struct_GE32)arg1 accuracy:(double*)arg2 ;
-(id)initWithPolyLocationShiftResponse:(id)arg1 originalCoordinate:(SCD_Struct_GE32)arg2 version:(unsigned)arg3 ;
-(SCD_Struct_GE32)originalCoordinate;
@end

