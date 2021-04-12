/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSVoiceTriggerEnabledMonitorDelegate.h>
#import <libobjc.A.dylib/CSSpeakerRecognitionAssetDownloadMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface CSVoiceProfileRetrainManager : NSObject <CSVoiceTriggerEnabledMonitorDelegate, CSSpeakerRecognitionAssetDownloadMonitorDelegate> {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)_runVoiceProfileRetrainerWithAsset:(id)arg1 withLanguageCode:(id)arg2 ;
-(void)triggerVoiceProfileRetrainingWithAsset:(id)arg1 ;
-(void)_speakerRecognitionCleanupDuplicatedProfilesCallback;
-(void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)CSVoiceTriggerEnabledMonitor:(id)arg1 didReceiveEnabled:(BOOL)arg2 ;
-(void)_speakerRecognitionModelRetrainCallback;
-(void)CSSpeakerRecognitionAssetDownloadMonitor:(id)arg1 didInstallNewAsset:(BOOL)arg2 assetProviderType:(unsigned long long)arg3 ;
@end

