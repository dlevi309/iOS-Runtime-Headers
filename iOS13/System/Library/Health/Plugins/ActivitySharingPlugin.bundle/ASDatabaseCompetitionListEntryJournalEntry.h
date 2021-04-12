/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

