/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@protocol _HMAudioControlDelegate;
@class HMFUnfairLock, NSUUID, HMMediaSession, _HMContext, NSString;

@interface _HMAudioControl : NSObject <HMFMessageReceiver, HMObjectMerge> {

	HMFUnfairLock* _lock;
	BOOL _muted;
	float _volume;
	NSUUID* _uniqueIdentifier;
	HMMediaSession* _mediaSession;
	id<_HMAudioControlDelegate> _delegate;
	_HMContext* _context;

}

@property (nonatomic,__weak,readonly) HMMediaSession * mediaSession;                          //@synthesize mediaSession=_mediaSession - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                                     //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (__weak) id<_HMAudioControlDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign) float volume;                                                              //@synthesize volume=_volume - In the implementation block
@property (getter=isMuted) BOOL muted;                                                        //@synthesize muted=_muted - In the implementation block
@property (nonatomic,retain) _HMContext * context;                                            //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)setVolume:(float)arg1 ;
-(id<_HMAudioControlDelegate>)delegate;
-(NSUUID *)uniqueIdentifier;
-(_HMContext *)context;
-(void)setDelegate:(id<_HMAudioControlDelegate>)arg1 ;
-(id)messageDestination;
-(void)setMuted:(BOOL)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_unconfigureContext;
-(void)_unconfigure;
-(HMMediaSession *)mediaSession;
-(float)volume;
-(BOOL)isMuted;
-(void)__configureWithContext:(id)arg1 ;
-(void)_handleAudioControlUpdated:(id)arg1 ;
-(id)initWithMediaSession:(id)arg1 ;
-(void)updateVolume:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateMuted:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_registerNotificationHandlers;
-(void)dealloc;
-(void)setContext:(_HMContext *)arg1 ;
@end

