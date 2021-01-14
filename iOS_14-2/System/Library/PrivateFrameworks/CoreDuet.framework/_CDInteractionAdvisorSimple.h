/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol _CDInteractionAdvising;
@interface _CDInteractionAdvisorSimple : NSObject {

	id<_CDInteractionAdvising> _interactionAdvisor;

}

@property (retain) id<_CDInteractionAdvising> interactionAdvisor;              //@synthesize interactionAdvisor=_interactionAdvisor - In the implementation block
+(id)advisorSettingsForMatchingHandles:(id)arg1 mechanism:(long long)arg2 date:(id)arg3 count:(long long)arg4 ;
+(id)advisorSettingsForMatchingPersonID:(id)arg1 mechanism:(long long)arg2 date:(id)arg3 count:(long long)arg4 ;
+(id)advisorSettingsForMatchingDisplayName:(id)arg1 mechanism:(long long)arg2 date:(id)arg3 count:(long long)arg4 ;
-(id)init;
-(id)initWithCoreDuetDatabase;
-(void)setInteractionAdvisor:(id<_CDInteractionAdvising>)arg1 ;
-(id)initWithCoreDuetDaemon;
-(id)initWithInteractionAdvisor:(id)arg1 ;
-(id)rankedInteractionsForHandles:(id)arg1 mechanism:(long long)arg2 count:(long long)arg3 date:(id)arg4 ;
-(id)rankedInteractionsForPersonId:(id)arg1 mechanism:(long long)arg2 count:(long long)arg3 date:(id)arg4 ;
-(id)rankedInteractionsForDisplayName:(id)arg1 mechanism:(long long)arg2 count:(long long)arg3 date:(id)arg4 ;
-(id<_CDInteractionAdvising>)interactionAdvisor;
-(id)bestInteractionMatchingHandles:(id)arg1 mechanism:(long long)arg2 ;
-(id)bestInteractionMatchingContactID:(id)arg1 mechanism:(long long)arg2 ;
-(id)bestInteractionMatchingDisplayName:(id)arg1 mechanism:(long long)arg2 ;
-(id)rankedInteractionsForHandles:(id)arg1 mechanism:(long long)arg2 count:(long long)arg3 ;
-(id)rankedInteractionsForPersonId:(id)arg1 mechanism:(long long)arg2 count:(long long)arg3 ;
-(id)rankedInteractionsForDisplayName:(id)arg1 mechanism:(long long)arg2 count:(long long)arg3 ;
@end

