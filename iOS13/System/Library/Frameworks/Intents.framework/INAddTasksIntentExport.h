/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSArray, INTaskList, INSpatialEventTrigger, INTemporalEventTrigger, INContactEventTrigger, INIntent;


@protocol INAddTasksIntentExport <NSObject,JSExport>
@property (assign,nonatomic) long long taskReference; 
@property (nonatomic,copy) NSArray * targetTaskListMembers; 
@property (nonatomic,copy) INTaskList * targetTaskList; 
@property (nonatomic,copy) NSArray * taskTitles; 
@property (nonatomic,copy) INSpatialEventTrigger * spatialEventTrigger; 
@property (nonatomic,copy) INTemporalEventTrigger * temporalEventTrigger; 
@property (assign,nonatomic) long long priority; 
@property (nonatomic,copy) INContactEventTrigger * contactEventTrigger; 
@property (nonatomic,copy) INIntent * intent; 
@required
-(id)init;
-(long long)priority;
-(void)setPriority:(long long)arg1;
-(INIntent *)intent;
-(void)setIntent:(id)arg1;
-(INContactEventTrigger *)contactEventTrigger;
-(void)setContactEventTrigger:(id)arg1;
-(INSpatialEventTrigger *)spatialEventTrigger;
-(void)setSpatialEventTrigger:(id)arg1;
-(INTemporalEventTrigger *)temporalEventTrigger;
-(void)setTemporalEventTrigger:(id)arg1;
-(NSArray *)taskTitles;
-(void)setTaskTitles:(id)arg1;
-(long long)taskReference;
-(INTaskList *)targetTaskList;
-(void)setTargetTaskList:(id)arg1;
-(NSArray *)targetTaskListMembers;
-(void)setTargetTaskListMembers:(id)arg1;
-(void)setTaskReference:(long long)arg1;

@end

