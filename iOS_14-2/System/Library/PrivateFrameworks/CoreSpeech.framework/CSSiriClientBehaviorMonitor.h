/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol OS_dispatch_queue;
@class CSAudioRecordContext, NSObject, NSHashTable;

@interface CSSiriClientBehaviorMonitor : NSObject {

	BOOL _isStreaming;
	CSAudioRecordContext* _audioRecordContext;
	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _observers;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) BOOL isStreaming;                                       //@synthesize isStreaming=_isStreaming - In the implementation block
@property (nonatomic,retain) CSAudioRecordContext * audioRecordContext;              //@synthesize audioRecordContext=_audioRecordContext - In the implementation block
+(id)sharedInstance;
-(void)unregisterObserver:(id)arg1 ;
-(BOOL)isStreaming;
-(void)registerObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(id)init;
-(void)notifyWillStartStreamWithContext:(id)arg1 option:(id)arg2 ;
-(void)setIsStreaming:(BOOL)arg1 ;
-(void)setAudioRecordContext:(CSAudioRecordContext *)arg1 ;
-(void)notifyDidStartStreamWithContext:(id)arg1 successfully:(BOOL)arg2 option:(id)arg3 withEventUUID:(id)arg4 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)notifyWillStopStream:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)notifyDidStopStream:(id)arg1 withEventUUID:(id)arg2 ;
-(CSAudioRecordContext *)audioRecordContext;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

