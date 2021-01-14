/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@interface PUPhotoKitMediaProviderDownloadSimulation : NSObject {

	BOOL _shouldSimulateFailure;
	double _downloadDuration;
	double __updateInterval;
	double __simulatedProgress;

}

@property (nonatomic,readonly) double _updateInterval;                                             //@synthesize _updateInterval=__updateInterval - In the implementation block
@property (assign,setter=_setSimulatedProgress:,nonatomic) double _simulatedProgress;              //@synthesize _simulatedProgress=__simulatedProgress - In the implementation block
@property (assign,nonatomic) BOOL shouldSimulateFailure;                                           //@synthesize shouldSimulateFailure=_shouldSimulateFailure - In the implementation block
@property (assign,nonatomic) double downloadDuration;                                              //@synthesize downloadDuration=_downloadDuration - In the implementation block
-(id)init;
-(void)beginSimulation;
-(void)_updateSimulatedDownload;
-(void)updateSimulationWithProgress:(double)arg1 ;
-(void)endSimulationWithError:(id)arg1 ;
-(BOOL)shouldSimulateFailure;
-(void)setShouldSimulateFailure:(BOOL)arg1 ;
-(double)downloadDuration;
-(void)setDownloadDuration:(double)arg1 ;
-(double)_simulatedProgress;
-(void)_setSimulatedProgress:(double)arg1 ;
-(double)_updateInterval;
@end

