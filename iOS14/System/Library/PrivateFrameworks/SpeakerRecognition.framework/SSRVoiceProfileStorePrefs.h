/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/


@interface SSRVoiceProfileStorePrefs : NSObject
+(id)sharedStorePrefs;
-(long long)getVoiceProfileStoreVersion;
-(id)loadKnownUserVoiceProfiles;
-(void)setVoiceProfileStoreVersion:(unsigned long long)arg1 ;
-(void)saveKnownUserVoiceProfiles:(id)arg1 ;
@end

