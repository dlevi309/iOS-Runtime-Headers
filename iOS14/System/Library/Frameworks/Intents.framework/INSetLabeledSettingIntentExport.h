/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INSettingMetadata, NSString, INTemporalEventTrigger;


@protocol INSetLabeledSettingIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSettingMetadata * settingMetadata; 
@property (nonatomic,copy) NSString * labeledValue; 
@property (nonatomic,copy) INTemporalEventTrigger * temporalEventTrigger; 
@required
-(id)init;
-(INSettingMetadata *)settingMetadata;
-(void)setSettingMetadata:(id)arg1;
-(INTemporalEventTrigger *)temporalEventTrigger;
-(void)setTemporalEventTrigger:(id)arg1;
-(NSString *)labeledValue;
-(void)setLabeledValue:(id)arg1;

@end

