/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HDClinicalAuthorizationSessionCreateJournalEntry.h>

@class NSUUID;

@interface HDClinicalAuthorizationSessionCreateReloginJournalEntry : HDClinicalAuthorizationSessionCreateJournalEntry {

	NSUUID* _accountIdentifier;

}

@property (nonatomic,copy,readonly) NSUUID * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)accountIdentifier;
-(id)initWithState:(id)arg1 queryString:(id)arg2 accountIdentifier:(id)arg3 ;
@end

