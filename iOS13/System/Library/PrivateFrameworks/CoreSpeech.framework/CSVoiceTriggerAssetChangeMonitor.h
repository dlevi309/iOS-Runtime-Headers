/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setDelegate:(id<CSVoiceTriggerAssetChangeDelegate>)arg1 ;
-(void)startMonitoring;
-(void)notifyVoiceTriggerAssetChanged;
@end

