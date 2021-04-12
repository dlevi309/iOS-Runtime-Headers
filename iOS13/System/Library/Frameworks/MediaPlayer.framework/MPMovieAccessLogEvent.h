/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVPlayerItemAccessLogEvent, NSDate, NSString;

@interface MPMovieAccessLogEvent : NSObject <NSCopying> {

	AVPlayerItemAccessLogEvent* _event;

}

@property (nonatomic,readonly) unsigned long long numberOfSegmentsDownloaded; 
@property (nonatomic,readonly) NSDate * playbackStartDate; 
@property (nonatomic,readonly) NSString * URI; 
@property (nonatomic,readonly) NSString * serverAddress; 
@property (nonatomic,readonly) unsigned long long numberOfServerAddressChanges; 
@property (nonatomic,readonly) NSString * playbackSessionID; 
@property (nonatomic,readonly) double playbackStartOffset; 
@property (nonatomic,readonly) double segmentsDownloadedDuration; 
@property (nonatomic,readonly) double durationWatched; 
@property (nonatomic,readonly) long long numberOfStalls; 
@property (nonatomic,readonly) long long numberOfBytesTransferred; 
@property (nonatomic,readonly) double observedBitrate; 
@property (nonatomic,readonly) double indicatedBitrate; 
@property (nonatomic,readonly) long long numberOfDroppedVideoFrames; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)URI;
-(NSString *)serverAddress;
-(long long)numberOfDroppedVideoFrames;
-(unsigned long long)numberOfSegmentsDownloaded;
-(NSDate *)playbackStartDate;
-(unsigned long long)numberOfServerAddressChanges;
-(NSString *)playbackSessionID;
-(double)playbackStartOffset;
-(double)segmentsDownloadedDuration;
-(double)durationWatched;
-(long long)numberOfStalls;
-(long long)numberOfBytesTransferred;
-(double)observedBitrate;
-(double)indicatedBitrate;
-(id)_initWithAVItemAccessLogEvent:(id)arg1 ;
@end

