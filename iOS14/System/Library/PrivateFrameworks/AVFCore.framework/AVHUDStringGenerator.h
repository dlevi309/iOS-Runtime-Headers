/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVPlayer, NSNumber, NSString;

@interface AVHUDStringGenerator : NSObject {

	AVPlayer* _player;
	NSNumber* _audioSpatializationMode;
	NSString* _playerItemURL;
	NSString* _assetType;
	NSString* _sessionID;
	NSString* _configurationGroup;
	NSString* _trackFormatDescriptions;
	NSNumber* _displayResolutionHeight;
	NSNumber* _displayResolutionWidth;
	NSNumber* _refreshRate;
	NSString* _videoRange;
	NSNumber* _videoApproximateDisplaySizeHeight;
	NSNumber* _videoApproximateDisplaySizeWidth;
	NSNumber* _presentationSizeHeight;
	NSNumber* _presentationSizeWidth;
	NSNumber* _currentFrameRate;
	NSNumber* _nominalFrameRate;
	NSNumber* _networkBandiwdth;
	NSNumber* _averageVideoBitrate;
	NSNumber* _averageAudioBitrate;
	NSString* _assetTrackInfo;
	NSNumber* _peakIndicatedBitrate;
	NSNumber* _averageIndicatedBitrate;
	NSNumber* _variantIndex;
	NSNumber* _totalFrameDrops;
	NSNumber* _decoderFrameDrops;
	NSNumber* _imageQueueFrameDrops;
	NSNumber* _bufferedVideoPlayed;
	NSNumber* _bufferedVideoRemaining;
	NSString* _customPerfInfo;
	NSNumber* _totalStalls;
	long long _prevVariantIdx;
	long long _prevStallCount;
	long long _totalStallCount;
	BOOL _spatialDiagnostics;
	BOOL _captureCompleteURI;
	NSString* _formattedDisplayString;

}

@property (__weak) AVPlayer * player;                                           //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) BOOL spatialDiagnostics;                           //@synthesize spatialDiagnostics=_spatialDiagnostics - In the implementation block
@property (assign,nonatomic) BOOL captureCompleteURI;                           //@synthesize captureCompleteURI=_captureCompleteURI - In the implementation block
@property (assign,nonatomic) long long prevVariantIdx;                          //@synthesize prevVariantIdx=_prevVariantIdx - In the implementation block
@property (assign,nonatomic) long long prevStallCount;                          //@synthesize prevStallCount=_prevStallCount - In the implementation block
@property (assign,nonatomic) long long totalStallCount;                         //@synthesize totalStallCount=_totalStallCount - In the implementation block
@property (nonatomic,readonly) NSString * formattedDisplayString;               //@synthesize formattedDisplayString=_formattedDisplayString - In the implementation block
@property (nonatomic,readonly) NSNumber * displayResolutionHeight;              //@synthesize displayResolutionHeight=_displayResolutionHeight - In the implementation block
@property (nonatomic,readonly) NSNumber * displayResolutionWidth;               //@synthesize displayResolutionWidth=_displayResolutionWidth - In the implementation block
@property (nonatomic,readonly) NSNumber * audioSpatializationMode;              //@synthesize audioSpatializationMode=_audioSpatializationMode - In the implementation block
+(id)descriptionStringForTracksOfPlayerItem:(id)arg1 ;
+(id)descriptionStringForBitRate:(double)arg1 ;
+(id)descriptionStringForFormatOfTrack:(id)arg1 ;
+(id)descriptionStringForVideoRangeOfFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(void)update;
-(long long)prevVariantIdx;
-(long long)prevStallCount;
-(void)updateFromPlayer;
-(void)updateFromPlayerItem;
-(NSString *)formattedDisplayString;
-(BOOL)spatialDiagnostics;
-(void)setSpatialDiagnostics:(BOOL)arg1 ;
-(BOOL)captureCompleteURI;
-(void)setCaptureCompleteURI:(BOOL)arg1 ;
-(void)setPrevVariantIdx:(long long)arg1 ;
-(void)setPrevStallCount:(long long)arg1 ;
-(long long)totalStallCount;
-(void)setTotalStallCount:(long long)arg1 ;
-(NSNumber *)displayResolutionWidth;
-(NSNumber *)displayResolutionHeight;
-(NSNumber *)audioSpatializationMode;
-(void)dealloc;
@end

