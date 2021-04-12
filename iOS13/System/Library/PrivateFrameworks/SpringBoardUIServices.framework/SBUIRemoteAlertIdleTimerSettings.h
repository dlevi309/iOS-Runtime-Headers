/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)autoLockTimeout;
-(void)setAutoLockTimeout:(double)arg1 ;
-(BOOL)disablesWarn;
-(void)setDisablesWarn:(BOOL)arg1 ;
-(BOOL)usesLockScreenRules;
-(void)setUsesLockScreenRules:(BOOL)arg1 ;
@end

