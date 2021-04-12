/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/


@class NSUserDefaults;

@interface SiriUIPreferences : NSObject {

	NSUserDefaults* _userDefaults;
	long long _numberOfTimesSiriCardShown;
	BOOL _voiceRequestMadeWhileInCarDND;

}
+(id)sharedPreferences;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)boolForKey:(id)arg1 ;
-(long long)integerForKey:(id)arg1 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)setVoiceRequestMadeWhileInCarDND:(BOOL)arg1 ;
-(BOOL)voiceRequestMadeWhileInCarDND;
-(long long)numberOfTimesCarDNDSiriCardShown;
-(void)setNumberOfTimesCarDNDSiriCardShown:(long long)arg1 ;
@end

