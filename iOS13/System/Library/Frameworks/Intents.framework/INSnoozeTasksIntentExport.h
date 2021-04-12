/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSArray, INDateComponentsRange, NSNumber;


@protocol INSnoozeTasksIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSArray * tasks; 
@property (nonatomic,copy) INDateComponentsRange * nextTriggerTime; 
@property (nonatomic,copy) NSNumber * all; 
@required
-(id)init;
-(NSNumber *)all;
-(NSArray *)tasks;
-(void)setTasks:(id)arg1;
-(INDateComponentsRange *)nextTriggerTime;
-(void)setNextTriggerTime:(id)arg1;
-(void)setAll:(id)arg1;

@end

