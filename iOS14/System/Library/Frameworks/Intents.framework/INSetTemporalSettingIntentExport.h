/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INSettingMetadata, INDateComponentsRange, INTemporalEventTrigger;


@protocol INSetTemporalSettingIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSettingMetadata * settingMetadata; 
@property (nonatomic,copy) INDateComponentsRange * timeValue; 
@property (nonatomic,copy) INTemporalEventTrigger * temporalEventTrigger; 
@property (assign,nonatomic) long long action; 
@required
-(id)init;
-(INSettingMetadata *)settingMetadata;
-(void)setSettingMetadata:(id)arg1;
-(void)setTimeValue:(id)arg1;
-(long long)action;
-(void)setAction:(long long)arg1;
-(INTemporalEventTrigger *)temporalEventTrigger;
-(void)setTemporalEventTrigger:(id)arg1;
-(INDateComponentsRange *)timeValue;

@end

