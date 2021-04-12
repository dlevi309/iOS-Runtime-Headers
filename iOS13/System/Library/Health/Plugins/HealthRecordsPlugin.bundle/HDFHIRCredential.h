/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 expiration:(id)arg2 scope:(id)arg3 ;
-(BOOL)isEqualToCredential:(id)arg1 epsilonExpiration:(double)arg2 ;
-(id)initWithIdentifier:(id)arg1 expiration:(id)arg2 scopeString:(id)arg3 ;
-(NSString *)patientID;
-(id)initWithIdentifier:(id)arg1 expiration:(id)arg2 scopeString:(id)arg3 patientID:(id)arg4 ;
-(id)initWithIdentifier:(id)arg1 expiration:(id)arg2 scope:(id)arg3 patientID:(id)arg4 ;
@end

