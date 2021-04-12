/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSArray;


@protocol INSearchForNotebookItemsIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSArray * notes; 
@property (nonatomic,copy) NSArray * taskLists; 
@property (nonatomic,copy) NSArray * tasks; 
@property (assign,nonatomic) long long sortType; 
@required
-(long long)code;
-(NSArray *)tasks;
-(void)setTasks:(id)arg1;
-(NSArray *)notes;
-(void)setNotes:(id)arg1;
-(NSArray *)taskLists;
-(void)setTaskLists:(id)arg1;
-(long long)sortType;
-(void)setSortType:(long long)arg1;

@end

