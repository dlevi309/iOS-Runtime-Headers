/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INSpeakableString, NSArray;


@protocol INCreateTaskListIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSpeakableString * title; 
@property (nonatomic,copy) NSArray * taskTitles; 
@property (nonatomic,copy) INSpeakableString * groupName; 
@required
-(id)init;
-(INSpeakableString *)title;
-(void)setTitle:(id)arg1;
-(INSpeakableString *)groupName;
-(void)setGroupName:(id)arg1;
-(NSArray *)taskTitles;
-(void)setTaskTitles:(id)arg1;

@end

