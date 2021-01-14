/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSSpeakerRecognitionAssetMetaUpdateMonitor : CSEventMonitor {

	int _notifyToken;

}
+(id)sharedInstance;
-(void)_stopMonitoring;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(const char*)_asssetMetaUpdatedKey;
-(void)_notifyObserver:(id)arg1 ;
-(void)_didReceiveSpeakerRecognitionAssetMetaData;
@end

