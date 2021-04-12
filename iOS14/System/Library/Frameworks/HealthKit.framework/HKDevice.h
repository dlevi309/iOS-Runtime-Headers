/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HKDevice : NSObject <NSSecureCoding, NSCopying> {

	NSString* _name;
	NSString* _manufacturer;
	NSString* _model;
	NSString* _hardwareVersion;
	NSString* _firmwareVersion;
	NSString* _softwareVersion;
	NSString* _localIdentifier;
	NSString* _UDIDeviceIdentifier;

}

@property (nonatomic,readonly) NSString * _connectedGymDeviceFullName; 
@property (nonatomic,readonly) NSString * _connectedGymDeviceTypeName; 
@property (readonly) NSString * name; 
@property (readonly) NSString * manufacturer; 
@property (readonly) NSString * model; 
@property (readonly) NSString * hardwareVersion; 
@property (readonly) NSString * firmwareVersion; 
@property (readonly) NSString * softwareVersion; 
@property (readonly) NSString * localIdentifier; 
@property (readonly) NSString * UDIDeviceIdentifier; 
+(id)localDevice;
+(BOOL)supportsSecureCoding;
-(NSString *)localIdentifier;
-(void)_setName:(id)arg1 ;
-(NSString *)firmwareVersion;
-(NSString *)model;
-(NSString *)manufacturer;
-(id)initWithName:(id)arg1 manufacturer:(id)arg2 model:(id)arg3 hardwareVersion:(id)arg4 firmwareVersion:(id)arg5 softwareVersion:(id)arg6 localIdentifier:(id)arg7 UDIDeviceIdentifier:(id)arg8 ;
-(BOOL)_isConnectedGymDevice;
-(unsigned long long)_fitnessMachineType;
-(NSString *)_connectedGymDeviceTypeName;
-(void)_setFitnessMachineType:(unsigned long long)arg1 ;
-(NSString *)_connectedGymDeviceFullName;
-(void)_setManufacturer:(id)arg1 ;
-(void)_setHardwareVersion:(id)arg1 ;
-(void)_setFirmwareVersion:(id)arg1 ;
-(void)_setSoftwareVersion:(id)arg1 ;
-(void)_setLocalIdentifier:(id)arg1 ;
-(NSString *)UDIDeviceIdentifier;
-(void)_setUDIDeviceIdentifier:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)softwareVersion;
-(void)_setModel:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)hardwareVersion;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

