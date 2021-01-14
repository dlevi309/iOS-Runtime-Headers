/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSNumber, NSString;


@protocol INSetRadioStationIntentExport <NSObject,JSExport>
@property (assign,nonatomic) long long radioType; 
@property (nonatomic,copy) NSNumber * frequency; 
@property (nonatomic,copy) NSString * stationName; 
@property (nonatomic,copy) NSString * channel; 
@property (nonatomic,copy) NSNumber * presetNumber; 
@required
-(void)setFrequency:(id)arg1;
-(NSNumber *)frequency;
-(id)init;
-(void)setRadioType:(long long)arg1;
-(void)setChannel:(id)arg1;
-(NSString *)channel;
-(NSString *)stationName;
-(void)setStationName:(id)arg1;
-(NSNumber *)presetNumber;
-(void)setPresetNumber:(id)arg1;
-(long long)radioType;

@end

