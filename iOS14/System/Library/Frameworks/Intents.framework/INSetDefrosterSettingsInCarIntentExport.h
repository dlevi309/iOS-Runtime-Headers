/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSNumber, INSpeakableString;


@protocol INSetDefrosterSettingsInCarIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSNumber * enable; 
@property (assign,nonatomic) long long defroster; 
@property (nonatomic,copy) INSpeakableString * carName; 
@required
-(NSNumber *)enable;
-(INSpeakableString *)carName;
-(id)init;
-(void)setCarName:(id)arg1;
-(long long)defroster;
-(void)setDefroster:(long long)arg1;
-(void)setEnable:(id)arg1;

@end

