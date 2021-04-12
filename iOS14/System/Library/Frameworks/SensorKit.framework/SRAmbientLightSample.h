/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SensorKit.framework/SensorKit
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
-(NSMeasurement *)lux;
-(NSString *)typeString;
-(long long)placement;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3 ;
-(id)binarySampleRepresentation;
-(void)dealloc;
-(id)sr_dictionaryRepresentation;
-(id)initWithSRALSSampleStruct:(SCD_Struct_SR2*)arg1 ;
-(SCD_Struct_SR1)chromaticity;
-(NSString *)placementString;
@end

