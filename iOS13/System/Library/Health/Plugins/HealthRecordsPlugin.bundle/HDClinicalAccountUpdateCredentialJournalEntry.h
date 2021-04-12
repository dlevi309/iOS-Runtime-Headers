/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HDClinicalAccountEntityUpdateJournalEntry.h>

@class HDFHIRAuthResponse;

@interface HDClinicalAccountUpdateCredentialJournalEntry : HDClinicalAccountEntityUpdateJournalEntry {

	HDFHIRAuthResponse* _authResponse;

}

@property (nonatomic,copy,readonly) HDFHIRAuthResponse * authResponse;              //@synthesize authResponse=_authResponse - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAuthResponse:(id)arg1 accountIdentifier:(id)arg2 ;
-(HDFHIRAuthResponse *)authResponse;
@end

