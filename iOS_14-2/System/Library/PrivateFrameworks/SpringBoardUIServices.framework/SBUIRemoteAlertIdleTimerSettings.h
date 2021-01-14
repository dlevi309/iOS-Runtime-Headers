/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SBUIRemoteAlertIdleTimerSettings : NSObject <NSSecureCoding> {

	BOOL _disablesWarn;
	BOOL _usesLockScreenRules;
	double _autoLockTimeout;

}

@property (assign,nonatomic) double autoLockTimeout;                //@synthesize autoLockTimeout=_autoLockTimeout - In the implementation block
@property (assign,nonatomic) BOOL disablesWarn;                     //@synthesize disablesWarn=_disablesWarn - In the implementation block
@property (assign,nonatomic) BOOL usesLockScreenRules;              //@synthesize usesLockScreenRules=_usesLockScreenRules - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)autoLockTimeout;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)disablesWarn;
-(void)setAutoLockTimeout:(double)arg1 ;
-(void)setDisablesWarn:(BOOL)arg1 ;
-(BOOL)usesLockScreenRules;
-(void)setUsesLockScreenRules:(BOOL)arg1 ;
@end

