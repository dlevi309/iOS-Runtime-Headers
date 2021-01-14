/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPlaybackState:(unsigned)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)_notifyObservers;
-(id)init;
-(unsigned)playbackState;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)dealloc;
-(unsigned)queryPlaybackState;
-(void)playbackStateChanged:(id)arg1 ;
@end

