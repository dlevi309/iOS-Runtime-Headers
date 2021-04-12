/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/_HMAudioControlDelegate.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@protocol HMAudioControlDelegate;
@class HMMediaSession, _HMAudioControl, NSString, NSUUID;

@interface HMAudioControl : NSObject <_HMAudioControlDelegate, HMObjectMerge> {

	id<HMAudioControlDelegate> _delegate;
	HMMediaSession* _mediaSession;
	_HMAudioControl* _audioControl;

}

@property (nonatomic,retain) _HMAudioControl * audioControl;              //@synthesize audioControl=_audioControl - In the implementation block
@property (assign) float volume; 
@property (getter=isMuted) BOOL muted; 
@property (__weak) id<HMAudioControlDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (__weak) HMMediaSession * mediaSession;                         //@synthesize mediaSession=_mediaSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
-(id<HMAudioControlDelegate>)delegate;
-(void)setDelegate:(id<HMAudioControlDelegate>)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(BOOL)isMuted;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)__configureWithContext:(id)arg1 ;
-(HMMediaSession *)mediaSession;
-(void)audioControl:(id)arg1 didUpdateVolume:(float)arg2 ;
-(void)audioControl:(id)arg1 didUpdateMuted:(BOOL)arg2 ;
-(id)initWithMediaSession:(id)arg1 ;
-(void)updateVolume:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateMuted:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(_HMAudioControl *)audioControl;
-(void)setMediaSession:(HMMediaSession *)arg1 ;
-(void)setAudioControl:(_HMAudioControl *)arg1 ;
@end

