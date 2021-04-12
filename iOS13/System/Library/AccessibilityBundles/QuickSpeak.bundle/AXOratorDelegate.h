/*
* Generated on Monday, March 1, 2021 at 2:35:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/QuickSpeak.bundle/QuickSpeak
*/


@protocol AXOratorDelegate <NSObject>
@optional
-(void)oratorDidResumeSpeaking:(id)arg1;
-(void)oratorShouldFetchNextElements:(id)arg1 shouldScrollOpaqueProviderIfNecessary:(BOOL)arg2;
-(void)oratorDidFinishSpeaking:(id)arg1;
-(void)oratorDidChangeSpeakingRate:(id)arg1;
-(void)oratorDidPauseSpeaking:(id)arg1;
-(void)oratorDidStartSpeaking:(id)arg1;
-(void)oratorDidCancelSpeaking:(id)arg1;
-(void)orator:(id)arg1 willSpeakRange:(NSRange)arg2 ofContent:(id)arg3;

@end

