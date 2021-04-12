/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)channel;
-(NSNumber *)frequency;
-(void)setFrequency:(id)arg1;
-(void)setChannel:(id)arg1;
-(long long)radioType;
-(void)setRadioType:(long long)arg1;
-(NSString *)stationName;
-(void)setStationName:(id)arg1;
-(NSNumber *)presetNumber;
-(void)setPresetNumber:(id)arg1;

@end

