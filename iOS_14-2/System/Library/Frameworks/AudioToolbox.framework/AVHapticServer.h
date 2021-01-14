/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
*/

#import <AudioToolbox/AudioToolbox-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSXPCInterface, NSError, NSString;

@interface AVHapticServer : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	map<unsigned int, NSMutableArray<AVServerWrapper *> *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, NSMutableArray<AVServerWrapper *> *> > >* _instanceMap;
	recursive_mutex _instanceMutex;
	NSXPCInterface* _cachedClientInterface;
	NSXPCInterface* _cachedServerInterface;
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
	PowerTimer* _powerTimer;

}

@property (readonly) unsigned long long initCount;                  //@synthesize initCount=_initCount - In the implementation block
@property (readonly) ServerManager* manager;                        //@synthesize manager=_manager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(int)stopPrewarm;
-(int)doPrewarm:(shared_ptr<ClientEntry>*)arg1 ;
-(shared_ptr<ClientEntry>*)entryWithID:(unsigned long long)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(BOOL)incrementInit:(id*)arg1 ;
-(unsigned long long)getChannelID;
-(void)incrementChannelID;
-(void)doStopRunning:(shared_ptr<ClientEntry>*)arg1 audio:(BOOL)arg2 haptics:(BOOL)arg3 ;
-(int)doStartRunning:(shared_ptr<ClientEntry>*)arg1 ;
-(void)doStopPrewarm:(shared_ptr<ClientEntry>*)arg1 audio:(BOOL)arg2 haptics:(BOOL)arg3 ;
-(void)doReleaseClientResources:(shared_ptr<ClientEntry>*)arg1 ;
-(void)addListener:(id)arg1 forAudioSessionID:(unsigned)arg2 ;
-(void)cleanup;
-(void)removeProcessEntry:(unsigned long long)arg1 ;
-(void)removeListener:(id)arg1 withAudioSessionID:(unsigned)arg2 ;
-(void)doStopRunningForInterrupt:(shared_ptr<ClientEntry>*)arg1 audio:(BOOL)arg2 haptics:(BOOL)arg3 ;
-(BOOL)setupSSSClient;
-(int)loadSynthPreset;
-(void)decrementInit;
-(void)dumpProcessEntries:(_sFILE*)arg1 ;
-(void)incrementPrewarmCountForAudio:(BOOL)arg1 haptics:(BOOL)arg2 ;
-(void)decrementPrewarmCountAndStopAudio:(BOOL)arg1 stopHaptics:(BOOL)arg2 ;
-(unsigned long long)addProcessEntry:(int)arg1 ;
-(void)incrementRunningCountForAudio:(BOOL)arg1 haptics:(BOOL)arg2 ;
-(void)decrementRunningCountAndStopAudio:(BOOL)arg1 stopHaptics:(BOOL)arg2 ;
-(void)HandleInterruptionForSessionID:(unsigned)arg1 command:(unsigned)arg2 dictionary:(const CFDictionaryRef)arg3 ;
-(void)displayRunningProcessEntriesWithOnTime:(unsigned long long)arg1 ;
-(int)startPrewarm;
-(int)playVibePattern:(CFDictionaryRef)arg1 gain:(float)arg2 synchronizer:(SSPlayerSynchronizerRef)arg3 flags:(unsigned)arg4 atTime:(double)arg5 completionHandler:(/*^block*/id)arg6 ;
-(int)cancelPatternWithOptions:(CFDictionaryRef)arg1 ;
-(ServerManager*)manager;
-(unsigned long long)initCount;
-(void)dealloc;
@end

