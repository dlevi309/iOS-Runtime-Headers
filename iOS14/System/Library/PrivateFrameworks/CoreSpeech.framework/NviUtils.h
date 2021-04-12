/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@interface NviUtils : NSObject
+(id)timeStampString;
+(id)strRepForNviSignalType:(unsigned long long)arg1 ;
+(id)strRepForNviDataSourceType:(unsigned long long)arg1 ;
+(BOOL)isNviEnabled;
+(id)strRepForNviSignalMask:(unsigned long long)arg1 ;
+(unsigned long long)nviSignalTypeForStr:(id)arg1 ;
+(unsigned long long)nviDataSourceTypeForStr:(id)arg1 ;
+(BOOL)_createDirAtPath:(id)arg1 ;
+(long long)getVoiceTriggerEndSampleCountFromVTEI:(id)arg1 ;
+(double)getVoiceTriggerEndSecsFromVTEI:(id)arg1 ;
+(id)readJsonDictionaryAt:(id)arg1 ;
+(id)getValueFromDictionaryOfDictionaries:(id)arg1 keypath:(id)arg2 ;
+(BOOL)createDirAtPath:(id)arg1 ;
@end

