/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/

#import <HealthDaemon/HDJournalEntry.h>

@class NSUUID;

@interface ASDatabaseCompetitionDeletionJournalEntry : HDJournalEntry {

	NSUUID* _friendUUID;
	long long _type;

}
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFriendUUID:(id)arg1 type:(long long)arg2 ;
@end

