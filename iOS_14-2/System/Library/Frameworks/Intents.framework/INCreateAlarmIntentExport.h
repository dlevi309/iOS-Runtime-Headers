/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSNumber, INDateComponentsRange, INSpeakableString;


@protocol INCreateAlarmIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSNumber * relativeOffsetInMinutes; 
@property (nonatomic,copy) INDateComponentsRange * time; 
@property (nonatomic,copy) INSpeakableString * label; 
@property (assign,nonatomic) unsigned long long alarmRepeatScheduleOptions; 
@required
-(INDateComponentsRange *)time;
-(void)setTime:(id)arg1;
-(id)init;
-(unsigned long long)alarmRepeatScheduleOptions;
-(NSNumber *)relativeOffsetInMinutes;
-(void)setRelativeOffsetInMinutes:(id)arg1;
-(void)setAlarmRepeatScheduleOptions:(unsigned long long)arg1;
-(void)setLabel:(id)arg1;
-(INSpeakableString *)label;

@end

