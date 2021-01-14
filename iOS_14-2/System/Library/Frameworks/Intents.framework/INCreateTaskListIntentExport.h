/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INSpeakableString, NSArray;


@protocol INCreateTaskListIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSpeakableString * title; 
@property (nonatomic,copy) NSArray * taskTitles; 
@property (nonatomic,copy) INSpeakableString * groupName; 
@required
-(id)init;
-(void)setGroupName:(id)arg1;
-(INSpeakableString *)groupName;
-(void)setTaskTitles:(id)arg1;
-(void)setTitle:(id)arg1;
-(NSArray *)taskTitles;
-(INSpeakableString *)title;

@end

