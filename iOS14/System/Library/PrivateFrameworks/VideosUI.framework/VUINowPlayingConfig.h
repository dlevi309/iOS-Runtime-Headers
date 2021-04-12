/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSArray;

@interface VUINowPlayingConfig : NSObject {

	BOOL _showsLozengeForLivePlayback;
	BOOL _showsStillWatchingAlert;
	BOOL _allowQOSReportingForiTunesLibraryPlayback;
	BOOL _convertMainContentRelativeStartTimeOfZeroToAbsoluteStartTimeOfZero;
	double _stillWatchingAlertDuration;
	double _alertIdleTimeout;
	NSArray* _mediaTypesExcludedFromReporting;

}

@property (assign,nonatomic) BOOL showsLozengeForLivePlayback;                                                     //@synthesize showsLozengeForLivePlayback=_showsLozengeForLivePlayback - In the implementation block
@property (assign,nonatomic) BOOL showsStillWatchingAlert;                                                         //@synthesize showsStillWatchingAlert=_showsStillWatchingAlert - In the implementation block
@property (assign,nonatomic) double stillWatchingAlertDuration;                                                    //@synthesize stillWatchingAlertDuration=_stillWatchingAlertDuration - In the implementation block
@property (assign,nonatomic) double alertIdleTimeout;                                                              //@synthesize alertIdleTimeout=_alertIdleTimeout - In the implementation block
@property (nonatomic,copy) NSArray * mediaTypesExcludedFromReporting;                                              //@synthesize mediaTypesExcludedFromReporting=_mediaTypesExcludedFromReporting - In the implementation block
@property (assign,nonatomic) BOOL allowQOSReportingForiTunesLibraryPlayback;                                       //@synthesize allowQOSReportingForiTunesLibraryPlayback=_allowQOSReportingForiTunesLibraryPlayback - In the implementation block
@property (assign,nonatomic) BOOL convertMainContentRelativeStartTimeOfZeroToAbsoluteStartTimeOfZero;              //@synthesize convertMainContentRelativeStartTimeOfZeroToAbsoluteStartTimeOfZero=_convertMainContentRelativeStartTimeOfZeroToAbsoluteStartTimeOfZero - In the implementation block
-(id)init;
-(BOOL)convertMainContentRelativeStartTimeOfZeroToAbsoluteStartTimeOfZero;
-(BOOL)showsStillWatchingAlert;
-(double)stillWatchingAlertDuration;
-(double)alertIdleTimeout;
-(BOOL)showsLozengeForLivePlayback;
-(void)setShowsLozengeForLivePlayback:(BOOL)arg1 ;
-(void)setShowsStillWatchingAlert:(BOOL)arg1 ;
-(void)setStillWatchingAlertDuration:(double)arg1 ;
-(void)setAlertIdleTimeout:(double)arg1 ;
-(NSArray *)mediaTypesExcludedFromReporting;
-(void)setMediaTypesExcludedFromReporting:(NSArray *)arg1 ;
-(BOOL)allowQOSReportingForiTunesLibraryPlayback;
-(void)setAllowQOSReportingForiTunesLibraryPlayback:(BOOL)arg1 ;
-(void)setConvertMainContentRelativeStartTimeOfZeroToAbsoluteStartTimeOfZero:(BOOL)arg1 ;
@end

