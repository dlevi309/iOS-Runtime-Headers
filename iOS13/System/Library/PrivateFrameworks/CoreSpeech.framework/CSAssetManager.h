/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSVoiceTriggerAssetMetaUpdateMonitorDelegate.h>
#import <libobjc.A.dylib/CSSpeechEndpointAssetMetaUpdateMonitorDelegate.h>
#import <libobjc.A.dylib/CSAssetControllerDelegate.h>
#import <libobjc.A.dylib/CSLanguageCodeUpdateMonitorDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class CSPolicy, NSString, CSAssetDownloadingOption, NSMutableDictionary, NSObject;

@interface CSAssetManager : NSObject <CSVoiceTriggerAssetMetaUpdateMonitorDelegate, CSSpeechEndpointAssetMetaUpdateMonitorDelegate, CSAssetControllerDelegate, CSLanguageCodeUpdateMonitorDelegate> {

	CSPolicy* _enablePolicy;
	NSString* _currentLanguageCode;
	CSAssetDownloadingOption* _downloadingOption;
	NSMutableDictionary* _observers;
	NSObject*<OS_dispatch_source> _downloadTimer;
	long long _downloadTimerCount;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSString * currentLanguageCode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)currentLanguageCode;
-(void)_fetchRemoteMetaData;
-(id)assetOfType:(unsigned long long)arg1 language:(id)arg2 ;
-(void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2 ;
-(void)setAssetDownloadingOption:(id)arg1 ;
-(void)assetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2 ;
-(id)initWithDownloadOption:(id)arg1 ;
-(void)addObserver:(id)arg1 forAssetType:(unsigned long long)arg2 ;
-(void)_createPeriodicalDownloadTimer;
-(void)_startPeriodicalDownload;
-(void)_stopPeriodicalDownload;
-(BOOL)_canFetchRemoteAsset:(unsigned long long)arg1 ;
-(id)allInstalledAssetsOfType:(unsigned long long)arg1 language:(id)arg2 ;
-(void)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)assetForCurrentLanguageOfType:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)CSVoiceTriggerAssetMetaUpdateMonitor:(id)arg1 didReceiveNewVoiceTriggerAssetMetaData:(BOOL)arg2 ;
-(void)CSSpeechEndpointAssetMetaUpdateMonitor:(id)arg1 didReceiveNewSpeechEndpointAssetMetaData:(BOOL)arg2 ;
-(void)CSAssetController:(id)arg1 didDownloadNewAssetForType:(unsigned long long)arg2 ;
-(id)assetForCurrentLanguageOfType:(unsigned long long)arg1 ;
-(id)installedAssetForCurrentLanguageOfType:(unsigned long long)arg1 ;
-(void)installedAssetForCurrentLanguageOfType:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeObserver:(id)arg1 forAssetType:(unsigned long long)arg2 ;
@end

