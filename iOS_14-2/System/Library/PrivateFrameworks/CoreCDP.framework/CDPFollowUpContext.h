/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CDPFollowUpContext : NSObject <NSSecureCoding> {

	unsigned long long _repairType;
	BOOL _shouldNotify;
	BOOL _force;
	NSString* _followUpType;

}

@property (assign,nonatomic) unsigned long long repairType; 
@property (nonatomic,copy) NSString * followUpType;                      //@synthesize followUpType=_followUpType - In the implementation block
@property (assign,nonatomic) BOOL shouldNotify;                          //@synthesize shouldNotify=_shouldNotify - In the implementation block
@property (assign,nonatomic) BOOL force;                                 //@synthesize force=_force - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contextForRecoveryKeyRepair;
+(id)contextForOfflinePasscodeChange;
+(id)contextForSettingUpBiometrics;
+(id)contextWithType:(id)arg1 ;
+(id)contextForStateRepair;
-(BOOL)force;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setShouldNotify:(BOOL)arg1 ;
-(BOOL)shouldNotify;
-(void)setForce:(BOOL)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)followUpType;
-(unsigned long long)repairType;
-(void)setRepairType:(unsigned long long)arg1 ;
-(void)setFollowUpType:(NSString *)arg1 ;
@end

