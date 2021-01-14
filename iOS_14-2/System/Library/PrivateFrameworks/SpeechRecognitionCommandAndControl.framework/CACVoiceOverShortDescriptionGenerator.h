/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


@interface CACVoiceOverShortDescriptionGenerator : NSObject
+(id)sharedInstance;
-(id)_items:(id)arg1 byKeyGeneratedUsingBlock:(/*^block*/id)arg2 ;
-(void)_addToItemShortDescriptionPairs:(id)arg1 foritems:(id)arg2 keyGenerationBlocks:(id)arg3 shortDescriptionGenerationBlocks:(id)arg4 lastResortShortDescriptionGenerationBlock:(/*^block*/id)arg5 ;
-(id)_lowerPitchForString:(id)arg1 ;
-(id)shortDescriptionsForItems:(id)arg1 style:(long long)arg2 ;
@end

