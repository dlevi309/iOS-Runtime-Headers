/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFConcreteTimeTriggerBuilder.h>

@class NSSet;

@interface HFEventBasedTimeTriggerBuilder : HFConcreteTimeTriggerBuilder {

	NSSet* _stagedEvents;

}

@property (nonatomic,retain) NSSet * stagedEvents;              //@synthesize stagedEvents=_stagedEvents - In the implementation block
-(void)setRecurrences:(id)arg1 ;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(id)_updateEvents;
-(id)commitCreateTrigger;
-(id)commitEditTrigger;
-(void)_setupWithExistingTrigger:(id)arg1 ;
-(void)setStagedEvents:(NSSet *)arg1 ;
-(id)_updateRecurrences;
-(id)_updateExecuteOnce;
-(NSSet *)stagedEvents;
@end

