/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/

#import <HealthDaemon/HDJournalEntry.h>

@class ASCodableDatabaseCompetitionListEntry;

@interface ASDatabaseCompetitionListEntryJournalEntry : HDJournalEntry {

	ASCodableDatabaseCompetitionListEntry* _competitionList;

}

@property (nonatomic,readonly) ASCodableDatabaseCompetitionListEntry * competitionList;              //@synthesize competitionList=_competitionList - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCompetitionList:(id)arg1 ;
-(ASCodableDatabaseCompetitionListEntry *)competitionList;
@end

