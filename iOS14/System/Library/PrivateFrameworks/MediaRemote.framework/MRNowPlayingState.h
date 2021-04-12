/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, MRPlaybackQueue, NSString, MRPlayerPath, MRPlaybackQueueRequest, _MRSetStateMessageProtobuf, NSDictionary, NSData;

@interface MRNowPlayingState : NSObject <NSCopying> {

	BOOL _hasPlaybackState;
	BOOL _hasPlaybackStateTimestamp;
	unsigned _playbackState;
	NSArray* _supportedCommands;
	MRPlaybackQueue* _playbackQueue;
	NSString* _displayID;
	NSString* _displayName;
	MRPlayerPath* _playerPath;
	MRPlaybackQueueRequest* _request;
	double _playbackStateTimestamp;
	unsigned long long _playbackQueueCapabilities;

}

@property (nonatomic,readonly) _MRSetStateMessageProtobuf * protobuf; 
@property (nonatomic,copy) NSDictionary * nowPlayingInfo; 
@property (nonatomic,copy) NSArray * supportedCommands;                                 //@synthesize supportedCommands=_supportedCommands - In the implementation block
@property (nonatomic,copy) MRPlaybackQueue * playbackQueue;                             //@synthesize playbackQueue=_playbackQueue - In the implementation block
@property (nonatomic,copy) NSString * displayID;                                        //@synthesize displayID=_displayID - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                      //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) MRPlayerPath * playerPath;                                   //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,copy) MRPlaybackQueueRequest * request;                            //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackState;                                     //@synthesize hasPlaybackState=_hasPlaybackState - In the implementation block
@property (assign,nonatomic) unsigned playbackState;                                    //@synthesize playbackState=_playbackState - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackStateTimestamp;                            //@synthesize hasPlaybackStateTimestamp=_hasPlaybackStateTimestamp - In the implementation block
@property (assign,nonatomic) double playbackStateTimestamp;                             //@synthesize playbackStateTimestamp=_playbackStateTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL containsArtwork; 
@property (assign,nonatomic) unsigned long long playbackQueueCapabilities;              //@synthesize playbackQueueCapabilities=_playbackQueueCapabilities - In the implementation block
@property (nonatomic,readonly) NSData * data; 
-(void)setPlaybackState:(unsigned)arg1 ;
-(void)setNowPlayingInfo:(NSDictionary *)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithPlayerPath:(id)arg1 ;
-(void)setRequest:(MRPlaybackQueueRequest *)arg1 ;
-(unsigned)playbackState;
-(BOOL)hasPlaybackStateTimestamp;
-(void)setPlaybackQueueCapabilities:(unsigned long long)arg1 ;
-(void)setHasPlaybackState:(BOOL)arg1 ;
-(void)setPlaybackStateTimestamp:(double)arg1 ;
-(id)copyWithoutArtwork;
-(void)setHasPlaybackStateTimestamp:(BOOL)arg1 ;
-(void)setDisplayID:(NSString *)arg1 ;
-(MRPlaybackQueue *)playbackQueue;
-(void)setPlaybackQueue:(MRPlaybackQueue *)arg1 ;
-(NSArray *)supportedCommands;
-(id)initWithData:(id)arg1 ;
-(NSDictionary *)nowPlayingInfo;
-(MRPlaybackQueueRequest *)request;
-(id)description;
-(NSString *)displayID;
-(void)setPlayerPath:(MRPlayerPath *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSData *)data;
-(MRPlayerPath *)playerPath;
-(_MRSetStateMessageProtobuf *)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setSupportedCommands:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(unsigned long long)playbackQueueCapabilities;
-(BOOL)hasPlaybackState;
-(double)playbackStateTimestamp;
-(BOOL)containsArtwork;
@end

