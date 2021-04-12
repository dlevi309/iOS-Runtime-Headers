/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSVoiceTriggerEnabledMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CSOSTransaction, NSString;

@interface CSVoiceProfileRetrainManager : NSObject <CSVoiceTriggerEnabledMonitorDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	CSOSTransaction* _retrainerTransaction;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CSOSTransaction * retrainerTransaction;              //@synthesize retrainerTransaction=_retrainerTransaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2 ;
-(void)triggerVoiceProfileRetrainingWithAsset:(id)arg1 ;
-(void)analyzeImplicitUtterance:(id)arg1 withVoiceTriggerContext:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)CSVoiceTriggerEnabledMonitor:(id)arg1 didReceiveEnabled:(BOOL)arg2 ;
-(void)_runVoiceProfileRetrainerWithAsset:(id)arg1 withLanguageCode:(id)arg2 ;
-(BOOL)_checkIfUtteranceTriggerScoreExceedsThreshold:(float)arg1 withVTEI:(id)arg2 ;
-(id)_addUtterances:(id)arg1 withTrainer:(id)arg2 ;
-(void)_retrainTDSRAndSATModelWithAsset:(id)arg1 withLanguageCode:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)_retrainModel:(unsigned long long)arg1 withAsset:(id)arg2 forLanguageCode:(id)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(CSOSTransaction *)retrainerTransaction;
-(void)setRetrainerTransaction:(CSOSTransaction *)arg1 ;
@end

