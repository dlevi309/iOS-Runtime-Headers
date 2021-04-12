/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
*/


@interface IMAudioSessionController : NSObject {

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
+(id)sharedInstance;
+(void)__setSingleton__im:(id)arg1 ;
+(id)__singleton__im;
+(id)queue;
-(void)setDirty:(BOOL)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)isDirty;
-(void)activateWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)configureAudioSessionWithOptions:(unsigned long long)arg1 ;
-(unsigned long long)options;
-(BOOL)shouldUseSpeaker;
-(BOOL)shouldStopPlayingWhenSilent;
-(BOOL)shouldDuckOthers;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)deactivate;
@end

