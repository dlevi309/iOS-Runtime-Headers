/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@class AVWeakReferencingDelegateStorage, AVMomentCaptureSettings, AVMomentCaptureMovieRecordingSettings, AVMomentCaptureMovieRecordingResolvedSettings, AVMomentCaptureMovie;

@interface AVMomentCaptureMovieRequest : NSObject {

	AVWeakReferencingDelegateStorage* _delegateStorage;
	AVMomentCaptureSettings* _momentCaptureSettings;
	AVMomentCaptureMovieRecordingSettings* _unresolvedSettings;
	AVMomentCaptureMovieRecordingResolvedSettings* _resolvedSettings;
	unsigned _firedCallbackFlags;
	AVMomentCaptureMovie* movie;
	AVMomentCaptureMovie* spatialOverCaptureMovie;
	unsigned long long _expectedMovieCount;
	AVMomentCaptureMovie* _movie;
	AVMomentCaptureMovie* _spatialOverCaptureMovie;

}

@property (readonly) AVWeakReferencingDelegateStorage * delegateStorage;                                    //@synthesize delegateStorage=_delegateStorage - In the implementation block
@property (readonly) AVMomentCaptureSettings * momentCaptureSettings;                                       //@synthesize momentCaptureSettings=_momentCaptureSettings - In the implementation block
@property (readonly) AVMomentCaptureMovieRecordingSettings * unresolvedSettings;                            //@synthesize unresolvedSettings=_unresolvedSettings - In the implementation block
@property (nonatomic,retain) AVMomentCaptureMovieRecordingResolvedSettings * resolvedSettings; 
@property (nonatomic,readonly) unsigned long long expectedMovieCount;                                       //@synthesize expectedMovieCount=_expectedMovieCount - In the implementation block
@property (assign,nonatomic) unsigned firedCallbackFlags;                                                   //@synthesize firedCallbackFlags=_firedCallbackFlags - In the implementation block
@property (nonatomic,retain) AVMomentCaptureMovie * movie;                                                  //@synthesize movie=_movie - In the implementation block
@property (nonatomic,retain) AVMomentCaptureMovie * spatialOverCaptureMovie;                                //@synthesize spatialOverCaptureMovie=_spatialOverCaptureMovie - In the implementation block
+(id)requestWithDelegate:(id)arg1 movieRecordingSettings:(id)arg2 momentSettings:(id)arg3 ;
-(void)dealloc;
-(AVWeakReferencingDelegateStorage *)delegateStorage;
-(AVMomentCaptureMovieRecordingResolvedSettings *)resolvedSettings;
-(void)setResolvedSettings:(AVMomentCaptureMovieRecordingResolvedSettings *)arg1 ;
-(AVMomentCaptureMovieRecordingSettings *)unresolvedSettings;
-(unsigned)firedCallbackFlags;
-(void)setFiredCallbackFlags:(unsigned)arg1 ;
-(id)_initWithDelegate:(id)arg1 movieRecordingSettings:(id)arg2 momentSettings:(id)arg3 ;
-(AVMomentCaptureSettings *)momentCaptureSettings;
-(unsigned long long)expectedMovieCount;
-(AVMomentCaptureMovie *)movie;
-(void)setMovie:(AVMomentCaptureMovie *)arg1 ;
-(AVMomentCaptureMovie *)spatialOverCaptureMovie;
-(void)setSpatialOverCaptureMovie:(AVMomentCaptureMovie *)arg1 ;
@end

