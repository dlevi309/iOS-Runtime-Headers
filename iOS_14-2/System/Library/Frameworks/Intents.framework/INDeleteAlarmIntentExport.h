/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INAlarmSearch, NSArray;


@protocol INDeleteAlarmIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INAlarmSearch * alarmSearch; 
@property (nonatomic,copy) NSArray * alarms; 
@required
-(NSArray *)alarms;
-(id)init;
-(INAlarmSearch *)alarmSearch;
-(void)setAlarmSearch:(id)arg1;
-(void)setAlarms:(id)arg1;

@end

