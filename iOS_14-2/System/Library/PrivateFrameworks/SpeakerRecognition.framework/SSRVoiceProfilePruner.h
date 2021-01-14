/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/

#import <libobjc.A.dylib/SSRSpeakerRecognitionControllerDelegate.h>

@class NSString;

@interface SSRVoiceProfilePruner : NSObject <SSRSpeakerRecognitionControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_retrainVoiceProfile:(id)arg1 withAsset:(id)arg2 ;
-(void)_getScoresForAudio:(id)arg1 withController:(id)arg2 withDetector:(id)arg3 forProfile:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
-(unsigned long long)_deleteUtterances:(id)arg1 ;
-(void)pruneVoiceProfile:(id)arg1 forSpIdType:(unsigned long long)arg2 withAsset:(id)arg3 ;
@end

