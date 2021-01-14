/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(INIntent *)intent;
-(id)init;
-(void)setTaskTitles:(id)arg1;
-(void)setIntent:(id)arg1;
-(long long)taskReference;
-(INContactEventTrigger *)contactEventTrigger;
-(void)setContactEventTrigger:(id)arg1;
-(INSpatialEventTrigger *)spatialEventTrigger;
-(void)setSpatialEventTrigger:(id)arg1;
-(INTemporalEventTrigger *)temporalEventTrigger;
-(void)setTemporalEventTrigger:(id)arg1;
-(INTaskList *)targetTaskList;
-(void)setTargetTaskList:(id)arg1;
-(NSArray *)targetTaskListMembers;
-(void)setTargetTaskListMembers:(id)arg1;
-(void)setTaskReference:(long long)arg1;
-(NSArray *)taskTitles;
-(long long)priority;
-(void)setPriority:(long long)arg1;

@end

