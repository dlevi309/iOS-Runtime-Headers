/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthDaemon/HDJournalEntry.h>

@class NSUUID;

@interface HDClinicalAccountManagerDeleteAccountBySyncIdentifierJournalEntry : HDJournalEntry {

	NSUUID* _accountSyncIdentifier;

}

@property (nonatomic,copy,readonly) NSUUID * accountSyncIdentifier;              //@synthesize accountSyncIdentifier=_accountSyncIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAccountSyncIdentifier:(id)arg1 ;
-(NSUUID *)accountSyncIdentifier;
@end

