/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@interface VUIPostPlayUpsellConfig : NSObject {

	BOOL _isUpsellOnPlaybackExitDisabled;
	BOOL _isUpsellOnPIPPlaybackExitEnabled;
	BOOL _isUpsellLimitedPerShow;
	BOOL _isUpsellLimitedPerChannel;
	double _minPlaybackProgressPercentage;
	unsigned long long _upsellMaxCountPerShow;
	double _upsellCountDurationPerShow;
	unsigned long long _upsellMaxCountPerChannel;
	double _upsellCountDurationPerChannel;

}

@property (assign,nonatomic) BOOL isUpsellOnPlaybackExitDisabled;                      //@synthesize isUpsellOnPlaybackExitDisabled=_isUpsellOnPlaybackExitDisabled - In the implementation block
@property (assign,nonatomic) BOOL isUpsellOnPIPPlaybackExitEnabled;                    //@synthesize isUpsellOnPIPPlaybackExitEnabled=_isUpsellOnPIPPlaybackExitEnabled - In the implementation block
@property (assign,nonatomic) double minPlaybackProgressPercentage;                     //@synthesize minPlaybackProgressPercentage=_minPlaybackProgressPercentage - In the implementation block
@property (assign,nonatomic) BOOL isUpsellLimitedPerShow;                              //@synthesize isUpsellLimitedPerShow=_isUpsellLimitedPerShow - In the implementation block
@property (assign,nonatomic) unsigned long long upsellMaxCountPerShow;                 //@synthesize upsellMaxCountPerShow=_upsellMaxCountPerShow - In the implementation block
@property (assign,nonatomic) double upsellCountDurationPerShow;                        //@synthesize upsellCountDurationPerShow=_upsellCountDurationPerShow - In the implementation block
@property (assign,nonatomic) BOOL isUpsellLimitedPerChannel;                           //@synthesize isUpsellLimitedPerChannel=_isUpsellLimitedPerChannel - In the implementation block
@property (assign,nonatomic) unsigned long long upsellMaxCountPerChannel;              //@synthesize upsellMaxCountPerChannel=_upsellMaxCountPerChannel - In the implementation block
@property (assign,nonatomic) double upsellCountDurationPerChannel;                     //@synthesize upsellCountDurationPerChannel=_upsellCountDurationPerChannel - In the implementation block
+(id)sharedInstance;
-(void)setChannelLevelUpsellRateOfMaxCount:(unsigned long long)arg1 inHours:(double)arg2 ;
-(void)setShowLevelUpsellRateOfMaxCount:(unsigned long long)arg1 inHours:(double)arg2 ;
-(void)setMinPlaybackProgressPercentageForUpsellOnExit:(double)arg1 ;
-(void)disableUpsellOnPlaybackExit:(BOOL)arg1 ;
-(void)enableUpsellOnPIPPlaybackExit:(BOOL)arg1 ;
-(BOOL)_isFullScreenPlaybackUIShown;
-(BOOL)_isHistoryArrayFull:(id)arg1 forMaxCount:(unsigned long long)arg2 inDurationWindow:(double)arg3 ;
-(void)_recordUpsellHistoryForShowId:(id)arg1 onChannelId:(id)arg2 ;
-(id)_cleanupHistory:(id)arg1 atCurrentDate:(id)arg2 isShow:(BOOL)arg3 ;
-(id)_trimHistoryArray:(id)arg1 forMaxCount:(unsigned long long)arg2 inDurationWindow:(double)arg3 atCurrentDate:(id)arg4 ;
-(void)configureUsingDictionary:(id)arg1 ;
-(BOOL)canShowUpsellForMediaItem:(id)arg1 withElapsedTime:(double)arg2 ;
-(BOOL)isUpsellOnPlaybackExitDisabled;
-(void)setIsUpsellOnPlaybackExitDisabled:(BOOL)arg1 ;
-(BOOL)isUpsellOnPIPPlaybackExitEnabled;
-(void)setIsUpsellOnPIPPlaybackExitEnabled:(BOOL)arg1 ;
-(double)minPlaybackProgressPercentage;
-(void)setMinPlaybackProgressPercentage:(double)arg1 ;
-(BOOL)isUpsellLimitedPerShow;
-(void)setIsUpsellLimitedPerShow:(BOOL)arg1 ;
-(unsigned long long)upsellMaxCountPerShow;
-(void)setUpsellMaxCountPerShow:(unsigned long long)arg1 ;
-(double)upsellCountDurationPerShow;
-(void)setUpsellCountDurationPerShow:(double)arg1 ;
-(BOOL)isUpsellLimitedPerChannel;
-(void)setIsUpsellLimitedPerChannel:(BOOL)arg1 ;
-(unsigned long long)upsellMaxCountPerChannel;
-(void)setUpsellMaxCountPerChannel:(unsigned long long)arg1 ;
-(double)upsellCountDurationPerChannel;
-(void)setUpsellCountDurationPerChannel:(double)arg1 ;
@end

