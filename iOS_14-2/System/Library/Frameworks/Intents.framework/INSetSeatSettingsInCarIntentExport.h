/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSNumber, INSpeakableString;


@protocol INSetSeatSettingsInCarIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSNumber * enableHeating; 
@property (nonatomic,copy) NSNumber * enableCooling; 
@property (nonatomic,copy) NSNumber * enableMassage; 
@property (assign,nonatomic) long long seat; 
@property (nonatomic,copy) NSNumber * level; 
@property (assign,nonatomic) long long relativeLevelSetting; 
@property (nonatomic,copy) INSpeakableString * carName; 
@required
-(long long)seat;
-(INSpeakableString *)carName;
-(id)init;
-(void)setSeat:(long long)arg1;
-(void)setCarName:(id)arg1;
-(NSNumber *)enableHeating;
-(void)setEnableHeating:(id)arg1;
-(NSNumber *)enableCooling;
-(void)setEnableCooling:(id)arg1;
-(NSNumber *)enableMassage;
-(void)setEnableMassage:(id)arg1;
-(long long)relativeLevelSetting;
-(void)setRelativeLevelSetting:(long long)arg1;
-(NSNumber *)level;
-(void)setLevel:(id)arg1;

@end

