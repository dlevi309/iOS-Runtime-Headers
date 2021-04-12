/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItemBuilder.h>

@protocol HFTimeEventBuilder;
@class NSString, HFEventBuilder, NSArray, NSTimeZone, HMTrigger;

@interface HFConcreteTimeTriggerBuilder : HFItemBuilder {

	NSString* _name;
	HFEventBuilder*<HFTimeEventBuilder> _eventBuilder;
	NSArray* _recurrences;
	NSTimeZone* _timeZone;

}

@property (nonatomic,retain) HMTrigger * trigger; 
@property (nonatomic,copy) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) HFEventBuilder*<HFTimeEventBuilder> eventBuilder;              //@synthesize eventBuilder=_eventBuilder - In the implementation block
@property (nonatomic,copy) NSArray * recurrences;                                           //@synthesize recurrences=_recurrences - In the implementation block
@property (nonatomic,copy) NSTimeZone * timeZone;                                           //@synthesize timeZone=_timeZone - In the implementation block
+(id)builderForExistingTrigger:(id)arg1 inHome:(id)arg2 ;
-(NSString *)name;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)timeZone;
-(void)setName:(NSString *)arg1 ;
-(HMTrigger *)trigger;
-(void)setTrigger:(HMTrigger *)arg1 ;
-(NSArray *)recurrences;
-(void)setRecurrences:(NSArray *)arg1 ;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(id)commitItem;
-(id)commitCreateTrigger;
-(id)commitEditTrigger;
-(HFEventBuilder*<HFTimeEventBuilder>)eventBuilder;
-(void)copyCurrentStateFromTriggerBuilder:(id)arg1 ;
-(void)setEventBuilder:(HFEventBuilder*<HFTimeEventBuilder>)arg1 ;
-(void)triggerEnabledStateDidChange:(BOOL)arg1 ;
@end

