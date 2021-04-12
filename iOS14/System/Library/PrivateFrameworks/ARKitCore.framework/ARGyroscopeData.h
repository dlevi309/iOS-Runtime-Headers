/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARDictionaryCoding.h>
#import <ARKitCore/ARMetadataWrapperCoding.h>
#import <ARKitCore/ARMutableSensorData.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ARGyroscopeData : NSObject <ARDictionaryCoding, ARMetadataWrapperCoding, ARMutableSensorData, NSSecureCoding> {

	double _timestamp;
	SCD_Struct_AR45 _rotationRate;

}

@property (assign,nonatomic) double timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR45 rotationRate;              //@synthesize rotationRate=_rotationRate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setRotationRate:(SCD_Struct_AR45)arg1 ;
-(double)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_AR45)rotationRate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)encodeToDictionary;
-(id)encodeToMetadataWrapper;
-(id)initWithMetadataWrapper:(id)arg1 ;
@end

