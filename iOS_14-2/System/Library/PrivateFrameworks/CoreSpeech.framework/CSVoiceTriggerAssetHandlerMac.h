/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSVoiceTriggerAssetHandler.h>
#import <libobjc.A.dylib/CSVoiceTriggerAssetDownloadMonitorDelegate.h>
#import <libobjc.A.dylib/CSFirstUnlockMonitorDelegate.h>
#import <libobjc.A.dylib/CSLanguageCodeUpdateMonitorDelegate.h>

@class CSAsset, NSString;

@interface CSVoiceTriggerAssetHandlerMac : CSVoiceTriggerAssetHandler <CSVoiceTriggerAssetDownloadMonitorDelegate, CSFirstUnlockMonitorDelegate, CSLanguageCodeUpdateMonitorDelegate> {

	CSAsset* _cachedAsset;

}

@property (retain) CSAsset * cachedAsset;                           //@synthesize cachedAsset=_cachedAsset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)start;
-(void)CSVoiceTriggerAssetDownloadMonitor:(id)arg1 didInstallNewAsset:(BOOL)arg2 ;
-(void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2 ;
-(void)_checkNewAssetAvailablity;
-(void)CSFirstUnlockMonitor:(id)arg1 didReceiveFirstUnlock:(BOOL)arg2 ;
-(void)setCachedAsset:(CSAsset *)arg1 ;
-(void)getVoiceTriggerAsset:(/*^block*/id)arg1 ;
-(CSAsset *)cachedAsset;
-(void)_getVoiceTriggerAssetFromAssetManager:(/*^block*/id)arg1 ;
@end

