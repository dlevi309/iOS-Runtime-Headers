/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INNumericSettingValue, NSString;


@protocol INSetNumericSettingIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INNumericSettingValue * oldValue; 
@property (nonatomic,copy) INNumericSettingValue * updatedValue; 
@property (nonatomic,copy) INNumericSettingValue * minValue; 
@property (nonatomic,copy) INNumericSettingValue * maxValue; 
@property (nonatomic,copy) NSString * errorDetail; 
@required
-(void)setMaxValue:(id)arg1;
-(INNumericSettingValue *)updatedValue;
-(void)setUpdatedValue:(id)arg1;
-(NSString *)errorDetail;
-(void)setErrorDetail:(id)arg1;
-(INNumericSettingValue *)oldValue;
-(void)setMinValue:(id)arg1;
-(void)setOldValue:(id)arg1;
-(long long)code;
-(INNumericSettingValue *)maxValue;
-(INNumericSettingValue *)minValue;

@end

