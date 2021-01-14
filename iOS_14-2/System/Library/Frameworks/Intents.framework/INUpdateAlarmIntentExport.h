/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INAlarmSearch, INAlarm, INDateComponentsRange, INSpeakableString;


@protocol INUpdateAlarmIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INAlarmSearch * alarmSearch; 
@property (nonatomic,copy) INAlarm * alarm; 
@property (assign,nonatomic) long long operation; 
@property (nonatomic,copy) INDateComponentsRange * proposedTime; 
@property (nonatomic,copy) INSpeakableString * proposedLabel; 
@required
-(void)setOperation:(long long)arg1;
-(id)init;
-(long long)operation;
-(INDateComponentsRange *)proposedTime;
-(void)setProposedTime:(id)arg1;
-(void)setAlarm:(id)arg1;
-(INAlarmSearch *)alarmSearch;
-(void)setAlarmSearch:(id)arg1;
-(INSpeakableString *)proposedLabel;
-(void)setProposedLabel:(id)arg1;
-(INAlarm *)alarm;

@end

