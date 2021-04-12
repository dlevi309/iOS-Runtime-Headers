/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CMAttitude, NSString;

@interface CMDeviceMotionLite : NSObject <NSCopying, NSSecureCoding> {

	BOOL _usingCompass;
	float _gyroTemperature;
	float _compassTemperature;
	CMAttitude* _attitude;
	NSString* _physicalDeviceUniqueID;
	unsigned long long _machTimestamp;
	SCD_Struct_CM316 _gravity;
	SCD_Struct_CM316 _userAcceleration;
	SCD_Struct_CM316 _rotationRate;
	SCD_Struct_CM316 _rawAcceleration;
	SCD_Struct_CM316 _rawRotationRate;
	SCD_Struct_CM316 _rawMagneticField;

}

@property (nonatomic,readonly) SCD_Struct_CM316 rawAcceleration;                     //@synthesize rawAcceleration=_rawAcceleration - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CM316 rawRotationRate;                     //@synthesize rawRotationRate=_rawRotationRate - In the implementation block
@property (nonatomic,readonly) unsigned long long machTimestamp;                     //@synthesize machTimestamp=_machTimestamp - In the implementation block
@property (nonatomic,readonly) float gyroTemperature;                                //@synthesize gyroTemperature=_gyroTemperature - In the implementation block
@property (nonatomic,readonly) float compassTemperature;                             //@synthesize compassTemperature=_compassTemperature - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CM316 rawMagneticField;                    //@synthesize rawMagneticField=_rawMagneticField - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CM316 gravity;                             //@synthesize gravity=_gravity - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CM316 userAcceleration;                    //@synthesize userAcceleration=_userAcceleration - In the implementation block
@property (nonatomic,readonly) float tip; 
@property (nonatomic,readonly) float tilt; 
@property (nonatomic,readonly) CMAttitude * attitude;                                //@synthesize attitude=_attitude - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CM316 rotationRate;                        //@synthesize rotationRate=_rotationRate - In the implementation block
@property (getter=isUsingCompass,nonatomic,readonly) BOOL usingCompass;              //@synthesize usingCompass=_usingCompass - In the implementation block
@property (nonatomic,copy,readonly) NSString * physicalDeviceUniqueID;               //@synthesize physicalDeviceUniqueID=_physicalDeviceUniqueID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_CM316)gravity;
-(CMAttitude *)attitude;
-(float)tilt;
-(float)tip;
-(SCD_Struct_CM316)userAcceleration;
-(SCD_Struct_CM316)rotationRate;
-(id)initWithDeviceMotionLite:(SCD_Struct_CM356)arg1 andDeviceID:(id)arg2 ;
-(BOOL)isUsingCompass;
-(NSString *)physicalDeviceUniqueID;
-(SCD_Struct_CM316)rawAcceleration;
-(SCD_Struct_CM316)rawRotationRate;
-(unsigned long long)machTimestamp;
-(float)gyroTemperature;
-(float)compassTemperature;
-(SCD_Struct_CM316)rawMagneticField;
@end

