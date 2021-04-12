/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@protocol HFTimeEventBuilder;
@class HFEventBuilder;

@interface HFTimerTriggerTimeEventAdapter : NSObject {

	HFEventBuilder*<HFTimeEventBuilder> _eventBuilder;

}

@property (nonatomic,readonly) HFEventBuilder*<HFTimeEventBuilder> eventBuilder;              //@synthesize eventBuilder=_eventBuilder - In the implementation block
+(id)adapterWithEventBuilder:(id)arg1 ;
-(id)init;
-(id)initWithEventBuilder:(id)arg1 ;
-(id)createTriggerWithName:(id)arg1 timeZone:(id)arg2 recurrences:(id)arg3 ;
-(id)updateTrigger:(id)arg1 ;
-(HFEventBuilder*<HFTimeEventBuilder>)eventBuilder;
@end

