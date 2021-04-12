/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)onUpdate;
-(void)beginReport;
-(void)finishReport;
-(long long)addAnalysisBand:(MPCAudioSpectrumAnalyzerBand)arg1 ;
-(void)_resizeBandStorage;
-(long long)numberOfBands;
-(float)averagePowerOfBandAtIndex:(long long)arg1 band:(out MPCAudioSpectrumAnalyzerBand*)arg2 ;
-(void)setOnUpdate:(id)arg1 ;
@end

