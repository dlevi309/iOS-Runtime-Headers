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

@class CMDeviceMotion, NSString;

@interface ARDeviceOrientationData : NSObject <ARDictionaryCoding, ARMetadataWrapperCoding, ARMutableSensorData, NSSecureCoding> {

	CMDeviceMotion* _deviceMotion;
	double _timestamp;
	SCD_Struct_AR124 _rotationMatrix;

}

@property (nonatomic,retain) CMDeviceMotion * deviceMotion;                   //@synthesize deviceMotion=_deviceMotion - In the implementation block
@property (assign,nonatomic) double timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR124 rotationMatrix;                 //@synthesize rotationMatrix=_rotationMatrix - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AR1 rotationMatrixENU; 
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
-(CMDeviceMotion *)deviceMotion;
-(SCD_Struct_AR124)rotationMatrix;
-(void)setRotationMatrix:(SCD_Struct_AR124)arg1 ;
-(id)encodeToDictionary;
-(id)encodeToMetadataWrapper;
-(id)initWithMetadataWrapper:(id)arg1 ;
-(void)setDeviceMotion:(CMDeviceMotion *)arg1 ;
-(SCD_Struct_AR1)rotationMatrixENU;
@end

