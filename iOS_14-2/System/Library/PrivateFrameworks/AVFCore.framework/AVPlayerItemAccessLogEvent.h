/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
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
-(NSString *)URI;
-(double)startupTime;
-(id)_common_init;
-(double)transferDuration;
-(double)currentObservedBitrate;
-(double)indicatedAverageBitrate;
-(double)averageVideoBitrate;
-(double)averageAudioBitrate;
-(long long)downloadOverdue;
-(long long)entryReasonCode;
-(double)observedMaxBitrate;
-(double)observedMinBitrate;
-(double)observedBitrateStandardDeviation;
-(long long)mediaRequestsWWAN;
-(double)switchBitrate;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)serverAddress;
-(NSString *)playbackSessionID;
-(NSDate *)playbackStartDate;
-(long long)numberOfSegmentsDownloaded;
-(long long)numberOfServerAddressChanges;
-(double)playbackStartOffset;
-(double)segmentsDownloadedDuration;
-(double)durationWatched;
-(long long)numberOfStalls;
-(long long)numberOfBytesTransferred;
-(double)observedBitrate;
-(double)indicatedBitrate;
-(long long)numberOfMediaRequests;
-(long long)numberOfDroppedVideoFrames;
-(id)serviceIdentifier;
-(NSString *)playbackType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

