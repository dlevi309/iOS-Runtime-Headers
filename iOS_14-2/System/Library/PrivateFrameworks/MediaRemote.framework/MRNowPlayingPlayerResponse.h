/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MRPlayerPath, NSArray, MRPlaybackQueue, NSDate;

@interface MRNowPlayingPlayerResponse : NSObject <NSCopying> {

	unsigned _playbackState;
	MRPlayerPath* _playerPath;
	NSArray* _supportedCommands;
	MRPlaybackQueue* _playbackQueue;
	NSDate* _lastPlayingDate;

}

@property (nonatomic,copy) MRPlayerPath * playerPath;                    //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,copy) NSArray * supportedCommands;                  //@synthesize supportedCommands=_supportedCommands - In the implementation block
@property (nonatomic,copy) MRPlaybackQueue * playbackQueue;              //@synthesize playbackQueue=_playbackQueue - In the implementation block
@property (nonatomic,copy) NSDate * lastPlayingDate;                     //@synthesize lastPlayingDate=_lastPlayingDate - In the implementation block
@property (assign,nonatomic) unsigned playbackState;                     //@synthesize playbackState=_playbackState - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayedRecently; 
-(void)setPlaybackState:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)playbackState;
-(MRPlaybackQueue *)playbackQueue;
-(void)setPlaybackQueue:(MRPlaybackQueue *)arg1 ;
-(NSArray *)supportedCommands;
-(BOOL)hasPlayedRecently;
-(id)description;
-(void)setPlayerPath:(MRPlayerPath *)arg1 ;
-(MRPlayerPath *)playerPath;
-(void)setLastPlayingDate:(NSDate *)arg1 ;
-(NSDate *)lastPlayingDate;
-(void)setSupportedCommands:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

