/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HDClinicalAccountEntityUpdateJournalEntry.h>

@class HDFHIRAuthResponse, NSString;

@interface HDClinicalAccountUpdateCredentialJournalEntry : HDClinicalAccountEntityUpdateJournalEntry {

	HDFHIRAuthResponse* _authResponse;
	NSString* _requestedScope;

}

@property (nonatomic,copy,readonly) HDFHIRAuthResponse * authResponse;              //@synthesize authResponse=_authResponse - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestedScope;                      //@synthesize requestedScope=_requestedScope - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)requestedScope;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAuthResponse:(id)arg1 accountIdentifier:(id)arg2 requestedScope:(id)arg3 ;
-(HDFHIRAuthResponse *)authResponse;
@end

