/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

