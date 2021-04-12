/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol OS_dispatch_group, OS_dispatch_queue;
@class AVVoiceTriggerClient, NSObject;

@interface CSVoiceTriggerAlwaysOnProcessor : NSObject {

	AVVoiceTriggerClient* _alwaysOnProcessorController;
	NSObject*<OS_dispatch_group> _aopSwitchGroup;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(void)enableVoiceTriggerOnAlwaysOnProcessorWithAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)disableVoiceTriggerOnAlwaysOnProcessorWithCompletion:(/*^block*/id)arg1 ;
-(void)_setBuiltInRTModelDictionary:(id)arg1 ;
@end

