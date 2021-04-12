/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKClinicalAccount, NSNumber;

@interface HKClinicalAccountLoginCompletionState : NSObject <NSSecureCoding> {

	BOOL _wasRelogin;
	HKClinicalAccount* _account;
	NSNumber* _alternateCredentialPersistentID;

}

@property (nonatomic,readonly) HKClinicalAccount * account;                         //@synthesize account=_account - In the implementation block
@property (nonatomic,copy) NSNumber * alternateCredentialPersistentID;              //@synthesize alternateCredentialPersistentID=_alternateCredentialPersistentID - In the implementation block
@property (nonatomic,readonly) BOOL wasRelogin;                                     //@synthesize wasRelogin=_wasRelogin - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKClinicalAccount *)account;
-(id)initWithAccount:(id)arg1 wasRelogin:(BOOL)arg2 ;
-(NSNumber *)alternateCredentialPersistentID;
-(void)setAlternateCredentialPersistentID:(NSNumber *)arg1 ;
-(BOOL)wasRelogin;
@end

