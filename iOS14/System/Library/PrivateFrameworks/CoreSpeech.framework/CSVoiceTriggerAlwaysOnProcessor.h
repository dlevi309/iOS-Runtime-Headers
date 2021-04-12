/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_setBuiltInRTModelDictionary:(id)arg1 ;
-(void)disableVoiceTriggerOnAlwaysOnProcessorWithCompletion:(/*^block*/id)arg1 ;
-(void)enableVoiceTriggerOnAlwaysOnProcessorWithAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

