/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@interface SSREnrollmentDataManager : NSObject
+(BOOL)saveMetadata:(id)arg1 isExplicitEnrollment:(BOOL)arg2 ;
+(BOOL)saveUtterance:(id)arg1 utteranceAudioPath:(id)arg2 numSamplesToWrite:(unsigned long long)arg3 isExplicitEnrollment:(BOOL)arg4 ;
+(id)_getBaseMetaDictionaryForUtterancePath:(id)arg1 ;
+(BOOL)writeMetaDict:(id)arg1 atMetaPath:(id)arg2 ;
+(void)saveRawUtteranceAndMetadata:(id)arg1 to:(id)arg2 isExplicitEnrollment:(BOOL)arg3 ;
+(BOOL)saveUtteranceAndMetadata:(id)arg1 atDirectory:(id)arg2 isExplicitEnrollment:(BOOL)arg3 ;
@end

