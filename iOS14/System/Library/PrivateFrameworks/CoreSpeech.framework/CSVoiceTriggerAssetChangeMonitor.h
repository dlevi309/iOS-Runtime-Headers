/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol OS_dispatch_queue, CSVoiceTriggerAssetChangeDelegate;
@class NSObject;

@interface CSVoiceTriggerAssetChangeMonitor : NSObject {

	int _notifyToken;
	NSObject*<OS_dispatch_queue> _queue;
	id<CSVoiceTriggerAssetChangeDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSVoiceTriggerAssetChangeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedMonitor;
-(id)init;
-(id<CSVoiceTriggerAssetChangeDelegate>)delegate;
-(void)startMonitoring;
-(void)setDelegate:(id<CSVoiceTriggerAssetChangeDelegate>)arg1 ;
-(void)notifyVoiceTriggerAssetChanged;
@end

