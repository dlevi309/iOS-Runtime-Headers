/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVPlayerItemAccessLogEventInternal, NSDate, NSString;

@interface AVPlayerItemAccessLogEvent : NSObject <NSCopying> {

	AVPlayerItemAccessLogEventInternal* _playerItemAccessLogEvent;

}

@property (nonatomic,readonly) long long numberOfSegmentsDownloaded; 
@property (nonatomic,readonly) long long numberOfMediaRequests; 
@property (nonatomic,readonly) NSDate * playbackStartDate; 
@property (nonatomic,readonly) NSString * URI; 
@property (nonatomic,readonly) NSString * serverAddress; 
@property (nonatomic,readonly) long long numberOfServerAddressChanges; 
@property (nonatomic,readonly) NSString * playbackSessionID; 
@property (nonatomic,readonly) double playbackStartOffset; 
@property (nonatomic,readonly) double segmentsDownloadedDuration; 
@property (nonatomic,readonly) double durationWatched; 
@property (nonatomic,readonly) long long numberOfStalls; 
@property (nonatomic,readonly) long long numberOfBytesTransferred; 
@property (nonatomic,readonly) double transferDuration; 
@property (nonatomic,readonly) double observedBitrate; 
@property (nonatomic,readonly) double indicatedBitrate; 
@property (nonatomic,readonly) double indicatedAverageBitrate; 
@property (nonatomic,readonly) double averageVideoBitrate; 
@property (nonatomic,readonly) double averageAudioBitrate; 
@property (nonatomic,readonly) long long numberOfDroppedVideoFrames; 
@property (nonatomic,readonly) double startupTime; 
@property (nonatomic,readonly) long long downloadOverdue; 
@property (nonatomic,readonly) double observedMaxBitrate; 
@property (nonatomic,readonly) double observedMinBitrate; 
@property (nonatomic,readonly) double observedBitrateStandardDeviation; 
@property (nonatomic,readonly) NSString * playbackType; 
@property (nonatomic,readonly) long long mediaRequestsWWAN; 
@property (nonatomic,readonly) double switchBitrate; 
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)URI;
-(id)serviceIdentifier;
-(NSString *)serverAddress;
-(long long)numberOfDroppedVideoFrames;
-(id)_common_init;
-(long long)numberOfMediaRequests;
-(long long)numberOfSegmentsDownloaded;
-(NSDate *)playbackStartDate;
-(long long)numberOfServerAddressChanges;
-(NSString *)playbackSessionID;
-(double)playbackStartOffset;
-(double)segmentsDownloadedDuration;
-(double)durationWatched;
-(long long)numberOfStalls;
-(long long)numberOfBytesTransferred;
-(double)transferDuration;
-(double)observedBitrate;
-(double)currentObservedBitrate;
-(double)indicatedBitrate;
-(double)indicatedAverageBitrate;
-(double)averageVideoBitrate;
-(double)averageAudioBitrate;
-(double)startupTime;
-(long long)downloadOverdue;
-(long long)entryReasonCode;
-(double)observedMaxBitrate;
-(double)observedMinBitrate;
-(double)observedBitrateStandardDeviation;
-(NSString *)playbackType;
-(long long)mediaRequestsWWAN;
-(double)switchBitrate;
@end

