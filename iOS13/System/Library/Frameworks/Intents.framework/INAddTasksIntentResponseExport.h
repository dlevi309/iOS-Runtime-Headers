/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INTaskList, NSArray;


@protocol INAddTasksIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INTaskList * modifiedTaskList; 
@property (nonatomic,copy) NSArray * addedTasks; 
@property (assign,nonatomic) unsigned long long warnings; 
@required
-(long long)code;
-(unsigned long long)warnings;
-(void)setWarnings:(unsigned long long)arg1;
-(INTaskList *)modifiedTaskList;
-(void)setModifiedTaskList:(id)arg1;
-(NSArray *)addedTasks;
-(void)setAddedTasks:(id)arg1;

@end

