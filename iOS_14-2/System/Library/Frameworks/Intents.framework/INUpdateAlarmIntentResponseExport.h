/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INAlarm, NSArray;


@protocol INUpdateAlarmIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INAlarm * updatedAlarm; 
@property (nonatomic,copy) NSArray * conflictAlarms; 
@required
-(NSArray *)conflictAlarms;
-(void)setConflictAlarms:(id)arg1;
-(INAlarm *)updatedAlarm;
-(void)setUpdatedAlarm:(id)arg1;
-(long long)code;

@end

