/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPRTCReportingEvent.h>

@class NSError, NSNumber, NSString;

@interface MPRTCReportingSessionSummaryEvent : MPRTCReportingEvent {

	BOOL _hadBlockingTracklistLoad;
	NSError* _assetLoadError;
	double _assetLoadDuration;
	long long _blockingSecureKeyLoadCount;
	double _blockingSecureKeyLoadDuration;
	double _maximumSecureKeyLoadDuration;
	long long _secureKeyLoadCount;
	NSError* _secureKeyError;
	NSError* _tracklistLoadError;
	double _tracklistLoadDuration;
	NSError* _playbackEndError;
	long long _endReasonType;
	long long _startupState;
	long long _interfaceTypeChangeCount;
	long long _startInterfaceType;
	NSNumber* _perceivedTotalStartupTime;
	NSString* _siriSessionIdentifier;

}

@property (nonatomic,copy) NSError * assetLoadError;                            //@synthesize assetLoadError=_assetLoadError - In the implementation block
@property (assign,nonatomic) double assetLoadDuration;                          //@synthesize assetLoadDuration=_assetLoadDuration - In the implementation block
@property (assign,nonatomic) long long blockingSecureKeyLoadCount;              //@synthesize blockingSecureKeyLoadCount=_blockingSecureKeyLoadCount - In the implementation block
@property (assign,nonatomic) double blockingSecureKeyLoadDuration;              //@synthesize blockingSecureKeyLoadDuration=_blockingSecureKeyLoadDuration - In the implementation block
@property (assign,nonatomic) double maximumSecureKeyLoadDuration;               //@synthesize maximumSecureKeyLoadDuration=_maximumSecureKeyLoadDuration - In the implementation block
@property (assign,nonatomic) long long secureKeyLoadCount;                      //@synthesize secureKeyLoadCount=_secureKeyLoadCount - In the implementation block
@property (nonatomic,copy) NSError * secureKeyError;                            //@synthesize secureKeyError=_secureKeyError - In the implementation block
@property (nonatomic,copy) NSError * tracklistLoadError;                        //@synthesize tracklistLoadError=_tracklistLoadError - In the implementation block
@property (assign,nonatomic) double tracklistLoadDuration;                      //@synthesize tracklistLoadDuration=_tracklistLoadDuration - In the implementation block
@property (assign,nonatomic) BOOL hadBlockingTracklistLoad;                     //@synthesize hadBlockingTracklistLoad=_hadBlockingTracklistLoad - In the implementation block
@property (nonatomic,copy) NSError * playbackEndError;                          //@synthesize playbackEndError=_playbackEndError - In the implementation block
@property (assign,nonatomic) long long endReasonType;                           //@synthesize endReasonType=_endReasonType - In the implementation block
@property (assign,nonatomic) long long startupState;                            //@synthesize startupState=_startupState - In the implementation block
@property (assign,nonatomic) long long interfaceTypeChangeCount;                //@synthesize interfaceTypeChangeCount=_interfaceTypeChangeCount - In the implementation block
@property (assign,nonatomic) long long startInterfaceType;                      //@synthesize startInterfaceType=_startInterfaceType - In the implementation block
@property (nonatomic,copy) NSNumber * perceivedTotalStartupTime;                //@synthesize perceivedTotalStartupTime=_perceivedTotalStartupTime - In the implementation block
@property (nonatomic,copy) NSString * siriSessionIdentifier;                    //@synthesize siriSessionIdentifier=_siriSessionIdentifier - In the implementation block
-(id)newRTCReportingPayloadDictionary;
-(unsigned short)rtcReportingCategory;
-(NSString *)siriSessionIdentifier;
-(void)setSiriSessionIdentifier:(NSString *)arg1 ;
-(long long)startupState;
-(NSError *)assetLoadError;
-(void)setAssetLoadError:(NSError *)arg1 ;
-(double)assetLoadDuration;
-(void)setAssetLoadDuration:(double)arg1 ;
-(long long)blockingSecureKeyLoadCount;
-(void)setBlockingSecureKeyLoadCount:(long long)arg1 ;
-(double)maximumSecureKeyLoadDuration;
-(void)setMaximumSecureKeyLoadDuration:(double)arg1 ;
-(long long)secureKeyLoadCount;
-(NSError *)secureKeyError;
-(void)setSecureKeyLoadCount:(long long)arg1 ;
-(void)setSecureKeyError:(NSError *)arg1 ;
-(NSError *)tracklistLoadError;
-(void)setTracklistLoadError:(NSError *)arg1 ;
-(long long)endReasonType;
-(BOOL)hadBlockingTracklistLoad;
-(void)setHadBlockingTracklistLoad:(BOOL)arg1 ;
-(NSError *)playbackEndError;
-(void)setPlaybackEndError:(NSError *)arg1 ;
-(void)setEndReasonType:(long long)arg1 ;
-(void)setStartupState:(long long)arg1 ;
-(long long)interfaceTypeChangeCount;
-(void)setInterfaceTypeChangeCount:(long long)arg1 ;
-(long long)startInterfaceType;
-(void)setStartInterfaceType:(long long)arg1 ;
-(double)blockingSecureKeyLoadDuration;
-(void)setBlockingSecureKeyLoadDuration:(double)arg1 ;
-(NSNumber *)perceivedTotalStartupTime;
-(void)setPerceivedTotalStartupTime:(NSNumber *)arg1 ;
-(double)tracklistLoadDuration;
-(void)setTracklistLoadDuration:(double)arg1 ;
@end

