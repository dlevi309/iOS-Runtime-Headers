/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSNumber *)level;
-(void)setLevel:(id)arg1;
-(INSpeakableString *)carName;
-(void)setCarName:(id)arg1;
-(NSNumber *)enableHeating;
-(void)setEnableHeating:(id)arg1;
-(NSNumber *)enableCooling;
-(void)setEnableCooling:(id)arg1;
-(NSNumber *)enableMassage;
-(void)setEnableMassage:(id)arg1;
-(long long)seat;
-(void)setSeat:(long long)arg1;
-(long long)relativeLevelSetting;
-(void)setRelativeLevelSetting:(long long)arg1;

@end

