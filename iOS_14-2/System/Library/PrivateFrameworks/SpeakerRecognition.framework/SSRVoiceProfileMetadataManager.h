/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/


@interface SSRVoiceProfileMetadataManager : NSObject
+(id)_getBaseMetaDictionaryForUtterancePath:(id)arg1 ;
+(BOOL)isUtteranceImplicitlyTrained:(id)arg1 ;
+(id)getUtteranceEnrollmentType:(id)arg1 ;
+(id)recordedTimeStampFromFileName:(id)arg1 ;
+(id)recordedTimeStampOfFile:(id)arg1 ;
+(void)_writeMetaDict:(id)arg1 forUtterancePath:(id)arg2 ;
+(void)saveUtteranceMetadataForUtterance:(id)arg1 enrollmentType:(id)arg2 isHandheldEnrollment:(BOOL)arg3 triggerSource:(id)arg4 audioInput:(id)arg5 otherBiometricResult:(unsigned long long)arg6 containsPayload:(BOOL)arg7 ;
@end

