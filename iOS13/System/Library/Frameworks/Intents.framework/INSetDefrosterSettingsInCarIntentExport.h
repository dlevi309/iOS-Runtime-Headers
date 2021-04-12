/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSNumber, INSpeakableString;


@protocol INSetDefrosterSettingsInCarIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSNumber * enable; 
@property (assign,nonatomic) long long defroster; 
@property (nonatomic,copy) INSpeakableString * carName; 
@required
-(id)init;
-(NSNumber *)enable;
-(INSpeakableString *)carName;
-(void)setCarName:(id)arg1;
-(long long)defroster;
-(void)setDefroster:(long long)arg1;
-(void)setEnable:(id)arg1;

@end

