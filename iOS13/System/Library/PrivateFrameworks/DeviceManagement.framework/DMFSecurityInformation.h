/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface DMFSecurityInformation : NSObject <NSCopying, NSSecureCoding> {

	BOOL _supportsBlockLevelEncryption;
	BOOL _supportsFileLevelEncryption;
	BOOL _passcodeIsSet;
	BOOL _passcodeIsCompliantWithGlobalRestrictions;
	BOOL _passcodeIsCompliantWithProfileRestrictions;
	unsigned long long _passcodeLockGracePeriod;
	unsigned long long _passcodeLockGracePeriodEnforced;

}

@property (nonatomic,readonly) BOOL supportsBlockLevelEncryption;                               //@synthesize supportsBlockLevelEncryption=_supportsBlockLevelEncryption - In the implementation block
@property (nonatomic,readonly) BOOL supportsFileLevelEncryption;                                //@synthesize supportsFileLevelEncryption=_supportsFileLevelEncryption - In the implementation block
@property (nonatomic,readonly) BOOL passcodeIsSet;                                              //@synthesize passcodeIsSet=_passcodeIsSet - In the implementation block
@property (nonatomic,readonly) BOOL passcodeIsCompliantWithGlobalRestrictions;                  //@synthesize passcodeIsCompliantWithGlobalRestrictions=_passcodeIsCompliantWithGlobalRestrictions - In the implementation block
@property (nonatomic,readonly) BOOL passcodeIsCompliantWithProfileRestrictions;                 //@synthesize passcodeIsCompliantWithProfileRestrictions=_passcodeIsCompliantWithProfileRestrictions - In the implementation block
@property (nonatomic,readonly) unsigned long long passcodeLockGracePeriod;                      //@synthesize passcodeLockGracePeriod=_passcodeLockGracePeriod - In the implementation block
@property (nonatomic,readonly) unsigned long long passcodeLockGracePeriodEnforced;              //@synthesize passcodeLockGracePeriodEnforced=_passcodeLockGracePeriodEnforced - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)supportsBlockLevelEncryption;
-(BOOL)supportsFileLevelEncryption;
-(unsigned long long)passcodeLockGracePeriod;
-(BOOL)passcodeIsSet;
-(BOOL)passcodeIsCompliantWithGlobalRestrictions;
-(BOOL)passcodeIsCompliantWithProfileRestrictions;
-(unsigned long long)passcodeLockGracePeriodEnforced;
-(id)initWithSupportsBlockLevelEncryption:(BOOL)arg1 supportsFileLevelEncryption:(BOOL)arg2 passcodeIsSet:(BOOL)arg3 passcodeIsCompliantWithGlobalRestrictions:(BOOL)arg4 passcodeIsCompliantWithProfileRestrictions:(BOOL)arg5 passcodeLockGracePeriodEnforced:(unsigned long long)arg6 passcodeLockGracePeriod:(unsigned long long)arg7 ;
@end

