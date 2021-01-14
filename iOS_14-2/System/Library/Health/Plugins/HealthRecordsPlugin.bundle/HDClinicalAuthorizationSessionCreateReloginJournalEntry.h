/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSUUID *)accountIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithState:(id)arg1 queryString:(id)arg2 accountIdentifier:(id)arg3 ;
@end

