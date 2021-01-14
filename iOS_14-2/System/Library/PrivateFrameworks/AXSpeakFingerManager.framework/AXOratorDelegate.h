/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXSpeakFingerManager.framework/AXSpeakFingerManager
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

