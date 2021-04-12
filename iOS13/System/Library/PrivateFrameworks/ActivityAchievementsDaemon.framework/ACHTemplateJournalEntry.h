/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/

#import <HealthDaemon/HDJournalEntry.h>

@class ACHTemplate;

@interface ACHTemplateJournalEntry : HDJournalEntry {

	long long _action;
	ACHTemplate* _template;
	long long _provenance;

}

@property (nonatomic,readonly) long long action;                    //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) ACHTemplate * template;              //@synthesize template=_template - In the implementation block
@property (assign,nonatomic) long long provenance;                  //@synthesize provenance=_provenance - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)action;
-(ACHTemplate *)template;
-(long long)provenance;
-(id)initWithTemplate:(id)arg1 provenance:(long long)arg2 action:(long long)arg3 ;
-(void)setProvenance:(long long)arg1 ;
@end

