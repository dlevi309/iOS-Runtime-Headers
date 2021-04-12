/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_CDInteractionAdvising.h>

@class _CDInteractionStore, _CDTemporalInteractionAdvisor, _CDSocialInteractionAdvisor, _CDQueryInteractionAdvisor;

@interface _CDInteractionAdviceEngine : NSObject <_CDInteractionAdvising> {

	_CDInteractionStore* _store;
	_CDTemporalInteractionAdvisor* _temporalAdvisor;
	_CDSocialInteractionAdvisor* _socialAdvisor;
	_CDQueryInteractionAdvisor* _queryAdvisor;

}

@property (nonatomic,readonly) _CDSocialInteractionAdvisor * socialAdvisor; 
@property (nonatomic,readonly) _CDTemporalInteractionAdvisor * temporalAdvisor; 
+(id)interactionAdviceEngineWithStore:(id)arg1 ;
-(id)initWithStore:(id)arg1 ;
-(id)adviseInteractionsForDate:(id)arg1 usingSettings:(id)arg2 ;
-(id)rankCandidateContacts:(id)arg1 usingSettings:(id)arg2 ;
-(id)adviseInteractionsForLocation:(id)arg1 usingSettings:(id)arg2 ;
-(id)adviseSocialInteractionsForDate:(id)arg1 andSeedContacts:(id)arg2 usingSettings:(id)arg3 ;
-(id)adviseInteractionsForKeywordsInString:(id)arg1 usingSettings:(id)arg2 ;
-(void)tuneSocialAdvisorUsingSettings:(id)arg1 heartBeatHandler:(id)arg2 ;
-(_CDSocialInteractionAdvisor *)socialAdvisor;
-(id)adviseInteractionsUsingSettings:(id)arg1 ;
-(_CDTemporalInteractionAdvisor *)temporalAdvisor;
@end

