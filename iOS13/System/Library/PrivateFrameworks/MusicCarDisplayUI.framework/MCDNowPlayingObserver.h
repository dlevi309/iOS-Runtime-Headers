/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
*/


@class NSHashTable, NSString;

@interface MCDNowPlayingObserver : NSObject {

	NSHashTable* _observers;
	unsigned _playbackState;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) unsigned playbackState;                 //@synthesize playbackState=_playbackState - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(unsigned)playbackState;
-(void)setPlaybackState:(unsigned)arg1 ;
-(void)_notifyObservers;
-(unsigned)queryPlaybackState;
-(void)playbackStateChanged:(id)arg1 ;
@end

