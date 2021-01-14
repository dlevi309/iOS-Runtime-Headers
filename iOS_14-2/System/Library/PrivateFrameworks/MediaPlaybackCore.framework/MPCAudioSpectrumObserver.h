/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
@interface MPCAudioSpectrumObserver : NSObject {

	MPCAudioSpectrumAnalyzerBandInternal* _bands;
	unsigned long long _bandsStorageSize;
	long long _numberOfBands;
	/*^block*/id _onUpdate;

}

@property (nonatomic,readonly) long long numberOfBands;              //@synthesize numberOfBands=_numberOfBands - In the implementation block
@property (nonatomic,copy) id onUpdate;                              //@synthesize onUpdate=_onUpdate - In the implementation block
+(id)defaultObserver;
-(id)onUpdate;
-(void)dealloc;
-(void)beginReport;
-(void)finishReport;
-(long long)addAnalysisBand:(MPCAudioSpectrumAnalyzerBand)arg1 ;
-(void)_resizeBandStorage;
-(long long)numberOfBands;
-(float)averagePowerOfBandAtIndex:(long long)arg1 band:(out MPCAudioSpectrumAnalyzerBand*)arg2 ;
-(void)setOnUpdate:(id)arg1 ;
@end

