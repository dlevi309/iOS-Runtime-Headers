/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSURL, MPAVItem, AVAsset, AVPlayerItem;

@interface MPMovie : NSObject {

	NSURL* _url;
	long long _movieSourceType;
	double _startPlaybackTime;
	double _endPlaybackTime;
	BOOL _explicitlySetMovieSourceType;
	BOOL _movieIsUnplayable;
	double _lastKnownDuration;
	CGSize _lastKnownNaturalSize;
	long long _lastKnownType;
	MPAVItem* _item;

}

@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) MPAVItem * item;                                 //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) AVAsset * asset; 
@property (nonatomic,readonly) AVPlayerItem * playerItem; 
@property (nonatomic,readonly) unsigned long long movieMediaTypes; 
@property (assign,nonatomic) long long movieSourceType; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double playableDuration; 
@property (nonatomic,readonly) CGSize naturalSize; 
@property (assign,nonatomic) double startPlaybackTime; 
@property (assign,nonatomic) double endPlaybackTime; 
+(id)movieWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)movieWithAsset:(id)arg1 error:(id*)arg2 ;
+(id)movieWithPlayerItem:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(MPAVItem *)item;
-(NSURL *)url;
-(double)duration;
-(AVAsset *)asset;
-(CGSize)naturalSize;
-(AVPlayerItem *)playerItem;
-(unsigned long long)movieMediaTypes;
-(void)setMovieSourceType:(long long)arg1 ;
-(long long)movieSourceType;
-(double)playableDuration;
-(void)setEndPlaybackTime:(double)arg1 ;
-(double)endPlaybackTime;
-(void)_sharedInit;
-(id)_initWithAsset:(id)arg1 error:(id*)arg2 ;
-(id)_initWithPlayerItem:(id)arg1 error:(id*)arg2 ;
-(id)_initWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)setStartPlaybackTime:(double)arg1 ;
-(double)startPlaybackTime;
-(void)_durationAvailableNotification:(id)arg1 ;
-(void)_naturalSizeAvailableNotification:(id)arg1 ;
-(void)_typeAvailableNotification:(id)arg1 ;
-(void)_determineMediaType;
@end

