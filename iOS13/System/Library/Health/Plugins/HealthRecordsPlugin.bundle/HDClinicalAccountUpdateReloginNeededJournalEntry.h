/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HDClinicalAccountEntityUpdateJournalEntry.h>

@interface HDClinicalAccountUpdateReloginNeededJournalEntry : HDClinicalAccountEntityUpdateJournalEntry {

	BOOL _reloginNeeded;

}

@property (nonatomic,readonly) BOOL reloginNeeded;              //@synthesize reloginNeeded=_reloginNeeded - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithReloginNeeded:(BOOL)arg1 accountIdentifier:(id)arg2 ;
-(BOOL)reloginNeeded;
@end

