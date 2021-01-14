/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INTaskList, NSArray;


@protocol INAddTasksIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INTaskList * modifiedTaskList; 
@property (nonatomic,copy) NSArray * addedTasks; 
@property (assign,nonatomic) unsigned long long warnings; 
@required
-(void)setAddedTasks:(id)arg1;
-(INTaskList *)modifiedTaskList;
-(void)setWarnings:(unsigned long long)arg1;
-(NSArray *)addedTasks;
-(long long)code;
-(void)setModifiedTaskList:(id)arg1;
-(unsigned long long)warnings;

@end

