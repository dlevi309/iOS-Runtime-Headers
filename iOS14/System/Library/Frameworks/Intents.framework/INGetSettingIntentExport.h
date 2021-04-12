/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INSettingMetadata;


@protocol INGetSettingIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSettingMetadata * settingMetadata; 
@property (assign,nonatomic) long long confirmationValue; 
@required
-(id)init;
-(INSettingMetadata *)settingMetadata;
-(void)setSettingMetadata:(id)arg1;
-(long long)confirmationValue;
-(void)setConfirmationValue:(long long)arg1;

@end

