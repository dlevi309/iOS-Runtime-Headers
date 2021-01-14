/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARDictionaryCoding.h>
#import <ARKitCore/ARMetadataWrapperCoding.h>
#import <ARKitCore/ARMutableSensorData.h>
#import <ARKitCore/ARDaemonSecureCoding.h>

@class CMDeviceMotion, NSString;

@interface ARDeviceOrientationData : NSObject <ARDictionaryCoding, ARMetadataWrapperCoding, ARMutableSensorData, ARDaemonSecureCoding> {

	CMDeviceMotion* _deviceMotion;
	double _timestamp;
	SCD_Struct_AR94 _rotationMatrix;

}

@property (nonatomic,retain) CMDeviceMotion * deviceMotion;                   //@synthesize deviceMotion=_deviceMotion - In the implementation block
@property (assign,nonatomic) double timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR94 rotationMatrix;                  //@synthesize rotationMatrix=_rotationMatrix - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AR1 rotationMatrixENU; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(SCD_Struct_AR94)rotationMatrix;
-(double)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setDeviceMotion:(CMDeviceMotion *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(CMDeviceMotion *)deviceMotion;
-(id)encodeToDictionary;
-(id)encodeToMetadataWrapper;
-(id)initWithMetadataWrapper:(id)arg1 ;
-(void)setRotationMatrix:(SCD_Struct_AR94)arg1 ;
-(SCD_Struct_AR1)rotationMatrixENU;
@end

