/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthDaemon/HDJournalEntry.h>

@class NSUUID, HDCodableObjectCollection;

@interface HDMedicalRecordJournalEntry : HDJournalEntry {

	NSUUID* _accountIdentifier;
	HDCodableObjectCollection* _codableRecordCollection;

}

@property (nonatomic,copy,readonly) NSUUID * accountIdentifier;                                       //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy,readonly) HDCodableObjectCollection * codableRecordCollection;              //@synthesize codableRecordCollection=_codableRecordCollection - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(NSUUID *)accountIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAccountIdentifier:(id)arg1 codableRecordCollection:(id)arg2 ;
-(HDCodableObjectCollection *)codableRecordCollection;
@end

