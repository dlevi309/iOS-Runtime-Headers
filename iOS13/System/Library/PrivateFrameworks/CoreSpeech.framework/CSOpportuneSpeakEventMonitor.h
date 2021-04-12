/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>
#import <libobjc.A.dylib/CSOpportuneSpeakBehaviorMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, CSAudioRecordContext, NSUUID;

@interface CSOpportuneSpeakEventMonitor : CSEventMonitor <CSOpportuneSpeakBehaviorMonitorDelegate> {

	BOOL _isOpportuneSpeakListening;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _audioProviderUUID;
	CSAudioRecordContext* _audioRecordContext;
	NSUUID* _token;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL isOpportuneSpeakListening;                         //@synthesize isOpportuneSpeakListening=_isOpportuneSpeakListening - In the implementation block
@property (nonatomic,retain) NSString * audioProviderUUID;                           //@synthesize audioProviderUUID=_audioProviderUUID - In the implementation block
@property (nonatomic,retain) CSAudioRecordContext * audioRecordContext;              //@synthesize audioRecordContext=_audioRecordContext - In the implementation block
@property (nonatomic,retain) NSUUID * token;                                         //@synthesize token=_token - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSUUID *)token;
-(void)setToken:(NSUUID *)arg1 ;
-(void)_stopMonitoring;
-(BOOL)isStreaming;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)opportuneSpeakBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 audioProviderUUID:(id)arg3 option:(id)arg4 ;
-(void)opportuneSpeakBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 audioProviderUUID:(id)arg3 successfully:(BOOL)arg4 option:(id)arg5 ;
-(void)opportuneSpeakBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 ;
-(void)opportuneSpeakBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 ;
-(CSAudioRecordContext *)audioRecordContext;
-(void)setAudioRecordContext:(CSAudioRecordContext *)arg1 ;
-(void)setAudioProviderUUID:(NSString *)arg1 ;
-(NSString *)audioProviderUUID;
-(void)_notifyStopOpportuneSpeakWithDelay:(double)arg1 ;
-(BOOL)isOpportuneSpeakListening;
-(void)setIsOpportuneSpeakListening:(BOOL)arg1 ;
@end

