/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@class BWIrisMovieInfo;

@interface BWIrisMovieInfoAndCallback : NSObject {

	BWIrisMovieInfo* _info;
	/*^block*/id _callback;
	BOOL _processed;
	double _overCaptureQualityScore;
	unsigned _overCaptureQualityScoringVersion;

}

@property (nonatomic,readonly) BWIrisMovieInfo * info;                               //@synthesize info=_info - In the implementation block
@property (nonatomic,readonly) id callback;                                          //@synthesize callback=_callback - In the implementation block
@property (assign,nonatomic) BOOL processed;                                         //@synthesize processed=_processed - In the implementation block
@property (assign,nonatomic) double overCaptureQualityScore;                         //@synthesize overCaptureQualityScore=_overCaptureQualityScore - In the implementation block
@property (assign,nonatomic) unsigned overCaptureQualityScoringVersion;              //@synthesize overCaptureQualityScoringVersion=_overCaptureQualityScoringVersion - In the implementation block
+(id)movieInfoAndCallbackWithMovieInfo:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)callback;
-(BWIrisMovieInfo *)info;
-(BOOL)processed;
-(void)setProcessed:(BOOL)arg1 ;
-(id)_initWithMovieInfo:(id)arg1 callback:(/*^block*/id)arg2 ;
-(double)overCaptureQualityScore;
-(void)setOverCaptureQualityScore:(double)arg1 ;
-(unsigned)overCaptureQualityScoringVersion;
-(void)setOverCaptureQualityScoringVersion:(unsigned)arg1 ;
@end

