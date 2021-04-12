/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface HKElectrocardiogramSessionConfiguration : NSObject <NSCopying, NSSecureCoding> {

	BOOL _wornOnRightArm;
	NSUUID* _sessionUUID;
	long long _mode;
	double _maximumDuration;

}

@property (nonatomic,copy) NSUUID * sessionUUID;                  //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) long long mode;                      //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) double maximumDuration;              //@synthesize maximumDuration=_maximumDuration - In the implementation block
@property (assign,nonatomic) BOOL wornOnRightArm;                 //@synthesize wornOnRightArm=_wornOnRightArm - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sessionConfigurationWithUUID:(id)arg1 mode:(long long)arg2 maximumDuration:(double)arg3 wornOnRightArm:(BOOL)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(double)maximumDuration;
-(void)setMaximumDuration:(double)arg1 ;
-(NSUUID *)sessionUUID;
-(void)setSessionUUID:(NSUUID *)arg1 ;
-(void)setWornOnRightArm:(BOOL)arg1 ;
-(BOOL)wornOnRightArm;
@end

