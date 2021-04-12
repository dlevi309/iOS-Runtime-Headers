/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

