/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSArray, NSString;


@protocol INGetSettingIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSArray * settingResponseDatas; 
@property (nonatomic,copy) NSString * errorDetail; 
@required
-(NSString *)errorDetail;
-(void)setErrorDetail:(id)arg1;
-(NSArray *)settingResponseDatas;
-(void)setSettingResponseDatas:(id)arg1;
-(long long)code;

@end

