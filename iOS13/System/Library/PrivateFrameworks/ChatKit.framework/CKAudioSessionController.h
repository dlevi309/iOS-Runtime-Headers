/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@interface CKAudioSessionController : NSObject {

	BOOL _active;
	BOOL _dirty;
	unsigned long long _options;

}

@property (getter=isActive) BOOL active;                            //@synthesize active=_active - In the implementation block
@property (getter=isDirty) BOOL dirty;                              //@synthesize dirty=_dirty - In the implementation block
@property (assign) unsigned long long options;                      //@synthesize options=_options - In the implementation block
@property (readonly) BOOL shouldUseSpeaker; 
@property (readonly) BOOL shouldStopPlayingWhenSilent; 
@property (readonly) BOOL shouldDuckOthers; 
+(id)queue;
+(id)shareInstance;
-(id)init;
-(void)dealloc;
-(unsigned long long)options;
-(void)setDirty:(BOOL)arg1 ;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(BOOL)isDirty;
-(void)deactivate;
-(void)activateWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)audioSessionInterruption:(id)arg1 ;
-(BOOL)shouldUseSpeaker;
-(BOOL)shouldStopPlayingWhenSilent;
-(BOOL)shouldDuckOthers;
-(void)audioSessionRouteChange:(id)arg1 ;
-(void)audioSessionMediaServicesWereLost:(id)arg1 ;
-(void)audioSessionMediaServicesWereReset:(id)arg1 ;
-(void)setActive:(BOOL)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)configureAudioSessionWithOptions:(unsigned long long)arg1 ;
@end

