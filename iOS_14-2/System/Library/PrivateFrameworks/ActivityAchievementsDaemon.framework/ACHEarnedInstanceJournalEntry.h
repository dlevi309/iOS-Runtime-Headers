/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/

#import <HealthDaemon/HDJournalEntry.h>

@class ACHEarnedInstance;

@interface ACHEarnedInstanceJournalEntry : HDJournalEntry {

	long long _action;
	ACHEarnedInstance* _earnedInstance;
	long long _persistentID;
	long long _provenance;

}

@property (nonatomic,readonly) long long action;                                //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) ACHEarnedInstance * earnedInstance;              //@synthesize earnedInstance=_earnedInstance - In the implementation block
@property (nonatomic,readonly) long long persistentID;                          //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,readonly) long long provenance;                            //@synthesize provenance=_provenance - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(long long)provenance;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)action;
-(long long)persistentID;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithEarnedInstance:(id)arg1 provenance:(long long)arg2 action:(long long)arg3 ;
-(ACHEarnedInstance *)earnedInstance;
@end

