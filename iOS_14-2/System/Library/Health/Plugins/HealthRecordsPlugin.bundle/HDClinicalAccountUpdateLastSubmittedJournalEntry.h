/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HDClinicalAccountEntityUpdateJournalEntry.h>

@class NSNumber;

@interface HDClinicalAccountUpdateLastSubmittedJournalEntry : HDClinicalAccountEntityUpdateJournalEntry {

	NSNumber* _lastSubmittedRowID;
	NSNumber* _expectedRulesVersion;

}

@property (nonatomic,copy,readonly) NSNumber * lastSubmittedRowID;                //@synthesize lastSubmittedRowID=_lastSubmittedRowID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * expectedRulesVersion;              //@synthesize expectedRulesVersion=_expectedRulesVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)lastSubmittedRowID;
-(id)initWithLastSubmittedRowID:(id)arg1 expectedRulesVersion:(id)arg2 accountIdentifier:(id)arg3 ;
-(NSNumber *)expectedRulesVersion;
@end

