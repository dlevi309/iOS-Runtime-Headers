/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
*/


@protocol BSSettingDescriptionProvider <NSObject>
@optional
-(id)settings:(id)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;
-(BOOL)settings:(id)arg1 appendDescriptionToBuilder:(id)arg2 forFlag:(long long)arg3 object:(id)arg4 ofSetting:(unsigned long long)arg5;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
-(id)settings:(id)arg1 keyDescriptionForSetting:(unsigned long long)arg2;
-(BOOL)appendDescriptionToBuilder:(id)arg1 forFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;
-(id)keyDescriptionForSetting:(unsigned long long)arg1;

@end

