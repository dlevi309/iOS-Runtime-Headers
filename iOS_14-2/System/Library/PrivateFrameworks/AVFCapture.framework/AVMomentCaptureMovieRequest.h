/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
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
-(AVMomentCaptureMovie *)movie;
-(void)setResolvedSettings:(AVMomentCaptureMovieRecordingResolvedSettings *)arg1 ;
-(void)setFiredCallbackFlags:(unsigned)arg1 ;
-(AVWeakReferencingDelegateStorage *)delegateStorage;
-(void)setMovie:(AVMomentCaptureMovie *)arg1 ;
-(AVMomentCaptureMovieRecordingResolvedSettings *)resolvedSettings;
-(AVMomentCaptureSettings *)momentCaptureSettings;
-(id)_initWithDelegate:(id)arg1 movieRecordingSettings:(id)arg2 momentSettings:(id)arg3 ;
-(unsigned long long)expectedMovieCount;
-(AVMomentCaptureMovie *)spatialOverCaptureMovie;
-(void)setSpatialOverCaptureMovie:(AVMomentCaptureMovie *)arg1 ;
-(unsigned)firedCallbackFlags;
-(void)dealloc;
-(AVMomentCaptureMovieRecordingSettings *)unresolvedSettings;
@end

