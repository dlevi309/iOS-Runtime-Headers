/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)notes;
-(NSArray *)tasks;
-(void)setNotes:(id)arg1;
-(long long)sortType;
-(NSArray *)taskLists;
-(void)setTaskLists:(id)arg1;
-(void)setSortType:(long long)arg1;
-(void)setTasks:(id)arg1;
-(long long)code;

@end

