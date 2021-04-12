/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INAlarmSearch, NSArray;


@protocol INChangeAlarmStatusIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INAlarmSearch * alarmSearch; 
@property (nonatomic,copy) NSArray * alarms; 
@property (assign,nonatomic) long long operation; 
@required
-(NSArray *)alarms;
-(void)setOperation:(long long)arg1;
-(id)init;
-(long long)operation;
-(INAlarmSearch *)alarmSearch;
-(void)setAlarmSearch:(id)arg1;
-(void)setAlarms:(id)arg1;

@end

