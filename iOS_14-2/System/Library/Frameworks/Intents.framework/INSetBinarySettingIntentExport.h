/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INSettingMetadata, INTemporalEventTrigger;


@protocol INSetBinarySettingIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSettingMetadata * settingMetadata; 
@property (assign,nonatomic) long long binaryValue; 
@property (nonatomic,copy) INTemporalEventTrigger * temporalEventTrigger; 
@required
-(id)init;
-(INSettingMetadata *)settingMetadata;
-(void)setSettingMetadata:(id)arg1;
-(void)setBinaryValue:(long long)arg1;
-(INTemporalEventTrigger *)temporalEventTrigger;
-(void)setTemporalEventTrigger:(id)arg1;
-(long long)binaryValue;

@end

