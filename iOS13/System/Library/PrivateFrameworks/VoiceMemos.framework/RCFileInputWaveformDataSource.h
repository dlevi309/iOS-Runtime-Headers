/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/RCWaveformDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, NSURL;

@interface RCFileInputWaveformDataSource : RCWaveformDataSource {

	NSObject*<OS_dispatch_queue> _serialQueue;
	double _cachedDuration;
	float _loadingProgress;
	NSURL* _AVFileURL;
	double _destinationBeginTime;
	SCD_Struct_RC3 _sourceTimeRange;

}

@property (nonatomic,copy,readonly) NSURL * AVFileURL;                    //@synthesize AVFileURL=_AVFileURL - In the implementation block
@property (assign,nonatomic) double destinationBeginTime;                 //@synthesize destinationBeginTime=_destinationBeginTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_RC3 sourceTimeRange;              //@synthesize sourceTimeRange=_sourceTimeRange - In the implementation block
@property (nonatomic,readonly) BOOL savesGeneratedWaveform; 
-(double)duration;
-(BOOL)setPaused:(BOOL)arg1 ;
-(void)startLoading;
-(float)loadingProgress;
-(void)setLoadingProgress:(float)arg1 ;
-(SCD_Struct_RC3)sourceTimeRange;
-(void)setSourceTimeRange:(SCD_Struct_RC3)arg1 ;
-(void)finishLoadingWithCompletionTimeout:(unsigned long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)saveGeneratedWaveformIfNecessary;
-(BOOL)shouldMergeLiveWaveform;
-(id)synchronouslyApproximateWaveformSegmentsByReadingCurrentFileAheadTimeRange:(SCD_Struct_RC3)arg1 ;
-(id)initWithAVFileURL:(id)arg1 savesGeneratedWaveform:(BOOL)arg2 segmentFlushInterval:(double)arg3 ;
-(id)initWithAVFileURL:(id)arg1 ;
-(void)setDestinationBeginTime:(double)arg1 ;
-(double)destinationBeginTime;
-(BOOL)savesGeneratedWaveform;
-(NSURL *)AVFileURL;
@end

