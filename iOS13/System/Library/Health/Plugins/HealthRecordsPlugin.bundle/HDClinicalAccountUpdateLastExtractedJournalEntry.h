/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HDClinicalAccountEntityUpdateJournalEntry.h>

@class NSNumber;

@interface HDClinicalAccountUpdateLastExtractedJournalEntry : HDClinicalAccountEntityUpdateJournalEntry {

	NSNumber* _lastExtractedRowID;
	NSNumber* _lastExtractedRulesVersion;

}

@property (nonatomic,copy,readonly) NSNumber * lastExtractedRowID;                     //@synthesize lastExtractedRowID=_lastExtractedRowID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * lastExtractedRulesVersion;              //@synthesize lastExtractedRulesVersion=_lastExtractedRulesVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)lastExtractedRulesVersion;
-(NSNumber *)lastExtractedRowID;
-(id)initWithLastExtractedRowID:(id)arg1 rulesVersion:(id)arg2 accountIdentifier:(id)arg3 ;
@end

