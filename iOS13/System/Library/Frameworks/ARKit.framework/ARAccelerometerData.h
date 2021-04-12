/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARDictionaryCoding.h>
#import <ARKit/ARMetadataWrapperCoding.h>
#import <ARKit/ARMutableSensorData.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ARAccelerometerData : NSObject <ARDictionaryCoding, ARMetadataWrapperCoding, ARMutableSensorData, NSSecureCoding> {

	double _timestamp;
	double _temperature;
	SCD_Struct_AR45 _acceleration;

}

@property (assign,nonatomic) double timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR45 acceleration;              //@synthesize acceleration=_acceleration - In the implementation block
@property (assign,nonatomic) double temperature;                        //@synthesize temperature=_temperature - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(SCD_Struct_AR45)acceleration;
-(double)temperature;
-(void)setTemperature:(double)arg1 ;
-(void)setAcceleration:(SCD_Struct_AR45)arg1 ;
-(id)encodeToDictionary;
-(id)encodeToMetadataWrapper;
-(id)initWithMetadataWrapper:(id)arg1 ;
@end

