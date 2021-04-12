/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSArray;

@interface VUINowPlayingConfig : NSObject {

	BOOL _showsLozengeForLivePlayback;
	BOOL _showsStillWatchingAlert;
	double _stillWatchingAlertDuration;
	double _alertIdleTimeout;
	NSArray* _mediaTypesExcludedFromReporting;

}

@property (assign,nonatomic) BOOL showsLozengeForLivePlayback;                     //@synthesize showsLozengeForLivePlayback=_showsLozengeForLivePlayback - In the implementation block
@property (assign,nonatomic) BOOL showsStillWatchingAlert;                         //@synthesize showsStillWatchingAlert=_showsStillWatchingAlert - In the implementation block
@property (assign,nonatomic) double stillWatchingAlertDuration;                    //@synthesize stillWatchingAlertDuration=_stillWatchingAlertDuration - In the implementation block
@property (assign,nonatomic) double alertIdleTimeout;                              //@synthesize alertIdleTimeout=_alertIdleTimeout - In the implementation block
@property (nonatomic,copy) NSArray * mediaTypesExcludedFromReporting;              //@synthesize mediaTypesExcludedFromReporting=_mediaTypesExcludedFromReporting - In the implementation block
-(id)init;
-(BOOL)showsStillWatchingAlert;
-(double)stillWatchingAlertDuration;
-(double)alertIdleTimeout;
-(NSArray *)mediaTypesExcludedFromReporting;
-(BOOL)showsLozengeForLivePlayback;
-(void)setShowsLozengeForLivePlayback:(BOOL)arg1 ;
-(void)setShowsStillWatchingAlert:(BOOL)arg1 ;
-(void)setStillWatchingAlertDuration:(double)arg1 ;
-(void)setAlertIdleTimeout:(double)arg1 ;
-(void)setMediaTypesExcludedFromReporting:(NSArray *)arg1 ;
@end

