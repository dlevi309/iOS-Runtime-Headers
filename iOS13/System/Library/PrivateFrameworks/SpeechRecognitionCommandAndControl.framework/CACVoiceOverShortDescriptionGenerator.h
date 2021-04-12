/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


@interface CACVoiceOverShortDescriptionGenerator : NSObject
+(id)sharedInstance;
-(id)_items:(id)arg1 byKeyGeneratedUsingBlock:(/*^block*/id)arg2 ;
-(void)_addToItemShortDescriptionPairs:(id)arg1 foritems:(id)arg2 keyGenerationBlocks:(id)arg3 shortDescriptionGenerationBlocks:(id)arg4 lastResortShortDescriptionGenerationBlock:(/*^block*/id)arg5 ;
-(id)_lowerPitchForString:(id)arg1 ;
-(id)shortDescriptionsForItems:(id)arg1 style:(long long)arg2 ;
@end

