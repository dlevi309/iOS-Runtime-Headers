/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/


@class NSUserDefaults, NSDate;

@interface SiriUIPreferences : NSObject {

	NSUserDefaults* _userDefaults;
	long long _numberOfTimesSiriCardShown;
	BOOL _voiceRequestMadeWhileInCarDND;
	NSDate* _previousSiriRequestErrorTimestamp;
	long long _siriRequestErrorCount;

}
+(id)sharedPreferences;
-(id)init;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(BOOL)boolForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(long long)integerForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)voiceRequestMadeWhileInCarDND;
-(long long)numberOfTimesCarDNDSiriCardShown;
-(void)setNumberOfTimesCarDNDSiriCardShown:(long long)arg1 ;
-(id)previousSiriRequestErrorTimestamp;
-(void)setPreviousSiriRequestErrorTimestamp:(id)arg1 ;
-(long long)siriRequestErrorCount;
-(void)setSiriRequestErrorCount:(long long)arg1 ;
-(void)setVoiceRequestMadeWhileInCarDND:(BOOL)arg1 ;
@end

