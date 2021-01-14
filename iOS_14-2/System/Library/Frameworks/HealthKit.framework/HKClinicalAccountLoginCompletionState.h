/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(HKClinicalAccount *)account;
-(BOOL)wasRelogin;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithAccount:(id)arg1 wasRelogin:(BOOL)arg2 ;
-(NSNumber *)alternateCredentialPersistentID;
-(void)setAlternateCredentialPersistentID:(NSNumber *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
@end

