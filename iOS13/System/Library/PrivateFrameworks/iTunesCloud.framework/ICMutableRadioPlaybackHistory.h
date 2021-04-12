/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICRadioPlaybackHistory.h>

@class ICRadioPlaybackHistoryItem, NSArray;

@interface ICMutableRadioPlaybackHistory : ICRadioPlaybackHistory

@property (nonatomic,copy) ICRadioPlaybackHistoryItem * currentTrack; 
@property (assign,nonatomic) long long numberOfSkips; 
@property (nonatomic,copy) NSArray * tracks; 
-(void)setTracks:(NSArray *)arg1 ;
-(void)addTracks:(id)arg1 ;
-(void)_updateTracksUsingBlock:(/*^block*/id)arg1 ;
-(void)_checkCurrentTrackIsPresent;
-(void)addTrack:(id)arg1 ;
-(void)removeExpiredTracks;
-(void)removeTracksAtIndexes:(id)arg1 ;
-(void)replaceTrackAtIndex:(long long)arg1 withTrack:(id)arg2 ;
-(void)setCurrentTrack:(ICRadioPlaybackHistoryItem *)arg1 ;
-(void)setNumberOfSkips:(long long)arg1 ;
@end

