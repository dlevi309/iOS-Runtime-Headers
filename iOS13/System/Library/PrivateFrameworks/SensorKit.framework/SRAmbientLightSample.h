/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
*/

#import <SensorKit/SensorKit-Structs.h>
#import <libobjc.A.dylib/SRSampleExporting.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SRSampling.h>

@class NSMeasurement, NSString;

@interface SRAmbientLightSample : NSObject <SRSampleExporting, NSSecureCoding, SRSampling> {

	long long _type;
	long long _placement;
	SCD_Struct_SR1 _chromaticity;
	NSMeasurement* _lux;

}

@property (copy,readonly) NSString * typeString; 
@property (copy,readonly) NSString * placementString; 
@property (readonly) long long placement;                           //@synthesize placement=_placement - In the implementation block
@property (readonly) SCD_Struct_SR1 chromaticity;                   //@synthesize chromaticity=_chromaticity - In the implementation block
@property (copy,readonly) NSMeasurement * lux;                      //@synthesize lux=_lux - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSMeasurement *)lux;
-(NSString *)typeString;
-(long long)placement;
-(id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3 ;
-(id)binarySampleRepresentation;
-(id)sr_dictionaryRepresentation;
-(id)initWithSRALSSampleStruct:(SCD_Struct_SR2*)arg1 ;
-(SCD_Struct_SR1)chromaticity;
-(NSString *)placementString;
@end

