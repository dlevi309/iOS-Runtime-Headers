/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@interface CSVoiceTriggerEnrollmentDataManager : NSObject
+(id)_getBaseMetaDictionaryForUtterancePath:(id)arg1 ;
+(void)saveRawUtteranceAndMetadata:(id)arg1 to:(id)arg2 isExplicitEnrollment:(BOOL)arg3 ;
+(BOOL)saveUtteranceAndMetadata:(id)arg1 atDirectory:(id)arg2 isExplicitEnrollment:(BOOL)arg3 ;
+(BOOL)saveMetadata:(id)arg1 isExplicitEnrollment:(BOOL)arg2 ;
+(BOOL)saveUtterance:(id)arg1 utteranceAudioPath:(id)arg2 numSamplesToWrite:(unsigned long long)arg3 isExplicitEnrollment:(BOOL)arg4 ;
+(BOOL)writeMetaDict:(id)arg1 atMetaPath:(id)arg2 ;
@end

