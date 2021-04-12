/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
*/

#import <AudioToolbox/AudioToolbox-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSError, NSString;

@interface HapticServer : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	map<unsigned int, NSMutableArray<ServerWrapper *> *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, NSMutableArray<ServerWrapper *> *> > >* _instanceMap;
	mutex _instanceMutex;
	ServerManager* _manager;
	map<int, std::__1::bitset<255>, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, std::__1::bitset<255> > > >* _processIndexMap;
	unsigned long long _initCount;
	unsigned long long _audioPrewarmCount;
	unsigned long long _hapticsPrewarmCount;
	unsigned long long _audioRunningCount;
	unsigned long long _hapticsRunningCount;
	unsigned long long _runningChannelIDCount;
	unsigned long long _SSSClientID;
	NSError* _savedError;
	WatchdogTimer* _SSSCompletionWatchDogTimer;

}

@property (readonly) unsigned long long initCount;                  //@synthesize initCount=_initCount - In the implementation block
@property (readonly) ServerManager* manager;                        //@synthesize manager=_manager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(ServerManager*)manager;
-(void)cleanup;
-(int)stopPrewarm;
-(shared_ptr<ClientEntry>*)entryWithID:(unsigned long long)arg1 ;
-(void)incrementChannelID;
-(unsigned long long)getChannelID;
-(void)doStopRunning:(shared_ptr<ClientEntry>*)arg1 ;
-(int)doStartRunning:(shared_ptr<ClientEntry>*)arg1 ;
-(void)doStopPrewarm:(shared_ptr<ClientEntry>*)arg1 ;
-(int)doPrewarm:(shared_ptr<ClientEntry>*)arg1 ;
-(void)doReleaseClientResources:(shared_ptr<ClientEntry>*)arg1 ;
-(BOOL)incrementInit:(id*)arg1 ;
-(void)addListener:(id)arg1 forAudioSessionID:(unsigned)arg2 ;
-(void)removeProcessEntry:(unsigned long long)arg1 ;
-(void)removeListener:(id)arg1 withAudioSessionID:(unsigned)arg2 ;
-(void)doStopRunningForInterrupt:(shared_ptr<ClientEntry>*)arg1 ;
-(BOOL)setupSSSClient;
-(int)loadSynthPreset;
-(void)decrementInit;
-(void)incrementPrewarmCountForAudio:(BOOL)arg1 haptics:(BOOL)arg2 ;
-(void)decrementPrewarmCountAndStopAudio:(BOOL)arg1 stopHaptics:(BOOL)arg2 ;
-(void)incrementRunningCountForAudio:(BOOL)arg1 haptics:(BOOL)arg2 ;
-(void)decrementRunningCountAndStopAudio:(BOOL)arg1 stopHaptics:(BOOL)arg2 ;
-(void)HandleInterruptionForSessionID:(unsigned)arg1 command:(unsigned)arg2 dictionary:(const CFDictionaryRef)arg3 ;
-(unsigned long long)addProcessEntry:(int)arg1 ;
-(unsigned long long)initCount;
-(int)startPrewarm;
-(int)playVibePattern:(CFDictionaryRef)arg1 gain:(float)arg2 synchronizer:(SSPlayerSynchronizerRef)arg3 flags:(unsigned)arg4 atTime:(double)arg5 completionHandler:(/*^block*/id)arg6 ;
-(int)cancelPatternWithOptions:(CFDictionaryRef)arg1 ;
@end

