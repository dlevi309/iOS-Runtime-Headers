/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <NanoMediaRemote/NMRNowPlayingState.h>

@class NSNumber, NSString;

@interface NMRPlaceholderNowPlayingState : NMRNowPlayingState {

	BOOL explicitTrack;
	BOOL alwaysLive;
	BOOL playbackRateCommandSupported;
	BOOL nextTrackCommandEnabled;
	BOOL previousTrackCommandEnabled;
	BOOL skipForwardCommandEnabled;
	BOOL skipBackwardCommandEnabled;
	float playbackRate;
	float preferredPlaybackRate;
	unsigned playbackState;
	NSNumber* itemPersistentID;
	NSString* title;
	NSString* artist;
	NSString* album;
	NSString* collectionTitle;
	NSString* radioStationName;
	double fastForwardTimeInterval;
	double rewindTimeInterval;

}

@property (nonatomic,copy) NSNumber * itemPersistentID; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * artist; 
@property (nonatomic,copy) NSString * album; 
@property (nonatomic,copy) NSString * collectionTitle; 
@property (assign,nonatomic) float playbackRate; 
@property (assign,nonatomic) float preferredPlaybackRate; 
@property (assign,nonatomic) unsigned playbackState; 
@property (assign,getter=isExplicitTrack,nonatomic) BOOL explicitTrack; 
@property (nonatomic,retain) NSString * radioStationName; 
@property (assign,getter=isAlwaysLive,nonatomic) BOOL alwaysLive; 
@property (assign,getter=isPlaybackRateCommandSupported,nonatomic) BOOL playbackRateCommandSupported; 
@property (assign,getter=isNextTrackCommandEnabled,nonatomic) BOOL nextTrackCommandEnabled; 
@property (assign,getter=isPreviousTrackCommandEnabled,nonatomic) BOOL previousTrackCommandEnabled; 
@property (assign,getter=isSkipForwardCommandEnabled,nonatomic) BOOL skipForwardCommandEnabled; 
@property (assign,getter=isSkipBackwardCommandEnabled,nonatomic) BOOL skipBackwardCommandEnabled; 
@property (assign,nonatomic) double fastForwardTimeInterval; 
@property (assign,nonatomic) double rewindTimeInterval; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)album;
-(NSString *)artist;
-(void)setAlbum:(NSString *)arg1 ;
-(float)playbackRate;
-(void)setPlaybackRate:(float)arg1 ;
-(void)setArtist:(NSString *)arg1 ;
-(unsigned)playbackState;
-(BOOL)isExplicitTrack;
-(BOOL)isAlwaysLive;
-(void)setPlaybackState:(unsigned)arg1 ;
-(void)setExplicitTrack:(BOOL)arg1 ;
-(NSString *)radioStationName;
-(void)setRadioStationName:(NSString *)arg1 ;
-(void)setPreferredPlaybackRate:(float)arg1 ;
-(float)preferredPlaybackRate;
-(NSNumber *)itemPersistentID;
-(void)setItemPersistentID:(NSNumber *)arg1 ;
-(NSString *)collectionTitle;
-(void)setCollectionTitle:(NSString *)arg1 ;
-(BOOL)isPlaybackRateCommandSupported;
-(BOOL)isNextTrackCommandEnabled;
-(BOOL)isPreviousTrackCommandEnabled;
-(BOOL)isSkipForwardCommandEnabled;
-(BOOL)isSkipBackwardCommandEnabled;
-(double)fastForwardTimeInterval;
-(double)rewindTimeInterval;
-(void)setAlwaysLive:(BOOL)arg1 ;
-(void)setPlaybackRateCommandSupported:(BOOL)arg1 ;
-(void)setNextTrackCommandEnabled:(BOOL)arg1 ;
-(void)setPreviousTrackCommandEnabled:(BOOL)arg1 ;
-(void)setSkipForwardCommandEnabled:(BOOL)arg1 ;
-(void)setSkipBackwardCommandEnabled:(BOOL)arg1 ;
-(void)setFastForwardTimeInterval:(double)arg1 ;
-(void)setRewindTimeInterval:(double)arg1 ;
@end

