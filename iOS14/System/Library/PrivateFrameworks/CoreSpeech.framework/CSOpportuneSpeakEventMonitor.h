/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_stopMonitoring;
-(BOOL)isStreaming;
-(void)opportuneSpeakBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 ;
-(void)opportuneSpeakBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 ;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)setIsOpportuneSpeakListening:(BOOL)arg1 ;
-(void)setAudioRecordContext:(CSAudioRecordContext *)arg1 ;
-(NSString *)audioProviderUUID;
-(void)opportuneSpeakBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 audioProviderUUID:(id)arg3 option:(id)arg4 ;
-(void)setAudioProviderUUID:(NSString *)arg1 ;
-(void)setToken:(NSUUID *)arg1 ;
-(BOOL)isOpportuneSpeakListening;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSUUID *)token;
-(CSAudioRecordContext *)audioRecordContext;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_notifyStopOpportuneSpeakWithDelay:(double)arg1 ;
-(void)opportuneSpeakBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 audioProviderUUID:(id)arg3 successfully:(BOOL)arg4 option:(id)arg5 ;
@end

