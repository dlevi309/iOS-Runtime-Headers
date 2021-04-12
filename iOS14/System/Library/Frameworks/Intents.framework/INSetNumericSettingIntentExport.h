/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INSettingMetadata, INNumericSettingValue, INTemporalEventTrigger;


@protocol INSetNumericSettingIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSettingMetadata * settingMetadata; 
@property (nonatomic,copy) INNumericSettingValue * numericValue; 
@property (assign,nonatomic) long long boundedValue; 
@property (assign,nonatomic) long long action; 
@property (nonatomic,copy) INTemporalEventTrigger * temporalEventTrigger; 
@required
-(id)init;
-(long long)boundedValue;
-(INSettingMetadata *)settingMetadata;
-(void)setBoundedValue:(long long)arg1;
-(void)setNumericValue:(id)arg1;
-(void)setSettingMetadata:(id)arg1;
-(long long)action;
-(void)setAction:(long long)arg1;
-(INTemporalEventTrigger *)temporalEventTrigger;
-(void)setTemporalEventTrigger:(id)arg1;
-(INNumericSettingValue *)numericValue;

@end

