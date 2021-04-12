/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSDate;

@interface HDFitnessMachineSessionRecoveryConfiguration : NSObject <NSSecureCoding> {

	NSUUID* _sessionUUID;
	NSUUID* _machineUUID;
	unsigned long long _machineType;
	NSString* _machineName;
	NSString* _machineBrand;
	unsigned long long _activityType;
	NSDate* _machineStartDate;
	NSDate* _machinePreferredUntilDate;

}

@property (nonatomic,readonly) NSUUID * sessionUUID;                            //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (nonatomic,readonly) NSUUID * machineUUID;                            //@synthesize machineUUID=_machineUUID - In the implementation block
@property (nonatomic,readonly) unsigned long long machineType;                  //@synthesize machineType=_machineType - In the implementation block
@property (nonatomic,copy,readonly) NSString * machineName;                     //@synthesize machineName=_machineName - In the implementation block
@property (nonatomic,copy) NSString * machineBrand;                             //@synthesize machineBrand=_machineBrand - In the implementation block
@property (nonatomic,readonly) unsigned long long activityType;                 //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,readonly) NSDate * machineStartDate;                       //@synthesize machineStartDate=_machineStartDate - In the implementation block
@property (nonatomic,readonly) NSDate * machinePreferredUntilDate;              //@synthesize machinePreferredUntilDate=_machinePreferredUntilDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)activityType;
-(NSUUID *)sessionUUID;
-(NSUUID *)machineUUID;
-(unsigned long long)machineType;
-(NSString *)machineName;
-(NSString *)machineBrand;
-(NSDate *)machinePreferredUntilDate;
-(void)setMachineBrand:(NSString *)arg1 ;
-(NSDate *)machineStartDate;
-(id)initWithSessionUUID:(id)arg1 machineUUID:(id)arg2 machineType:(unsigned long long)arg3 machineName:(id)arg4 machineBrand:(id)arg5 activityType:(unsigned long long)arg6 machineStartDate:(id)arg7 machinePreferredUntilDate:(id)arg8 ;
@end

