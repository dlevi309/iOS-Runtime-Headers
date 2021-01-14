/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HDClinicalAccountEntityUpdateJournalEntry.h>

@interface HDClinicalAccountUpdateCredentialStateJournalEntry : HDClinicalAccountEntityUpdateJournalEntry {

	long long _credentialState;

}

@property (nonatomic,readonly) long long credentialState;              //@synthesize credentialState=_credentialState - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(long long)credentialState;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCredentialState:(long long)arg1 accountIdentifier:(id)arg2 ;
@end

