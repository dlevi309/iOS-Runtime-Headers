/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)rankCandidateContacts:(id)arg1 usingSettings:(id)arg2 ;
-(id)adviseInteractionsUsingSettings:(id)arg1 ;
-(id)adviseInteractionsForDate:(id)arg1 usingSettings:(id)arg2 ;
-(id)adviseInteractionsForLocation:(id)arg1 usingSettings:(id)arg2 ;
-(id)adviseSocialInteractionsForDate:(id)arg1 andSeedContacts:(id)arg2 usingSettings:(id)arg3 ;
-(id)adviseInteractionsForKeywordsInString:(id)arg1 usingSettings:(id)arg2 ;
-(void)tuneSocialAdvisorUsingSettings:(id)arg1 heartBeatHandler:(id)arg2 ;
-(_CDSocialInteractionAdvisor *)socialAdvisor;
-(_CDTemporalInteractionAdvisor *)temporalAdvisor;
@end

