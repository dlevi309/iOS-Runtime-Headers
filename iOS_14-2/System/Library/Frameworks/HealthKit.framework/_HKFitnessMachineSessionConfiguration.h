/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString;

@interface _HKFitnessMachineSessionConfiguration : NSObject <NSSecureCoding> {

	NSUUID* _sessionUUID;
	NSUUID* _connectionUUID;
	NSUUID* _machineUUID;
	unsigned long long _machineType;
	NSString* _machineName;
	NSString* _machineBrand;

}

@property (nonatomic,readonly) NSUUID * sessionUUID;                        //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (nonatomic,readonly) NSUUID * connectionUUID;                     //@synthesize connectionUUID=_connectionUUID - In the implementation block
@property (nonatomic,readonly) NSUUID * machineUUID;                        //@synthesize machineUUID=_machineUUID - In the implementation block
@property (nonatomic,readonly) unsigned long long machineType;              //@synthesize machineType=_machineType - In the implementation block
@property (nonatomic,readonly) NSString * machineName;                      //@synthesize machineName=_machineName - In the implementation block
@property (nonatomic,readonly) NSString * machineBrand;                     //@synthesize machineBrand=_machineBrand - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)sessionUUID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSUUID *)connectionUUID;
-(void)_setSessionUUID:(id)arg1 ;
-(void)_setMachineUUID:(id)arg1 ;
-(void)_setMachineName:(id)arg1 ;
-(void)_setMachineBrand:(id)arg1 ;
-(void)_setConnectionUUID:(id)arg1 ;
-(void)_setMachineType:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)machineUUID;
-(unsigned long long)machineType;
-(NSString *)machineName;
-(NSString *)machineBrand;
@end

