/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthKit/HKOAuth2Credential.h>

@class NSString;

@interface HDFHIRCredential : HKOAuth2Credential {

	NSString* _patientID;

}

@property (nonatomic,copy,readonly) NSString * patientID;              //@synthesize patientID=_patientID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)patientHashForPatientID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 requestedScopeString:(id)arg2 expiration:(id)arg3 scope:(id)arg4 ;
-(BOOL)isEqualToCredential:(id)arg1 epsilonExpiration:(double)arg2 ;
-(id)initWithIdentifier:(id)arg1 requestedScopeString:(id)arg2 expiration:(id)arg3 scopeString:(id)arg4 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)patientID;
-(id)initWithIdentifier:(id)arg1 requestedScopeString:(id)arg2 expiration:(id)arg3 scopeString:(id)arg4 patientID:(id)arg5 ;
-(id)initWithIdentifier:(id)arg1 requestedScopeString:(id)arg2 expiration:(id)arg3 scope:(id)arg4 patientID:(id)arg5 ;
@end

