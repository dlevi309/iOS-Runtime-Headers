/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)URI;
-(NSString *)serverAddress;
-(NSString *)playbackSessionID;
-(NSDate *)playbackStartDate;
-(id)_initWithAVItemAccessLogEvent:(id)arg1 ;
-(unsigned long long)numberOfSegmentsDownloaded;
-(unsigned long long)numberOfServerAddressChanges;
-(double)playbackStartOffset;
-(double)segmentsDownloadedDuration;
-(double)durationWatched;
-(long long)numberOfStalls;
-(long long)numberOfBytesTransferred;
-(double)observedBitrate;
-(double)indicatedBitrate;
-(long long)numberOfDroppedVideoFrames;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

