/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)provenance;
-(void)encodeWithCoder:(id)arg1 ;
-(ACHTemplate *)template;
-(long long)action;
-(void)setProvenance:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTemplate:(id)arg1 provenance:(long long)arg2 action:(long long)arg3 ;
@end

