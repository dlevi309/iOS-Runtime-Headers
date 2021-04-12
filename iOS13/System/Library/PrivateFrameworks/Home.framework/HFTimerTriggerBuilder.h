/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFTriggerBuilder.h>

@class HFConcreteTimeTriggerBuilder, NSArray, NSTimeZone;

@interface HFTimerTriggerBuilder : HFTriggerBuilder {

	unsigned long long _preferredHomeKitObjectType;
	HFConcreteTimeTriggerBuilder* _concreteTriggerBuilder;

}

@property (nonatomic,retain) HFConcreteTimeTriggerBuilder * concreteTriggerBuilder;              //@synthesize concreteTriggerBuilder=_concreteTriggerBuilder - In the implementation block
@property (nonatomic,retain) HFEventBuilder*<HFTimeEventBuilder> eventBuilder; 
@property (nonatomic,copy) NSArray * recurrences; 
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (assign,nonatomic) unsigned long long preferredHomeKitObjectType;                      //@synthesize preferredHomeKitObjectType=_preferredHomeKitObjectType - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)timeZone;
-(void)setName:(id)arg1 ;
-(NSArray *)recurrences;
-(void)setRecurrences:(NSArray *)arg1 ;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 context:(id)arg3 ;
-(id)_performValidation;
-(BOOL)supportsConditions;
-(BOOL)supportsEndEvents;
-(id)commitCreateTrigger;
-(id)commitEditTrigger;
-(id)naturalLanguageNameOfType:(unsigned long long)arg1 ;
-(HFEventBuilder*<HFTimeEventBuilder>)eventBuilder;
-(void)_createConcreteTriggerBuilder;
-(HFConcreteTimeTriggerBuilder *)concreteTriggerBuilder;
-(void)setConcreteTriggerBuilder:(HFConcreteTimeTriggerBuilder *)arg1 ;
-(BOOL)_supportsEventBasedTimeTriggers;
-(BOOL)_currentStateRequiresEventBasedTimeTriggers;
-(void)setEventBuilder:(HFEventBuilder*<HFTimeEventBuilder>)arg1 ;
-(unsigned long long)preferredHomeKitObjectType;
-(void)setPreferredHomeKitObjectType:(unsigned long long)arg1 ;
@end

